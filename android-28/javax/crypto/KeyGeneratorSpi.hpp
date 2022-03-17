#pragma once

#include "../../java/security/SecureRandom.def.hpp"
#include "./KeyGeneratorSpi.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline KeyGeneratorSpi::KeyGeneratorSpi()
		: JObject(
			"javax.crypto.KeyGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif
