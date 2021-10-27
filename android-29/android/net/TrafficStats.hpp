#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}
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
	class TrafficStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint UNSUPPORTED();
		
		TrafficStats(QAndroidJniObject obj);
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
		static jint getThreadStatsTag();
		static jint getThreadStatsUid();
		static jlong getTotalRxBytes();
		static jlong getTotalRxPackets();
		static jlong getTotalTxBytes();
		static jlong getTotalTxPackets();
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

