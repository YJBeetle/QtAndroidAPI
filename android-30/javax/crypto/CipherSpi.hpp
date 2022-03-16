#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "../../java/security/AlgorithmParameters.def.hpp"
#include "../../java/security/SecureRandom.def.hpp"
#include "./CipherSpi.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline CipherSpi::CipherSpi()
		: JObject(
			"javax.crypto.CipherSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers

