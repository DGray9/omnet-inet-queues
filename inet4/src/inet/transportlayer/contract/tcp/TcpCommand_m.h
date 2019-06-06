//
// Generated file, do not edit! Created by nedtool 5.4 from inet/transportlayer/contract/tcp/TcpCommand.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_TCPCOMMAND_M_H
#define __INET_TCPCOMMAND_M_H

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

class TcpCommand;
class TcpErrorInfo;
class TcpOpenCommand;
class TcpAcceptCommand;
class TcpAvailableInfo;
class TcpConnectInfo;
class TcpStatusInfo;
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/networklayer/common/IpProtocolId_m.h" // import inet.networklayer.common.IpProtocolId

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address


namespace inet {

/**
 * Enum generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:32</tt> by nedtool.
 * <pre>
 * //
 * // TCP command codes, sent by the application to TCP. These constants
 * // should be set as message kind on a message sent to the TCP entity.
 * //
 * // \@see ~TcpCommand, ~TcpOpenCommand, ~ITcp
 * //
 * enum TcpCommandCode
 * {
 *     TCP_C_OPEN_ACTIVE = 1;   // active open (must carry ~TcpOpenCommand)
 *     TCP_C_OPEN_PASSIVE = 2;  // passive open (must carry ~TcpOpenCommand)
 *     TCP_C_ACCEPT = 3;        // accept connection
 *     TCP_C_SEND = 4;          // send data (set on data packet)
 *     TCP_C_CLOSE = 5;         // "I have no more data to send"
 *     TCP_C_ABORT = 6;         // abort connection
 *     TCP_C_STATUS = 7;        // request status info (TCP_I_STATUS) from TCP
 *     TCP_C_QUEUE_BYTES_LIMIT = 8; // set send queue limit (in bytes)
 *     TCP_C_READ = 9;          // send request to TCP to deliver data
 *     TCP_C_DESTROY = 10;      // send request to TCP to destroy the socket descriptor
 * }
 * </pre>
 */
enum TcpCommandCode {
    TCP_C_OPEN_ACTIVE = 1,
    TCP_C_OPEN_PASSIVE = 2,
    TCP_C_ACCEPT = 3,
    TCP_C_SEND = 4,
    TCP_C_CLOSE = 5,
    TCP_C_ABORT = 6,
    TCP_C_STATUS = 7,
    TCP_C_QUEUE_BYTES_LIMIT = 8,
    TCP_C_READ = 9,
    TCP_C_DESTROY = 10
};

/**
 * Enum generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:53</tt> by nedtool.
 * <pre>
 * //
 * // TCP indications, sent by TCP to the application. TCP will set these
 * // constants as message kind on messages it sends to the application.
 * //
 * // \@see ~TcpCommand, ~TcpStatusInfo, ~ITcp
 * //
 * enum TcpStatusInd
 * {
 *     TCP_I_DATA = 1;              // data packet (set on data packet)
 *     TCP_I_URGENT_DATA = 2;       // urgent data (set on data packet)
 *     TCP_I_AVAILABLE = 3;         // conncetion available
 *     TCP_I_ESTABLISHED = 4;       // connection established
 *     TCP_I_PEER_CLOSED = 5;       // FIN received from remote TCP
 *     TCP_I_CLOSED = 6;            // connection closed normally (via FIN exchange)
 *     TCP_I_CONNECTION_REFUSED = 7; // connection refused
 *     TCP_I_CONNECTION_RESET = 8;  // connection reset
 *     TCP_I_TIMED_OUT = 9;         // conn-estab timer went off, or max retransm. count reached
 *     TCP_I_STATUS = 10;           // status info (will carry ~TcpStatusInfo)
 *     TCP_I_SEND_MSG = 11;         // send queue abated, send more messages
 *     TCP_I_DATA_NOTIFICATION = 12; // notify the upper layer that data has arrived
 * }
 * </pre>
 */
enum TcpStatusInd {
    TCP_I_DATA = 1,
    TCP_I_URGENT_DATA = 2,
    TCP_I_AVAILABLE = 3,
    TCP_I_ESTABLISHED = 4,
    TCP_I_PEER_CLOSED = 5,
    TCP_I_CLOSED = 6,
    TCP_I_CONNECTION_REFUSED = 7,
    TCP_I_CONNECTION_RESET = 8,
    TCP_I_TIMED_OUT = 9,
    TCP_I_STATUS = 10,
    TCP_I_SEND_MSG = 11,
    TCP_I_DATA_NOTIFICATION = 12
};

/**
 * Enum generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:73</tt> by nedtool.
 * <pre>
 * //
 * // Currently not in use.
 * //
 * enum TcpErrorCode
 * {
 * }
 * </pre>
 */
enum TcpErrorCode {
};

/**
 * Class generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:92</tt> by nedtool.
 * <pre>
 * //
 * // Control info for TCP connections. This class is to be set as control info
 * // (see cMessage::setControlInfo()) on all messages exchanged between TCP and
 * // application, in both directions. Some commands and indications
 * // (TCP_C_OPEN_xxx, TCP_I_STATUS) use subclasses.
 * //
 * // connId identifies the connection locally within the application (internally,
 * // TCP uses the (app gate index, connId) pair to identify the socket).
 * // connId is to be chosen by the application in the open command.
 * //
 * //# TODO explain userId
 * //
 * // \@see ~TcpCommandCode, ~TcpStatusInd, ~TcpOpenCommand, ~TcpStatusInfo, ~ITcp
 * //
 * class TcpCommand extends cObject
 * {
 *     int userId = -1;   // id than can be freely used by the app
 * }
 * </pre>
 */
class INET_API TcpCommand : public ::omnetpp::cObject
{
  protected:
    int userId = -1;

  private:
    void copy(const TcpCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TcpCommand&);

  public:
    TcpCommand();
    TcpCommand(const TcpCommand& other);
    virtual ~TcpCommand();
    TcpCommand& operator=(const TcpCommand& other);
    virtual TcpCommand *dup() const override {return new TcpCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getUserId() const;
    virtual void setUserId(int userId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:101</tt> by nedtool.
 * <pre>
 * //
 * // Currently not in use.
 * //
 * class TcpErrorInfo extends TcpCommand
 * {
 *     TcpErrorCode errorCode;
 *     string messageText;
 * }
 * </pre>
 */
class INET_API TcpErrorInfo : public ::inet::TcpCommand
{
  protected:
    inet::TcpErrorCode errorCode = static_cast<inet::TcpErrorCode>(-1);
    omnetpp::opp_string messageText;

  private:
    void copy(const TcpErrorInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TcpErrorInfo&);

  public:
    TcpErrorInfo();
    TcpErrorInfo(const TcpErrorInfo& other);
    virtual ~TcpErrorInfo();
    TcpErrorInfo& operator=(const TcpErrorInfo& other);
    virtual TcpErrorInfo *dup() const override {return new TcpErrorInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual inet::TcpErrorCode getErrorCode() const;
    virtual void setErrorCode(inet::TcpErrorCode errorCode);
    virtual const char * getMessageText() const;
    virtual void setMessageText(const char * messageText);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpErrorInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpErrorInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:131</tt> by nedtool.
 * <pre>
 * //
 * // Control info to be used for active or passive TCP open.
 * //
 * // localAddr, remoteAddr, localPort, remotePort should be self-explanatory.
 * // localAddr is optional because TCP can learn it from IP when a packet
 * // is received from the peer; localPort is optional because TCP supports
 * // ephemeral ports.
 * //
 * // The fork parameter is used with passive open, and controls what happens
 * // when an incoming connection is received. With fork=true, it emulates
 * // the Unix accept(2) syscall semantics: a new connection structure
 * // is created for the connection (with a new connId, see in ~TcpCommand),
 * // and the connection structure with the old connId remains listening.
 * // With fork=false, all the above does not happen: the first connection
 * // is accepted (with the original connId), and further incoming connections
 * // will be refused by TCP by sending an RST segment.
 * //
 * // The tcpAlgorithmClass field allows per-connection TCP configuration.
 * // The tcpAlgorithmClass field may contain name of class subclassed from
 * // TcpAlgorithm, respectively.
 * // If not set, module parameters with similar names are used.
 * //
 * // \@see ~TcpCommandCode, ~ITcp
 * //
 * class TcpOpenCommand extends TcpCommand
 * {
 *     L3Address localAddr; // may be left empty
 *     L3Address remoteAddr;// required for active open
 *     int localPort = -1;       // required for passive open
 *     int remotePort = -1;      // required for active open
 *     bool fork = false;        // used only for passive open
 *     string tcpAlgorithmClass; // TCP congestion control algorithm; leave empty for default
 * }
 * </pre>
 */
class INET_API TcpOpenCommand : public ::inet::TcpCommand
{
  protected:
    L3Address localAddr;
    L3Address remoteAddr;
    int localPort = -1;
    int remotePort = -1;
    bool fork = false;
    omnetpp::opp_string tcpAlgorithmClass;

  private:
    void copy(const TcpOpenCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TcpOpenCommand&);

  public:
    TcpOpenCommand();
    TcpOpenCommand(const TcpOpenCommand& other);
    virtual ~TcpOpenCommand();
    TcpOpenCommand& operator=(const TcpOpenCommand& other);
    virtual TcpOpenCommand *dup() const override {return new TcpOpenCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getLocalAddr() const;
    virtual L3Address& getLocalAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpOpenCommand*>(this)->getLocalAddr());}
    virtual void setLocalAddr(const L3Address& localAddr);
    virtual const L3Address& getRemoteAddr() const;
    virtual L3Address& getRemoteAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpOpenCommand*>(this)->getRemoteAddr());}
    virtual void setRemoteAddr(const L3Address& remoteAddr);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort);
    virtual bool getFork() const;
    virtual void setFork(bool fork);
    virtual const char * getTcpAlgorithmClass() const;
    virtual void setTcpAlgorithmClass(const char * tcpAlgorithmClass);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpOpenCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpOpenCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:145</tt> by nedtool.
 * <pre>
 * //
 * // Control info to be used to accept an available connection.
 * //
 * class TcpAcceptCommand extends TcpCommand
 * {
 * }
 * 
 * 
 * //
 * // Control info to be used with the SEND command.
 * //
 * // \@see ~TcpCommandCode, ~ITcp
 * //
 * </pre>
 */
class INET_API TcpAcceptCommand : public ::inet::TcpCommand
{
  protected:

  private:
    void copy(const TcpAcceptCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TcpAcceptCommand&);

  public:
    TcpAcceptCommand();
    TcpAcceptCommand(const TcpAcceptCommand& other);
    virtual ~TcpAcceptCommand();
    TcpAcceptCommand& operator=(const TcpAcceptCommand& other);
    virtual TcpAcceptCommand *dup() const override {return new TcpAcceptCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpAcceptCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpAcceptCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:163</tt> by nedtool.
 * <pre>
 * //
 * // Sent with message kind TCP_I_AVAILABLE, to let the app know
 * // about the local and remote IP address and port.
 * //
 * // \@see ~TcpCommandCode, ~ITcp
 * //
 * class TcpAvailableInfo extends TcpCommand
 * {
 *     L3Address localAddr;
 *     L3Address remoteAddr;
 *     int localPort;
 *     int remotePort;
 *     int newSocketId;
 * }
 * </pre>
 */
class INET_API TcpAvailableInfo : public ::inet::TcpCommand
{
  protected:
    L3Address localAddr;
    L3Address remoteAddr;
    int localPort = 0;
    int remotePort = 0;
    int newSocketId = 0;

  private:
    void copy(const TcpAvailableInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TcpAvailableInfo&);

  public:
    TcpAvailableInfo();
    TcpAvailableInfo(const TcpAvailableInfo& other);
    virtual ~TcpAvailableInfo();
    TcpAvailableInfo& operator=(const TcpAvailableInfo& other);
    virtual TcpAvailableInfo *dup() const override {return new TcpAvailableInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getLocalAddr() const;
    virtual L3Address& getLocalAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpAvailableInfo*>(this)->getLocalAddr());}
    virtual void setLocalAddr(const L3Address& localAddr);
    virtual const L3Address& getRemoteAddr() const;
    virtual L3Address& getRemoteAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpAvailableInfo*>(this)->getRemoteAddr());}
    virtual void setRemoteAddr(const L3Address& remoteAddr);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort);
    virtual int getNewSocketId() const;
    virtual void setNewSocketId(int newSocketId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpAvailableInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpAvailableInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:179</tt> by nedtool.
 * <pre>
 * //
 * // Sent with message kind TCP_I_ESTABLISHED, to let the app know
 * // about the local and remote IP address and port.
 * //
 * // \@see ~TcpCommandCode, ~ITcp
 * //
 * class TcpConnectInfo extends TcpCommand
 * {
 *     L3Address localAddr;
 *     L3Address remoteAddr;
 *     int localPort;
 *     int remotePort;
 * }
 * </pre>
 */
class INET_API TcpConnectInfo : public ::inet::TcpCommand
{
  protected:
    L3Address localAddr;
    L3Address remoteAddr;
    int localPort = 0;
    int remotePort = 0;

  private:
    void copy(const TcpConnectInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TcpConnectInfo&);

  public:
    TcpConnectInfo();
    TcpConnectInfo(const TcpConnectInfo& other);
    virtual ~TcpConnectInfo();
    TcpConnectInfo& operator=(const TcpConnectInfo& other);
    virtual TcpConnectInfo *dup() const override {return new TcpConnectInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getLocalAddr() const;
    virtual L3Address& getLocalAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpConnectInfo*>(this)->getLocalAddr());}
    virtual void setLocalAddr(const L3Address& localAddr);
    virtual const L3Address& getRemoteAddr() const;
    virtual L3Address& getRemoteAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpConnectInfo*>(this)->getRemoteAddr());}
    virtual void setRemoteAddr(const L3Address& remoteAddr);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpConnectInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpConnectInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/contract/tcp/TcpCommand.msg:195</tt> by nedtool.
 * <pre>
 * //
 * // Sent with message kind TCP_I_STATUS, in response to command TCP_C_STATUS.
 * // For explanation of variables, see RFC 793 or TcpStateVariables in
 * // TcpConnection.h.
 * //
 * // \@see ~TcpStatusInd, ~TcpCommandCode, ~ITcp
 * //
 * class TcpStatusInfo extends TcpCommand
 * {
 *     int state;
 *     string stateName;
 * 
 *     L3Address localAddr;
 *     L3Address remoteAddr;
 *     int localPort;
 *     int remotePort;
 * 
 *     unsigned int snd_mss;
 * 
 *     unsigned int snd_una;
 *     unsigned int snd_nxt;
 *     unsigned int snd_max;
 *     unsigned int snd_wnd;
 *     unsigned int snd_up;
 *     unsigned int snd_wl1;
 *     unsigned int snd_wl2;
 *     unsigned int iss;
 * 
 *     unsigned int rcv_nxt;
 *     unsigned int rcv_wnd;
 *     unsigned int rcv_up;
 *     unsigned int irs;
 * 
 *     bool fin_ack_rcvd;
 * }
 * </pre>
 */
class INET_API TcpStatusInfo : public ::inet::TcpCommand
{
  protected:
    int state = 0;
    omnetpp::opp_string stateName;
    L3Address localAddr;
    L3Address remoteAddr;
    int localPort = 0;
    int remotePort = 0;
    unsigned int snd_mss = 0;
    unsigned int snd_una = 0;
    unsigned int snd_nxt = 0;
    unsigned int snd_max = 0;
    unsigned int snd_wnd = 0;
    unsigned int snd_up = 0;
    unsigned int snd_wl1 = 0;
    unsigned int snd_wl2 = 0;
    unsigned int iss = 0;
    unsigned int rcv_nxt = 0;
    unsigned int rcv_wnd = 0;
    unsigned int rcv_up = 0;
    unsigned int irs = 0;
    bool fin_ack_rcvd = false;

  private:
    void copy(const TcpStatusInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TcpStatusInfo&);

  public:
    TcpStatusInfo();
    TcpStatusInfo(const TcpStatusInfo& other);
    virtual ~TcpStatusInfo();
    TcpStatusInfo& operator=(const TcpStatusInfo& other);
    virtual TcpStatusInfo *dup() const override {return new TcpStatusInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getState() const;
    virtual void setState(int state);
    virtual const char * getStateName() const;
    virtual void setStateName(const char * stateName);
    virtual const L3Address& getLocalAddr() const;
    virtual L3Address& getLocalAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpStatusInfo*>(this)->getLocalAddr());}
    virtual void setLocalAddr(const L3Address& localAddr);
    virtual const L3Address& getRemoteAddr() const;
    virtual L3Address& getRemoteAddrForUpdate() { return const_cast<L3Address&>(const_cast<TcpStatusInfo*>(this)->getRemoteAddr());}
    virtual void setRemoteAddr(const L3Address& remoteAddr);
    virtual int getLocalPort() const;
    virtual void setLocalPort(int localPort);
    virtual int getRemotePort() const;
    virtual void setRemotePort(int remotePort);
    virtual unsigned int getSnd_mss() const;
    virtual void setSnd_mss(unsigned int snd_mss);
    virtual unsigned int getSnd_una() const;
    virtual void setSnd_una(unsigned int snd_una);
    virtual unsigned int getSnd_nxt() const;
    virtual void setSnd_nxt(unsigned int snd_nxt);
    virtual unsigned int getSnd_max() const;
    virtual void setSnd_max(unsigned int snd_max);
    virtual unsigned int getSnd_wnd() const;
    virtual void setSnd_wnd(unsigned int snd_wnd);
    virtual unsigned int getSnd_up() const;
    virtual void setSnd_up(unsigned int snd_up);
    virtual unsigned int getSnd_wl1() const;
    virtual void setSnd_wl1(unsigned int snd_wl1);
    virtual unsigned int getSnd_wl2() const;
    virtual void setSnd_wl2(unsigned int snd_wl2);
    virtual unsigned int getIss() const;
    virtual void setIss(unsigned int iss);
    virtual unsigned int getRcv_nxt() const;
    virtual void setRcv_nxt(unsigned int rcv_nxt);
    virtual unsigned int getRcv_wnd() const;
    virtual void setRcv_wnd(unsigned int rcv_wnd);
    virtual unsigned int getRcv_up() const;
    virtual void setRcv_up(unsigned int rcv_up);
    virtual unsigned int getIrs() const;
    virtual void setIrs(unsigned int irs);
    virtual bool getFin_ack_rcvd() const;
    virtual void setFin_ack_rcvd(bool fin_ack_rcvd);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpStatusInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpStatusInfo& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_TCPCOMMAND_M_H

