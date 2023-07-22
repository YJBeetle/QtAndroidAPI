#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./SecureRandomSpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline SecureRandomSpi::SecureRandomSpi()
		: JObject(
			"java.security.SecureRandomSpi",
			"()V"
		) {}
	
	// Methods
	inline JString SecureRandomSpi::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
