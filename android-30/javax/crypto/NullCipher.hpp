#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Cipher.hpp"


namespace javax::crypto
{
	class NullCipher : public javax::crypto::Cipher
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NullCipher(const char *className, const char *sig, Ts...agv) : javax::crypto::Cipher(className, sig, std::forward<Ts>(agv)...) {}
		NullCipher(QJniObject obj);
		
		// Constructors
		NullCipher();
		
		// Methods
	};
} // namespace javax::crypto

