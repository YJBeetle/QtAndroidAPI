#pragma once

#include "./NullCipher.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline NullCipher::NullCipher()
		: javax::crypto::Cipher(
			"javax.crypto.NullCipher",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers
#include "./Cipher.hpp"

