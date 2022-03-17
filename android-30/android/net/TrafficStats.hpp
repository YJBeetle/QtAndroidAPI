#pragma once

#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "../../java/net/DatagramSocket.def.hpp"
#include "../../java/net/Socket.def.hpp"
#include "./TrafficStats.def.hpp"

namespace android::net
{
	// Fields
	inline jint TrafficStats::UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.TrafficStats",
			"UNSUPPORTED"
		);
	}
	
	// Constructors
	inline TrafficStats::TrafficStats()
		: JObject(
			"android.net.TrafficStats",
			"()V"
		) {}
	
	// Methods
	inline void TrafficStats::clearThreadStatsTag()
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"clearThreadStatsTag",
			"()V"
		);
	}
	inline void TrafficStats::clearThreadStatsUid()
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"clearThreadStatsUid",
			"()V"
		);
	}
	inline jint TrafficStats::getAndSetThreadStatsTag(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getAndSetThreadStatsTag",
			"(I)I",
			arg0
		);
	}
	inline jlong TrafficStats::getMobileRxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileRxBytes",
			"()J"
		);
	}
	inline jlong TrafficStats::getMobileRxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileRxPackets",
			"()J"
		);
	}
	inline jlong TrafficStats::getMobileTxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileTxBytes",
			"()J"
		);
	}
	inline jlong TrafficStats::getMobileTxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileTxPackets",
			"()J"
		);
	}
	inline jlong TrafficStats::getRxPackets(JString arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getRxPackets",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jint TrafficStats::getThreadStatsTag()
	{
		return callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getThreadStatsTag",
			"()I"
		);
	}
	inline jint TrafficStats::getThreadStatsUid()
	{
		return callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getThreadStatsUid",
			"()I"
		);
	}
	inline jlong TrafficStats::getTotalRxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalRxBytes",
			"()J"
		);
	}
	inline jlong TrafficStats::getTotalRxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalRxPackets",
			"()J"
		);
	}
	inline jlong TrafficStats::getTotalTxBytes()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalTxBytes",
			"()J"
		);
	}
	inline jlong TrafficStats::getTotalTxPackets()
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalTxPackets",
			"()J"
		);
	}
	inline jlong TrafficStats::getTxPackets(JString arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTxPackets",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jlong TrafficStats::getUidRxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidRxBytes",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidRxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidRxPackets",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidTcpRxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpRxBytes",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidTcpRxSegments(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpRxSegments",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidTcpTxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpTxBytes",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidTcpTxSegments(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpTxSegments",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidTxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTxBytes",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidTxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTxPackets",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidUdpRxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpRxBytes",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidUdpRxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpRxPackets",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidUdpTxBytes(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpTxBytes",
			"(I)J",
			arg0
		);
	}
	inline jlong TrafficStats::getUidUdpTxPackets(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpTxPackets",
			"(I)J",
			arg0
		);
	}
	inline void TrafficStats::incrementOperationCount(jint arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"incrementOperationCount",
			"(I)V",
			arg0
		);
	}
	inline void TrafficStats::incrementOperationCount(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"incrementOperationCount",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void TrafficStats::setThreadStatsTag(jint arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"setThreadStatsTag",
			"(I)V",
			arg0
		);
	}
	inline void TrafficStats::setThreadStatsUid(jint arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"setThreadStatsUid",
			"(I)V",
			arg0
		);
	}
	inline void TrafficStats::tagDatagramSocket(java::net::DatagramSocket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagDatagramSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.object()
		);
	}
	inline void TrafficStats::tagFileDescriptor(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void TrafficStats::tagSocket(java::net::Socket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagSocket",
			"(Ljava/net/Socket;)V",
			arg0.object()
		);
	}
	inline void TrafficStats::untagDatagramSocket(java::net::DatagramSocket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagDatagramSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.object()
		);
	}
	inline void TrafficStats::untagFileDescriptor(java::io::FileDescriptor arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void TrafficStats::untagSocket(java::net::Socket arg0)
	{
		callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagSocket",
			"(Ljava/net/Socket;)V",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

