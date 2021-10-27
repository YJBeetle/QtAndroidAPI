#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Cipher.hpp"


namespace javax::crypto
{
	class NullCipher : public javax::crypto::Cipher
	{
	public:
		// Fields
		
		NullCipher(QAndroidJniObject obj);
		// Constructors
		NullCipher();
		
		// Methods
	};
} // namespace javax::crypto

