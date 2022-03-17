#pragma once

#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void IpSecManager_UdpEncapsulationSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::io::FileDescriptor IpSecManager_UdpEncapsulationSocket::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline jint IpSecManager_UdpEncapsulationSocket::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JString IpSecManager_UdpEncapsulationSocket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

// Base class headers

