#pragma once

#include "./InvalidMajorVersionException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	inline InvalidMajorVersionException::InvalidMajorVersionException(jbyte arg0)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidMajorVersionException",
			"(B)V",
			arg0
		) {}
	
	// Methods
	inline jbyte InvalidMajorVersionException::getMajorVersion() const
	{
		return callMethod<jbyte>(
			"getMajorVersion",
			"()B"
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
