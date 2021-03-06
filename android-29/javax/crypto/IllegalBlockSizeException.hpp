#pragma once

#ifndef JAVAX_CRYPTO_ILLEGALBLOCKSIZEEXCEPTION
#define JAVAX_CRYPTO_ILLEGALBLOCKSIZEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace __jni_impl::javax::crypto
{
	class IllegalBlockSizeException : public __jni_impl::java::security::GeneralSecurityException
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
	void IllegalBlockSizeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.IllegalBlockSizeException",
			"()V");
	}
	void IllegalBlockSizeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.IllegalBlockSizeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class IllegalBlockSizeException : public __jni_impl::javax::crypto::IllegalBlockSizeException
	{
	public:
		IllegalBlockSizeException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalBlockSizeException()
		{
			__constructor();
		}
		IllegalBlockSizeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_ILLEGALBLOCKSIZEEXCEPTION

