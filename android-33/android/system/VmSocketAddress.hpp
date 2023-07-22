#pragma once

#include "./VmSocketAddress.def.hpp"

namespace android::system
{
	// Fields
	
	// Constructors
	inline VmSocketAddress::VmSocketAddress(jint arg0, jint arg1)
		: java::net::SocketAddress(
			"android.system.VmSocketAddress",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint VmSocketAddress::getSvmCid() const
	{
		return callMethod<jint>(
			"getSvmCid",
			"()I"
		);
	}
	inline jint VmSocketAddress::getSvmPort() const
	{
		return callMethod<jint>(
			"getSvmPort",
			"()I"
		);
	}
} // namespace android::system

// Base class headers
#include "../../java/net/SocketAddress.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::system;
#endif
