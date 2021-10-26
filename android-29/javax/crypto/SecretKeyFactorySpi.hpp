#pragma once

#ifndef JAVAX_CRYPTO_SECRETKEYFACTORYSPI
#define JAVAX_CRYPTO_SECRETKEYFACTORYSPI

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto
{
	class SecretKeyFactorySpi : public __JniBaseClass
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
	void SecretKeyFactorySpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.SecretKeyFactorySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class SecretKeyFactorySpi : public __jni_impl::javax::crypto::SecretKeyFactorySpi
	{
	public:
		SecretKeyFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
		SecretKeyFactorySpi()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_SECRETKEYFACTORYSPI

