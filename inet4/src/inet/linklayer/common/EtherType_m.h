//
// Generated file, do not edit! Created by nedtool 5.4 from inet/linklayer/common/EtherType.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_ETHERTYPE_M_H
#define __INET_ETHERTYPE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {

/**
 * Enum generated from <tt>inet/linklayer/common/EtherType.msg:27</tt> by nedtool.
 * <pre>
 * //
 * // Some EtherType values (Ethernet II).
 * //
 * enum EtherType
 * {
 *     ETHERTYPE_IPv4 = 0x0800;
 *     ETHERTYPE_ARP = 0x0806;
 *     ETHERTYPE_TRILL = 0x22F3;
 *     ETHERTYPE_L2_ISIS = 0x22F4;
 *     ETHERTYPE_RARP = 0x8035;
 *     ETHERTYPE_8021Q_TAG = 0x8100;
 *     ETHERTYPE_IPv6 = 0x86DD;
 *     ETHERTYPE_NEXT_HOP_FORWARDING = 0x86FF;    // not in standard, INET spceific value for \@NextHopForwarding
 *     ETHERTYPE_FLOW_CONTROL = 0x8808;
 *     ETHERTYPE_8021ad_S_TAG = 0x88A8;
 *     ETHERTYPE_MPLS_UNICAST = 0x8847;
 *     ETHERTYPE_MPLS_MULTICAST = 0x8848;
 * }
 * </pre>
 */
enum EtherType {
    ETHERTYPE_IPv4 = 0x0800,
    ETHERTYPE_ARP = 0x0806,
    ETHERTYPE_TRILL = 0x22F3,
    ETHERTYPE_L2_ISIS = 0x22F4,
    ETHERTYPE_RARP = 0x8035,
    ETHERTYPE_8021Q_TAG = 0x8100,
    ETHERTYPE_IPv6 = 0x86DD,
    ETHERTYPE_NEXT_HOP_FORWARDING = 0x86FF,
    ETHERTYPE_FLOW_CONTROL = 0x8808,
    ETHERTYPE_8021ad_S_TAG = 0x88A8,
    ETHERTYPE_MPLS_UNICAST = 0x8847,
    ETHERTYPE_MPLS_MULTICAST = 0x8848
};

// cplusplus {{
    inline bool isEth2Type(int typeOrLength)  { return typeOrLength >= 0x600 || typeOrLength == 0; }  // typeOrLength is type
    inline bool isIeee8023Length(int typeOrLength)  { return typeOrLength > 0 && typeOrLength < 0x600; }  // typeOrLength is length
// }}

} // namespace inet

#endif // ifndef __INET_ETHERTYPE_M_H

