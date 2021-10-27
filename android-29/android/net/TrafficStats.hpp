#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::net
{
	class DatagramSocket;
}
namespace __jni_impl::java::net
{
	class Socket;
}

namespace __jni_impl::android::net
{
	class TrafficStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint UNSUPPORTED();
		
		// Constructors
		void __constructor();
		
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
		static void tagDatagramSocket(__jni_impl::java::net::DatagramSocket arg0);
		static void tagFileDescriptor(__jni_impl::java::io::FileDescriptor arg0);
		static void tagSocket(__jni_impl::java::net::Socket arg0);
		static void untagDatagramSocket(__jni_impl::java::net::DatagramSocket arg0);
		static void untagFileDescriptor(__jni_impl::java::io::FileDescriptor arg0);
		static void untagSocket(__jni_impl::java::net::Socket arg0);
	};
} // namespace __jni_impl::android::net

#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/Socket.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jint TrafficStats::UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.TrafficStats",
			"UNSUPPORTED"
		);
	}
	
	// Constructors
	void TrafficStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.TrafficStats",
			"()V"
		);
	}
	
	// Methods
	void TrafficStats::clearThreadStatsTag()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"clearThreadStatsTag",
			"()V"
		);
	}
	void TrafficStats::clearThreadStatsUid()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"clearThreadStatsUid",
			"()V"
		);
	}
	jint TrafficStats::getAndSetThreadStatsTag(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getAndSetThreadStatsTag",
			"(I)I",
			arg0
		);
	}
	jlong TrafficStats::getMobileRxBytes()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileRxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getMobileRxPackets()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileRxPackets",
			"()J"
		);
	}
	jlong TrafficStats::getMobileTxBytes()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileTxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getMobileTxPackets()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getMobileTxPackets",
			"()J"
		);
	}
	jint TrafficStats::getThreadStatsTag()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getThreadStatsTag",
			"()I"
		);
	}
	jint TrafficStats::getThreadStatsUid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.TrafficStats",
			"getThreadStatsUid",
			"()I"
		);
	}
	jlong TrafficStats::getTotalRxBytes()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalRxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getTotalRxPackets()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalRxPackets",
			"()J"
		);
	}
	jlong TrafficStats::getTotalTxBytes()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalTxBytes",
			"()J"
		);
	}
	jlong TrafficStats::getTotalTxPackets()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getTotalTxPackets",
			"()J"
		);
	}
	jlong TrafficStats::getUidRxBytes(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidRxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidRxPackets(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidRxPackets",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpRxBytes(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpRxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpRxSegments(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpRxSegments",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpTxBytes(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpTxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTcpTxSegments(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTcpTxSegments",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTxBytes(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidTxPackets(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidTxPackets",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpRxBytes(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpRxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpRxPackets(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpRxPackets",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpTxBytes(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpTxBytes",
			"(I)J",
			arg0
		);
	}
	jlong TrafficStats::getUidUdpTxPackets(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.net.TrafficStats",
			"getUidUdpTxPackets",
			"(I)J",
			arg0
		);
	}
	void TrafficStats::incrementOperationCount(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"incrementOperationCount",
			"(I)V",
			arg0
		);
	}
	void TrafficStats::incrementOperationCount(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"incrementOperationCount",
			"(II)V",
			arg0,
			arg1
		);
	}
	void TrafficStats::setThreadStatsTag(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"setThreadStatsTag",
			"(I)V",
			arg0
		);
	}
	void TrafficStats::setThreadStatsUid(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"setThreadStatsUid",
			"(I)V",
			arg0
		);
	}
	void TrafficStats::tagDatagramSocket(__jni_impl::java::net::DatagramSocket arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagDatagramSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.__jniObject().object()
		);
	}
	void TrafficStats::tagFileDescriptor(__jni_impl::java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void TrafficStats::tagSocket(__jni_impl::java::net::Socket arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"tagSocket",
			"(Ljava/net/Socket;)V",
			arg0.__jniObject().object()
		);
	}
	void TrafficStats::untagDatagramSocket(__jni_impl::java::net::DatagramSocket arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagDatagramSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.__jniObject().object()
		);
	}
	void TrafficStats::untagFileDescriptor(__jni_impl::java::io::FileDescriptor arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void TrafficStats::untagSocket(__jni_impl::java::net::Socket arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.net.TrafficStats",
			"untagSocket",
			"(Ljava/net/Socket;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class TrafficStats : public __jni_impl::android::net::TrafficStats
	{
	public:
		TrafficStats(QAndroidJniObject obj) { __thiz = obj; }
		TrafficStats()
		{
			__constructor();
		}
	};
} // namespace android::net

