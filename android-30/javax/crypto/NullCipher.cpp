#include "./NullCipher.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	NullCipher::NullCipher()
		: javax::crypto::Cipher(
			"javax.crypto.NullCipher",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

