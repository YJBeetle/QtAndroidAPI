#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::javax::crypto
{
	class KeyGeneratorSpi : public __JniBaseClass
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
	void KeyGeneratorSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.KeyGeneratorSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class KeyGeneratorSpi : public __jni_impl::javax::crypto::KeyGeneratorSpi
	{
	public:
		KeyGeneratorSpi(QAndroidJniObject obj) { __thiz = obj; }
		KeyGeneratorSpi()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

