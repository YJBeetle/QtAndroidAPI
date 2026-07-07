#pragma once

#include "../../JByteArray.hpp"
#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./AlgorithmParametersSpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline AlgorithmParametersSpi::AlgorithmParametersSpi()
		: JObject(
			"java.security.AlgorithmParametersSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
