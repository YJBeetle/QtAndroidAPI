#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/security/SecureRandom.def.hpp"
#include "./KeyAgreementSpi.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline KeyAgreementSpi::KeyAgreementSpi()
		: JObject(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif
