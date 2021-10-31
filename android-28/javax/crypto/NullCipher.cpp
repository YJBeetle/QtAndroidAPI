#include "./NullCipher.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	NullCipher::NullCipher(QAndroidJniObject obj) : javax::crypto::Cipher(obj) {}
	
	// Constructors
	NullCipher::NullCipher()
		: javax::crypto::Cipher(
			"javax.crypto.NullCipher",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

