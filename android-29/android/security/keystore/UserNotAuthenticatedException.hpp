#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_USERNOTAUTHENTICATEDEXCEPTION
#define ANDROID_SECURITY_KEYSTORE_USERNOTAUTHENTICATEDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace __jni_impl::android::security::keystore
{
	class UserNotAuthenticatedException : public __jni_impl::java::security::InvalidKeyException
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
	void UserNotAuthenticatedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"()V");
	}
	void UserNotAuthenticatedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void UserNotAuthenticatedException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class UserNotAuthenticatedException : public __jni_impl::android::security::keystore::UserNotAuthenticatedException
	{
	public:
		UserNotAuthenticatedException(QAndroidJniObject obj) { __thiz = obj; }
		UserNotAuthenticatedException()
		{
			__constructor();
		}
		UserNotAuthenticatedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		UserNotAuthenticatedException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_USERNOTAUTHENTICATEDEXCEPTION

