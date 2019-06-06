//
// Generated file, do not edit! Created by nedtool 5.4 from inet/routing/dymo/Dymo.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET__DYMO_DYMO_M_H
#define __INET__DYMO_DYMO_M_H

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
namespace dymo {

class AddressBlock;
class RreqTimer;
class RreqWaitRrepTimer;
class RreqBackoffTimer;
class RreqHolddownTimer;
class DymoPacket;
class RteMsg;
class Rreq;
class Rrep;
class RrepAck;
class Rerr;
} // namespace dymo
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address

// cplusplus {{
#include "inet/routing/dymo/DymoDefs.h"
// }}


namespace inet {
namespace dymo {

/**
 * Enum generated from <tt>inet/routing/dymo/Dymo.msg:31</tt> by nedtool.
 * <pre>
 * // TODO: metric types are defined in a separate [RFC 6551]
 * enum DymoMetricType
 * {
 *     HOP_COUNT = 3;    // Hop Count has Metric Type assignment 3
 * }
 * </pre>
 */
enum DymoMetricType {
    HOP_COUNT = 3
};

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:50</tt> by nedtool.
 * <pre>
 * class AddressBlock extends cObject
 * {
 *     L3Address address;
 *     int prefixLength;
 *     bool hasValidityTime;
 *     simtime_t validityTime;
 *     bool hasMetric;
 *     double metric;
 *     bool hasMetricType;
 *     DymoMetricType metricType;
 *     bool hasSequenceNumber;
 *     DymoSequenceNumber sequenceNumber = 0;
 * }
 * 
 * //
 * // Dymo timer messages
 * //
 * </pre>
 */
class INET_API AddressBlock : public ::omnetpp::cObject
{
  protected:
    L3Address address;
    int prefixLength = 0;
    bool hasValidityTime = false;
    omnetpp::simtime_t validityTime = SIMTIME_ZERO;
    bool hasMetric = false;
    double metric = 0;
    bool hasMetricType = false;
    inet::dymo::DymoMetricType metricType = static_cast<inet::dymo::DymoMetricType>(-1);
    bool hasSequenceNumber = false;
    DymoSequenceNumber sequenceNumber = 0;

  private:
    void copy(const AddressBlock& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AddressBlock&);

  public:
    AddressBlock();
    AddressBlock(const AddressBlock& other);
    virtual ~AddressBlock();
    AddressBlock& operator=(const AddressBlock& other);
    virtual AddressBlock *dup() const override {return new AddressBlock(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getAddress() const;
    virtual L3Address& getAddressForUpdate() { return const_cast<L3Address&>(const_cast<AddressBlock*>(this)->getAddress());}
    virtual void setAddress(const L3Address& address);
    virtual int getPrefixLength() const;
    virtual void setPrefixLength(int prefixLength);
    virtual bool getHasValidityTime() const;
    virtual void setHasValidityTime(bool hasValidityTime);
    virtual omnetpp::simtime_t getValidityTime() const;
    virtual void setValidityTime(omnetpp::simtime_t validityTime);
    virtual bool getHasMetric() const;
    virtual void setHasMetric(bool hasMetric);
    virtual double getMetric() const;
    virtual void setMetric(double metric);
    virtual bool getHasMetricType() const;
    virtual void setHasMetricType(bool hasMetricType);
    virtual inet::dymo::DymoMetricType getMetricType() const;
    virtual void setMetricType(inet::dymo::DymoMetricType metricType);
    virtual bool getHasSequenceNumber() const;
    virtual void setHasSequenceNumber(bool hasSequenceNumber);
    virtual DymoSequenceNumber getSequenceNumber() const;
    virtual void setSequenceNumber(DymoSequenceNumber sequenceNumber);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AddressBlock& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AddressBlock& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:67</tt> by nedtool.
 * <pre>
 * message RreqTimer
 * {
 *     L3Address target;
 * }
 * </pre>
 */
class INET_API RreqTimer : public ::omnetpp::cMessage
{
  protected:
    L3Address target;

  private:
    void copy(const RreqTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RreqTimer&);

  public:
    RreqTimer(const char *name=nullptr, short kind=0);
    RreqTimer(const RreqTimer& other);
    virtual ~RreqTimer();
    RreqTimer& operator=(const RreqTimer& other);
    virtual RreqTimer *dup() const override {return new RreqTimer(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getTarget() const;
    virtual L3Address& getTargetForUpdate() { return const_cast<L3Address&>(const_cast<RreqTimer*>(this)->getTarget());}
    virtual void setTarget(const L3Address& target);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RreqTimer& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RreqTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:71</tt> by nedtool.
 * <pre>
 * message RreqWaitRrepTimer extends RreqTimer
 * {
 *     int retryCount;
 * }
 * </pre>
 */
class INET_API RreqWaitRrepTimer : public ::inet::dymo::RreqTimer
{
  protected:
    int retryCount = 0;

  private:
    void copy(const RreqWaitRrepTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RreqWaitRrepTimer&);

  public:
    RreqWaitRrepTimer(const char *name=nullptr, short kind=0);
    RreqWaitRrepTimer(const RreqWaitRrepTimer& other);
    virtual ~RreqWaitRrepTimer();
    RreqWaitRrepTimer& operator=(const RreqWaitRrepTimer& other);
    virtual RreqWaitRrepTimer *dup() const override {return new RreqWaitRrepTimer(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getRetryCount() const;
    virtual void setRetryCount(int retryCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RreqWaitRrepTimer& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RreqWaitRrepTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:75</tt> by nedtool.
 * <pre>
 * message RreqBackoffTimer extends RreqTimer
 * {
 *     int retryCount;
 * }
 * </pre>
 */
class INET_API RreqBackoffTimer : public ::inet::dymo::RreqTimer
{
  protected:
    int retryCount = 0;

  private:
    void copy(const RreqBackoffTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RreqBackoffTimer&);

  public:
    RreqBackoffTimer(const char *name=nullptr, short kind=0);
    RreqBackoffTimer(const RreqBackoffTimer& other);
    virtual ~RreqBackoffTimer();
    RreqBackoffTimer& operator=(const RreqBackoffTimer& other);
    virtual RreqBackoffTimer *dup() const override {return new RreqBackoffTimer(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getRetryCount() const;
    virtual void setRetryCount(int retryCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RreqBackoffTimer& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RreqBackoffTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:79</tt> by nedtool.
 * <pre>
 * message RreqHolddownTimer extends RreqTimer
 * {
 * }
 * 
 * //
 * // Dymo packets
 * //
 * </pre>
 */
class INET_API RreqHolddownTimer : public ::inet::dymo::RreqTimer
{
  protected:

  private:
    void copy(const RreqHolddownTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RreqHolddownTimer&);

  public:
    RreqHolddownTimer(const char *name=nullptr, short kind=0);
    RreqHolddownTimer(const RreqHolddownTimer& other);
    virtual ~RreqHolddownTimer();
    RreqHolddownTimer& operator=(const RreqHolddownTimer& other);
    virtual RreqHolddownTimer *dup() const override {return new RreqHolddownTimer(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RreqHolddownTimer& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RreqHolddownTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:86</tt> by nedtool.
 * <pre>
 * class DymoPacket extends FieldsChunk
 * {
 *     int hopLimit;
 * }
 * </pre>
 */
class INET_API DymoPacket : public ::inet::FieldsChunk
{
  protected:
    int hopLimit = 0;

  private:
    void copy(const DymoPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DymoPacket&);

  public:
    DymoPacket();
    DymoPacket(const DymoPacket& other);
    virtual ~DymoPacket();
    DymoPacket& operator=(const DymoPacket& other);
    virtual DymoPacket *dup() const override {return new DymoPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getHopLimit() const;
    virtual void setHopLimit(int hopLimit);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const DymoPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, DymoPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:90</tt> by nedtool.
 * <pre>
 * class RteMsg extends DymoPacket
 * {
 *     int hopCount;
 *     AddressBlock originatorNode;
 *     AddressBlock targetNode;
 *     AddressBlock addedNode[];
 * }
 * </pre>
 */
class INET_API RteMsg : public ::inet::dymo::DymoPacket
{
  protected:
    int hopCount = 0;
    AddressBlock originatorNode;
    AddressBlock targetNode;
    AddressBlock *addedNode = nullptr;
    size_t addedNode_arraysize = 0;

  private:
    void copy(const RteMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RteMsg&);

  public:
    RteMsg();
    RteMsg(const RteMsg& other);
    virtual ~RteMsg();
    RteMsg& operator=(const RteMsg& other);
    virtual RteMsg *dup() const override {return new RteMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
    virtual const AddressBlock& getOriginatorNode() const;
    virtual AddressBlock& getOriginatorNodeForUpdate() { handleChange();return const_cast<AddressBlock&>(const_cast<RteMsg*>(this)->getOriginatorNode());}
    virtual void setOriginatorNode(const AddressBlock& originatorNode);
    virtual const AddressBlock& getTargetNode() const;
    virtual AddressBlock& getTargetNodeForUpdate() { handleChange();return const_cast<AddressBlock&>(const_cast<RteMsg*>(this)->getTargetNode());}
    virtual void setTargetNode(const AddressBlock& targetNode);
    virtual void setAddedNodeArraySize(size_t size);
    virtual size_t getAddedNodeArraySize() const;
    virtual const AddressBlock& getAddedNode(size_t k) const;
    virtual AddressBlock& getAddedNodeForUpdate(size_t k) { handleChange();return const_cast<AddressBlock&>(const_cast<RteMsg*>(this)->getAddedNode(k));}
    virtual void setAddedNode(size_t k, const AddressBlock& addedNode);
    virtual void insertAddedNode(const AddressBlock& addedNode);
    virtual void insertAddedNode(size_t k, const AddressBlock& addedNode);
    virtual void eraseAddedNode(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RteMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RteMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:100</tt> by nedtool.
 * <pre>
 * //
 * // Dymo RREQ packet
 * //
 * class Rreq extends RteMsg
 * {
 * }
 * </pre>
 */
class INET_API Rreq : public ::inet::dymo::RteMsg
{
  protected:

  private:
    void copy(const Rreq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Rreq&);

  public:
    Rreq();
    Rreq(const Rreq& other);
    virtual ~Rreq();
    Rreq& operator=(const Rreq& other);
    virtual Rreq *dup() const override {return new Rreq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Rreq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Rreq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:106</tt> by nedtool.
 * <pre>
 * //
 * // Dymo RREP packet
 * //
 * class Rrep extends RteMsg
 * {
 * }
 * </pre>
 */
class INET_API Rrep : public ::inet::dymo::RteMsg
{
  protected:

  private:
    void copy(const Rrep& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Rrep&);

  public:
    Rrep();
    Rrep(const Rrep& other);
    virtual ~Rrep();
    Rrep& operator=(const Rrep& other);
    virtual Rrep *dup() const override {return new Rrep(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Rrep& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Rrep& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:112</tt> by nedtool.
 * <pre>
 * //
 * // Dymo RREP ACK packet
 * //
 * class RrepAck extends DymoPacket
 * {
 * }
 * </pre>
 */
class INET_API RrepAck : public ::inet::dymo::DymoPacket
{
  protected:

  private:
    void copy(const RrepAck& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RrepAck&);

  public:
    RrepAck();
    RrepAck(const RrepAck& other);
    virtual ~RrepAck();
    RrepAck& operator=(const RrepAck& other);
    virtual RrepAck *dup() const override {return new RrepAck(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RrepAck& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RrepAck& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/dymo/Dymo.msg:118</tt> by nedtool.
 * <pre>
 * //
 * // Dymo RERR packet
 * //
 * class Rerr extends DymoPacket
 * {
 *     AddressBlock unreachableNode[];
 * }
 * </pre>
 */
class INET_API Rerr : public ::inet::dymo::DymoPacket
{
  protected:
    AddressBlock *unreachableNode = nullptr;
    size_t unreachableNode_arraysize = 0;

  private:
    void copy(const Rerr& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Rerr&);

  public:
    Rerr();
    Rerr(const Rerr& other);
    virtual ~Rerr();
    Rerr& operator=(const Rerr& other);
    virtual Rerr *dup() const override {return new Rerr(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setUnreachableNodeArraySize(size_t size);
    virtual size_t getUnreachableNodeArraySize() const;
    virtual const AddressBlock& getUnreachableNode(size_t k) const;
    virtual AddressBlock& getUnreachableNodeForUpdate(size_t k) { handleChange();return const_cast<AddressBlock&>(const_cast<Rerr*>(this)->getUnreachableNode(k));}
    virtual void setUnreachableNode(size_t k, const AddressBlock& unreachableNode);
    virtual void insertUnreachableNode(const AddressBlock& unreachableNode);
    virtual void insertUnreachableNode(size_t k, const AddressBlock& unreachableNode);
    virtual void eraseUnreachableNode(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Rerr& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Rerr& obj) {obj.parsimUnpack(b);}

} // namespace dymo
} // namespace inet

#endif // ifndef __INET__DYMO_DYMO_M_H

