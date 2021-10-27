#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::javax::crypto
{
	class KeyAgreementSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/SecureRandom.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void KeyAgreementSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.KeyAgreementSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class KeyAgreementSpi : public __jni_impl::javax::crypto::KeyAgreementSpi
	{
	public:
		KeyAgreementSpi(QAndroidJniObject obj) { __thiz = obj; }
		KeyAgreementSpi()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

