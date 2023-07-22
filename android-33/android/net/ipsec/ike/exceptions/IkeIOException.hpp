#pragma once

#include "../../../../../java/io/IOException.def.hpp"
#include "../../../../../JThrowable.hpp"
#include "./IkeIOException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	inline IkeIOException::IkeIOException(java::io::IOException arg0)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeIOException",
			"(Ljava/io/IOException;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::io::IOException IkeIOException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
	inline JThrowable IkeIOException::initCause(JThrowable arg0) const
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0.object<jthrowable>()
		);
	}
} // namespace android::net::ipsec::ike::exceptions

// Base class headers
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeNonProtocolException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike::exceptions;
#endif
