#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_KEYPERMANENTLYINVALIDATEDEXCEPTION
#define ANDROID_SECURITY_KEYSTORE_KEYPERMANENTLYINVALIDATEDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace __jni_impl::android::security::keystore
{
	class KeyPermanentlyInvalidatedException : public __jni_impl::java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::security::keystore


namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void KeyPermanentlyInvalidatedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"()V");
	}
	void KeyPermanentlyInvalidatedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void KeyPermanentlyInvalidatedException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyPermanentlyInvalidatedException : public __jni_impl::android::security::keystore::KeyPermanentlyInvalidatedException
	{
	public:
		KeyPermanentlyInvalidatedException(QAndroidJniObject obj) { __thiz = obj; }
		KeyPermanentlyInvalidatedException()
		{
			__constructor();
		}
		KeyPermanentlyInvalidatedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyPermanentlyInvalidatedException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_KEYPERMANENTLYINVALIDATEDEXCEPTION

