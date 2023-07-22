#pragma once

#include "../../../../../JString.hpp"
#include "./IkeTimeoutException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	inline IkeTimeoutException::IkeTimeoutException(JString arg0)
		: java::io::IOException(
			"android.net.ipsec.ike.exceptions.IkeTimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::net::ipsec::ike::exceptions

// Base class headers
#include "../../../../../java/lang/Exception.hpp"
#include "../../../../../java/io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike::exceptions;
#endif
