#pragma once

#include "../../../../../JByteArray.hpp"
#include "./InvalidSelectorsException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	inline InvalidSelectorsException::InvalidSelectorsException(jint arg0, JByteArray arg1)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidSelectorsException",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline JByteArray InvalidSelectorsException::getIpSecPacketInfo() const
	{
		return callObjectMethod(
			"getIpSecPacketInfo",
			"()[B"
		);
	}
	inline jint InvalidSelectorsException::getIpSecSpi() const
	{
		return callMethod<jint>(
			"getIpSecSpi",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

// Base class headers
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeProtocolException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike::exceptions;
#endif
