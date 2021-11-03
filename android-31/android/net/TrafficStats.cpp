#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/Socket.hpp"
#include "./TrafficStats.hpp"

namespace android::net
{
	// Fields
	jint TrafficStats::UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.TrafficStats",
			"UNSUPPORTED"
		);
	}
	
	// QAndroidJniObject forward
	TrafficStats::TrafficStats(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TrafficStats::TrafficStats()
		: JObject(
			"android.net.TrafficStats",
			"()V"
		) {}
	
	// Methods
	void TrafficStats::clearThreadStatsTag()
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"clearThreadStatsTag",
			"()V"
		);
	}
	void TrafficStats::clearThreadStatsUid()
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"clearThreadStatsUid",
			"()V"
		);
	}
	jint TrafficStats::getAndSetThreadStatsTag(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getAndSetThreadStatsTag",
			"(I)I",
			arg0
		);
	}
	jlong TrafficStats::getMobileRxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileRxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getMobileRxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileRxPackets",
			"()J"
		);
	}
	jlong TrafficStats::getMobileTxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileTxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getMobileTxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileTxPackets",
			"()J"
		);
	}
	jlong TrafficStats::getRxBytes(jstring arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getRxBytes",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong TrafficStats::getRxPackets(jstring arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getRxPackets",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jint TrafficStats::getThreadStatsTag()
	{
		return callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getThreadStatsTag",
			"()I"
		);
	}
	jint TrafficStats::getThreadStatsUid()
	{
		return callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getThreadStatsUid",
			"()I"
		);
	}
	jlong TrafficStats::getTotalRxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalRxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getTotalRxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalRxPackets",
			"()J"
		);
	}
	jlong TrafficStats::getTotalTxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalTxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getTotalTxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalTxPackets",
			"()J"
		);
	}
	jlong TrafficStats::getTxBytes(jstring arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTxBytes",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong TrafficStats::getTxPackets(jstring arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTxPackets",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong TrafficStats::getUidRxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidRxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidRxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidRxPackets",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpRxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpRxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpRxSegments(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpRxSegments",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpTxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpTxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpTxSegments(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpTxSegments",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTxPackets",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpRxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpRxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpRxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpRxPackets",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpTxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpTxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpTxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpTxPackets",
			"(I)J",
			arg0
		);
	}
	void TrafficStats::incrementOperationCount(jint arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"incrementOperationCount",
			"(I)V",
			arg0
		);
	}
	void TrafficStats::incrementOperationCount(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"incrementOperationCount",
			"(II)V",
			arg0,
			arg1
		);
	}
	void TrafficStats::setThreadStatsTag(jint arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"setThreadStatsTag",
			"(I)V",
			arg0
		);
	}
	void TrafficStats::setThreadStatsUid(jint arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"setThreadStatsUid",
			"(I)V",
			arg0
		);
	}
	void TrafficStats::tagDatagramSocket(java::net::DatagramSocket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagDatagramSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.object()
		);
	}
	void TrafficStats::tagFileDescriptor(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void TrafficStats::tagSocket(java::net::Socket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagSocket",
			"(Ljava/net/Socket;)V",
			arg0.object()
		);
	}
	void TrafficStats::untagDatagramSocket(java::net::DatagramSocket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagDatagramSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.object()
		);
	}
	void TrafficStats::untagFileDescriptor(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void TrafficStats::untagSocket(java::net::Socket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagSocket",
			"(Ljava/net/Socket;)V",
			arg0.object()
		);
	}
} // namespace android::net

