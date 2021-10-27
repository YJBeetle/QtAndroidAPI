#include "./IpSecManager_SecurityParameterIndex.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.hpp"
#include "./IpSecTransform.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Socket.hpp"
#include "./IpSecManager.hpp"

namespace android::net
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
	
	IpSecManager::IpSecManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject IpSecManager::allocateSecurityParameterIndex(java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"allocateSecurityParameterIndex",
			"(Ljava/net/InetAddress;)Landroid/net/IpSecManager$SecurityParameterIndex;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IpSecManager::allocateSecurityParameterIndex(java::net::InetAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"allocateSecurityParameterIndex",
			"(Ljava/net/InetAddress;I)Landroid/net/IpSecManager$SecurityParameterIndex;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void IpSecManager::applyTransportModeTransform(java::io::FileDescriptor arg0, jint arg1, android::net::IpSecTransform arg2)
	{
		__thiz.callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/io/FileDescriptor;ILandroid/net/IpSecTransform;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void IpSecManager::applyTransportModeTransform(java::net::DatagramSocket arg0, jint arg1, android::net::IpSecTransform arg2)
	{
		__thiz.callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/net/DatagramSocket;ILandroid/net/IpSecTransform;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void IpSecManager::applyTransportModeTransform(java::net::Socket arg0, jint arg1, android::net::IpSecTransform arg2)
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
	void IpSecManager::removeTransportModeTransforms(java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void IpSecManager::removeTransportModeTransforms(java::net::DatagramSocket arg0)
	{
		__thiz.callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/net/DatagramSocket;)V",
			arg0.__jniObject().object()
		);
	}
	void IpSecManager::removeTransportModeTransforms(java::net::Socket arg0)
	{
		__thiz.callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/net/Socket;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net

