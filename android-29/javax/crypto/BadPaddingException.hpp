#pragma once

#ifndef JAVAX_CRYPTO_BADPADDINGEXCEPTION
#define JAVAX_CRYPTO_BADPADDINGEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace __jni_impl::javax::crypto
{
	class BadPaddingException : public __jni_impl::java::security::GeneralSecurityException
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
	void BadPaddingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.BadPaddingException",
			"()V");
	}
	void BadPaddingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.BadPaddingException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class BadPaddingException : public __jni_impl::javax::crypto::BadPaddingException
	{
	public:
		BadPaddingException(QAndroidJniObject obj) { __thiz = obj; }
		BadPaddingException()
		{
			__constructor();
		}
		BadPaddingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_BADPADDINGEXCEPTION

