#pragma once

#include "./AlgorithmParameters.def.hpp"
#include "./SecureRandom.def.hpp"
#include "./AlgorithmParameterGeneratorSpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi()
		: JObject(
			"java.security.AlgorithmParameterGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
