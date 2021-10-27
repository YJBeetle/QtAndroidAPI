#pragma once

#ifndef JAVAX_CRYPTO_CIPHERSPI
#define JAVAX_CRYPTO_CIPHERSPI

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::security
{
	class AlgorithmParameters;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::javax::crypto
{
	class CipherSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/SecureRandom.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void CipherSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.CipherSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class CipherSpi : public __jni_impl::javax::crypto::CipherSpi
	{
	public:
		CipherSpi(QAndroidJniObject obj) { __thiz = obj; }
		CipherSpi()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_CIPHERSPI

