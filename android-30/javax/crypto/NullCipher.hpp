#pragma once

#include "./Cipher.hpp"

namespace javax::crypto
{
	class NullCipher : public javax::crypto::Cipher
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NullCipher(const char *className, const char *sig, Ts...agv) : javax::crypto::Cipher(className, sig, std::forward<Ts>(agv)...) {}
		NullCipher(QAndroidJniObject obj) : javax::crypto::Cipher(obj) {}
		
		// Constructors
		NullCipher();
		
		// Methods
	};
} // namespace javax::crypto

