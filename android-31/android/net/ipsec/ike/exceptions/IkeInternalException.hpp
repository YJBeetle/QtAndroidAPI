#pragma once

#include "../../../../../JString.hpp"
#include "../../../../../JThrowable.hpp"
#include "./IkeInternalException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	inline IkeInternalException::IkeInternalException(JThrowable arg0)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeInternalException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline IkeInternalException::IkeInternalException(JString arg0, JThrowable arg1)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeInternalException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net::ipsec::ike::exceptions

// Base class headers
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeNonProtocolException.hpp"

