#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_KEYNOTYETVALIDEXCEPTION
#define ANDROID_SECURITY_KEYSTORE_KEYNOTYETVALIDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace __jni_impl::android::security::keystore
{
	class KeyNotYetValidException : public __jni_impl::java::security::InvalidKeyException
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
	void KeyNotYetValidException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyNotYetValidException",
			"()V");
	}
	void KeyNotYetValidException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void KeyNotYetValidException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyNotYetValidException : public __jni_impl::android::security::keystore::KeyNotYetValidException
	{
	public:
		KeyNotYetValidException(QAndroidJniObject obj) { __thiz = obj; }
		KeyNotYetValidException()
		{
			__constructor();
		}
		KeyNotYetValidException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyNotYetValidException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_KEYNOTYETVALIDEXCEPTION

