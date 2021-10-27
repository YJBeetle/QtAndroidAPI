#pragma once

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
		void close();
		QAndroidJniObject getFileDescriptor();
		jint getPort();
		jstring toString();
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
	void IpSecManager_UdpEncapsulationSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject IpSecManager_UdpEncapsulationSocket::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jint IpSecManager_UdpEncapsulationSocket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring IpSecManager_UdpEncapsulationSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

