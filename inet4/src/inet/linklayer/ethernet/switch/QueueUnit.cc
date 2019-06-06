// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//


#include "inet/common/IProtocolRegistrationListener.h"
#include "inet/common/LayeredProtocolBase.h"
#include "inet/common/lifecycle/ModuleOperations.h"
#include "inet/common/ModuleAccess.h"
#include "inet/common/Protocol.h"
#include "inet/common/ProtocolTag_m.h"
#include "inet/common/StringFormat.h"
#include "inet/linklayer/common/InterfaceTag_m.h"
#include "inet/linklayer/ethernet/EtherFrame_m.h"
#include "inet/linklayer/ethernet/EtherMacBase.h"
#include "inet/linklayer/ethernet/Ethernet.h"
#include "inet/linklayer/ethernet/switch/MacRelayUnit.h"
#include "inet/linklayer/ethernet/switch/QueueUnit.h"

namespace inet {

Define_Module(QueueUnit);

void QueueUnit::initialize(int stage)
{
    LayeredProtocolBase::initialize(stage);

    if (stage == INITSTAGE_LINK_LAYER) {
        outrate = 100;
        delayTime = SimTime(10);//*getModuleFromPar<SimTime>(par("switchDelay"), this);

     //   registerService(Protocol::ethernetMac, nullptr, gate("ifIn"));
     //   registerProtocol(Protocol::ethernetMac, gate("upperLayerOut"), nullptr);
    }
}

void QueueUnit::handleLowerPacket(Packet *packet)
{
    handleAndDispatchFrame(packet);
}

void QueueUnit::handleAndDispatchFrame(Packet *packet)
{
    if (inProgress){
        outQueue.push(packet);
    }else{
        inProgress = true;

        const auto& frame = packet->peekAtFront<EthernetMacHeader>();
        EV << "Sending frame " << frame << " with dest address " << frame->getDest() << endl;

        auto interfaceReq = packet->addTagIfAbsent<InterfaceReq>(); // add tag for dispatch
        interfaceReq->setInterfaceId(2); // set designated interface
        sendDelayed(packet, delayTime, "upperLayerOut");

        auto length = packet->getTotalLength().get();

        SimTime offset(length/outrate);
        scheduleAt(simTime() + offset, new cMessage);
    }
}

void QueueUnit::handleSelfMessage(cMessage *msg)
{
    Packet* packet = outQueue.front();
    if (packet == 0){
        inProgress = false;
    }else{
        outQueue.pop();
        const auto& frame = packet->peekAtFront<EthernetMacHeader>();
        EV << "Sending frame " << frame << " with dest address " << frame->getDest() << endl;
        sendDelayed(packet, delayTime, "upperLayerOut");

        auto length = packet->getTotalLength().get();

        SimTime offset(length/outrate);
        scheduleAt(simTime() +  offset, new cMessage);
    }
}


} // namespace inet
