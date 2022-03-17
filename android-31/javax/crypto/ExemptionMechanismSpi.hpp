#pragma once

#include "../../JByteArray.hpp"
#include "../../java/security/AlgorithmParameters.def.hpp"
#include "./ExemptionMechanismSpi.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline ExemptionMechanismSpi::ExemptionMechanismSpi()
		: JObject(
			"javax.crypto.ExemptionMechanismSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers

