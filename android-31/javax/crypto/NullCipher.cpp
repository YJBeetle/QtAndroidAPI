#include "./NullCipher.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	NullCipher::NullCipher(QJniObject obj) : javax::crypto::Cipher(obj) {}
	
	// Constructors
	NullCipher::NullCipher()
		: javax::crypto::Cipher(
			"javax.crypto.NullCipher",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

