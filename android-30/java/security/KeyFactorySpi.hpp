#pragma once

#include "../../JClass.hpp"
#include "./KeyFactorySpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyFactorySpi::KeyFactorySpi()
		: JObject(
			"java.security.KeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
