#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class FileDescriptor;
}
class JString;
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class Socket;
}

namespace android::net
{
	class TrafficStats : public JObject
	{
	public:
		// Fields
		static jint UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit TrafficStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrafficStats(QJniObject obj);
		
		// Constructors
		TrafficStats();
		
		// Methods
		static void clearThreadStatsTag();
		static void clearThreadStatsUid();
		static jint getAndSetThreadStatsTag(jint arg0);
		static jlong getMobileRxBytes();
		static jlong getMobileRxPackets();
		static jlong getMobileTxBytes();
		static jlong getMobileTxPackets();
		static jlong getRxBytes(JString arg0);
		static jlong getRxPackets(JString arg0);
		static jint getThreadStatsTag();
		static jint getThreadStatsUid();
		static jlong getTotalRxBytes();
		static jlong getTotalRxPackets();
		static jlong getTotalTxBytes();
		static jlong getTotalTxPackets();
		static jlong getTxBytes(JString arg0);
		static jlong getTxPackets(JString arg0);
		static jlong getUidRxBytes(jint arg0);
		static jlong getUidRxPackets(jint arg0);
		static jlong getUidTcpRxBytes(jint arg0);
		static jlong getUidTcpRxSegments(jint arg0);
		static jlong getUidTcpTxBytes(jint arg0);
		static jlong getUidTcpTxSegments(jint arg0);
		static jlong getUidTxBytes(jint arg0);
		static jlong getUidTxPackets(jint arg0);
		static jlong getUidUdpRxBytes(jint arg0);
		static jlong getUidUdpRxPackets(jint arg0);
		static jlong getUidUdpTxBytes(jint arg0);
		static jlong getUidUdpTxPackets(jint arg0);
		static void incrementOperationCount(jint arg0);
		static void incrementOperationCount(jint arg0, jint arg1);
		static void setThreadStatsTag(jint arg0);
		static void setThreadStatsUid(jint arg0);
		static void tagDatagramSocket(java::net::DatagramSocket arg0);
		static void tagFileDescriptor(java::io::FileDescriptor arg0);
		static void tagSocket(java::net::Socket arg0);
		static void untagDatagramSocket(java::net::DatagramSocket arg0);
		static void untagFileDescriptor(java::io::FileDescriptor arg0);
		static void untagSocket(java::net::Socket arg0);
	};
} // namespace android::net

