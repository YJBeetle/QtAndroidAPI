#pragma once

#include "./InvalidKeException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	inline InvalidKeException::InvalidKeException(jint arg0)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidKeException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint InvalidKeException::getDhGroup() const
	{
		return callMethod<jint>(
			"getDhGroup",
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
