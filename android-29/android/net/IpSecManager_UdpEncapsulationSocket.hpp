#pragma once

#ifndef ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET
#define ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::net
{
	class IpSecManager_UdpEncapsulationSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void close();
		jint getPort();
		QAndroidJniObject getFileDescriptor();
	};
} // namespace __jni_impl::android::net

#include "../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void IpSecManager_UdpEncapsulationSocket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecManager$UdpEncapsulationSocket",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IpSecManager_UdpEncapsulationSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void IpSecManager_UdpEncapsulationSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jint IpSecManager_UdpEncapsulationSocket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	QAndroidJniObject IpSecManager_UdpEncapsulationSocket::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;");
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecManager_UdpEncapsulationSocket : public __jni_impl::android::net::IpSecManager_UdpEncapsulationSocket
	{
	public:
		IpSecManager_UdpEncapsulationSocket(QAndroidJniObject obj) { __thiz = obj; }
		IpSecManager_UdpEncapsulationSocket()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET

