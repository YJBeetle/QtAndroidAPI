#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class IpSecManager_SecurityParameterIndex;
}
namespace __jni_impl::android::net
{
	class IpSecManager_UdpEncapsulationSocket;
}
namespace __jni_impl::android::net
{
	class IpSecTransform;
}
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
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class Socket;
}

namespace __jni_impl::android::net
{
	class IpSecManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint DIRECTION_IN();
		static jint DIRECTION_OUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject allocateSecurityParameterIndex(__jni_impl::java::net::InetAddress arg0);
		QAndroidJniObject allocateSecurityParameterIndex(__jni_impl::java::net::InetAddress arg0, jint arg1);
		void applyTransportModeTransform(__jni_impl::java::io::FileDescriptor arg0, jint arg1, __jni_impl::android::net::IpSecTransform arg2);
		void applyTransportModeTransform(__jni_impl::java::net::DatagramSocket arg0, jint arg1, __jni_impl::android::net::IpSecTransform arg2);
		void applyTransportModeTransform(__jni_impl::java::net::Socket arg0, jint arg1, __jni_impl::android::net::IpSecTransform arg2);
		QAndroidJniObject openUdpEncapsulationSocket();
		QAndroidJniObject openUdpEncapsulationSocket(jint arg0);
		void removeTransportModeTransforms(__jni_impl::java::io::FileDescriptor arg0);
		void removeTransportModeTransforms(__jni_impl::java::net::DatagramSocket arg0);
		void removeTransportModeTransforms(__jni_impl::java::net::Socket arg0);
	};
} // namespace __jni_impl::android::net

#include "IpSecManager_SecurityParameterIndex.hpp"
#include "IpSecManager_UdpEncapsulationSocket.hpp"
#include "IpSecTransform.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Socket.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jint IpSecManager::DIRECTION_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.IpSecManager",
			"DIRECTION_IN"
		);
	}
	jint IpSecManager::DIRECTION_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.IpSecManager",
			"DIRECTION_OUT"
		);
	}
	
	// Constructors
	void IpSecManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IpSecManager::allocateSecurityParameterIndex(__jni_impl::java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"allocateSecurityParameterIndex",
			"(Ljava/net/InetAddress;)Landroid/net/IpSecManager$SecurityParameterIndex;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IpSecManager::allocateSecurityParameterIndex(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"allocateSecurityParameterIndex",
			"(Ljava/net/InetAddress;I)Landroid/net/IpSecManager$SecurityParameterIndex;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void IpSecManager::applyTransportModeTransform(__jni_impl::java::io::FileDescriptor arg0, jint arg1, __jni_impl::android::net::IpSecTransform arg2)
	{
		__thiz.callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/io/FileDescriptor;ILandroid/net/IpSecTransform;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void IpSecManager::applyTransportModeTransform(__jni_impl::java::net::DatagramSocket arg0, jint arg1, __jni_impl::android::net::IpSecTransform arg2)
	{
		__thiz.callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/net/DatagramSocket;ILandroid/net/IpSecTransform;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void IpSecManager::applyTransportModeTransform(__jni_impl::java::net::Socket arg0, jint arg1, __jni_impl::android::net::IpSecTransform arg2)
	{
		__thiz.callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/net/Socket;ILandroid/net/IpSecTransform;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject IpSecManager::openUdpEncapsulationSocket()
	{
		return __thiz.callObjectMethod(
			"openUdpEncapsulationSocket",
			"()Landroid/net/IpSecManager$UdpEncapsulationSocket;"
		);
	}
	QAndroidJniObject IpSecManager::openUdpEncapsulationSocket(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openUdpEncapsulationSocket",
			"(I)Landroid/net/IpSecManager$UdpEncapsulationSocket;",
			arg0
		);
	}
	void IpSecManager::removeTransportModeTransforms(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void IpSecManager::removeTransportModeTransforms(__jni_impl::java::net::DatagramSocket arg0)
	{
		__thiz.callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/net/DatagramSocket;)V",
			arg0.__jniObject().object()
		);
	}
	void IpSecManager::removeTransportModeTransforms(__jni_impl::java::net::Socket arg0)
	{
		__thiz.callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/net/Socket;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecManager : public __jni_impl::android::net::IpSecManager
	{
	public:
		IpSecManager(QAndroidJniObject obj) { __thiz = obj; }
		IpSecManager()
		{
			__constructor();
		}
	};
} // namespace android::net

