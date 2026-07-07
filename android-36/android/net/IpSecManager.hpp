#pragma once

#include "./IpSecManager_SecurityParameterIndex.def.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.def.hpp"
#include "./IpSecTransform.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/net/DatagramSocket.def.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "../../java/net/Socket.def.hpp"
#include "./IpSecManager.def.hpp"

namespace android::net
{
	// Fields
	inline jint IpSecManager::DIRECTION_IN()
	{
		return getStaticField<jint>(
			"android.net.IpSecManager",
			"DIRECTION_IN"
		);
	}
	inline jint IpSecManager::DIRECTION_OUT()
	{
		return getStaticField<jint>(
			"android.net.IpSecManager",
			"DIRECTION_OUT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::IpSecManager_SecurityParameterIndex IpSecManager::allocateSecurityParameterIndex(java::net::InetAddress arg0) const
	{
		return callObjectMethod(
			"allocateSecurityParameterIndex",
			"(Ljava/net/InetAddress;)Landroid/net/IpSecManager$SecurityParameterIndex;",
			arg0.object()
		);
	}
	inline android::net::IpSecManager_SecurityParameterIndex IpSecManager::allocateSecurityParameterIndex(java::net::InetAddress arg0, jint arg1) const
	{
		return callObjectMethod(
			"allocateSecurityParameterIndex",
			"(Ljava/net/InetAddress;I)Landroid/net/IpSecManager$SecurityParameterIndex;",
			arg0.object(),
			arg1
		);
	}
	inline void IpSecManager::applyTransportModeTransform(java::io::FileDescriptor arg0, jint arg1, android::net::IpSecTransform arg2) const
	{
		callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/io/FileDescriptor;ILandroid/net/IpSecTransform;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void IpSecManager::applyTransportModeTransform(java::net::DatagramSocket arg0, jint arg1, android::net::IpSecTransform arg2) const
	{
		callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/net/DatagramSocket;ILandroid/net/IpSecTransform;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void IpSecManager::applyTransportModeTransform(java::net::Socket arg0, jint arg1, android::net::IpSecTransform arg2) const
	{
		callMethod<void>(
			"applyTransportModeTransform",
			"(Ljava/net/Socket;ILandroid/net/IpSecTransform;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline android::net::IpSecManager_UdpEncapsulationSocket IpSecManager::openUdpEncapsulationSocket() const
	{
		return callObjectMethod(
			"openUdpEncapsulationSocket",
			"()Landroid/net/IpSecManager$UdpEncapsulationSocket;"
		);
	}
	inline android::net::IpSecManager_UdpEncapsulationSocket IpSecManager::openUdpEncapsulationSocket(jint arg0) const
	{
		return callObjectMethod(
			"openUdpEncapsulationSocket",
			"(I)Landroid/net/IpSecManager$UdpEncapsulationSocket;",
			arg0
		);
	}
	inline void IpSecManager::removeTransportModeTransforms(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void IpSecManager::removeTransportModeTransforms(java::net::DatagramSocket arg0) const
	{
		callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/net/DatagramSocket;)V",
			arg0.object()
		);
	}
	inline void IpSecManager::removeTransportModeTransforms(java::net::Socket arg0) const
	{
		callMethod<void>(
			"removeTransportModeTransforms",
			"(Ljava/net/Socket;)V",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
