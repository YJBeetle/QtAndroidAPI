#pragma once

#ifndef JAVAX_CRYPTO_NULLCIPHER
#define JAVAX_CRYPTO_NULLCIPHER

#include "../../__JniBaseClass.hpp"
#include "Cipher.hpp"


namespace __jni_impl::javax::crypto
{
	class NullCipher : public __jni_impl::javax::crypto::Cipher
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::crypto


namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void NullCipher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.NullCipher",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class NullCipher : public __jni_impl::javax::crypto::NullCipher
	{
	public:
		NullCipher(QAndroidJniObject obj) { __thiz = obj; }
		NullCipher()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_NULLCIPHER

