#pragma once

#ifndef JAVAX_CRYPTO_SHORTBUFFEREXCEPTION
#define JAVAX_CRYPTO_SHORTBUFFEREXCEPTION

#include "../../java/security/GeneralSecurityException.hpp"


namespace __jni_impl::javax::crypto
{
	class ShortBufferException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::crypto


namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void ShortBufferException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ShortBufferException",
			"()V");
	}
	void ShortBufferException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ShortBufferException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class ShortBufferException : public __jni_impl::javax::crypto::ShortBufferException
	{
	public:
		ShortBufferException(QAndroidJniObject obj) { __thiz = obj; }
		ShortBufferException()
		{
			__constructor();
		}
		ShortBufferException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_SHORTBUFFEREXCEPTION

