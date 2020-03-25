#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_STRONGBOXUNAVAILABLEEXCEPTION
#define ANDROID_SECURITY_KEYSTORE_STRONGBOXUNAVAILABLEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/security/ProviderException.hpp"


namespace __jni_impl::android::security::keystore
{
	class StrongBoxUnavailableException : public __jni_impl::java::security::ProviderException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::security::keystore


namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void StrongBoxUnavailableException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void StrongBoxUnavailableException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void StrongBoxUnavailableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void StrongBoxUnavailableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class StrongBoxUnavailableException : public __jni_impl::android::security::keystore::StrongBoxUnavailableException
	{
	public:
		StrongBoxUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
		StrongBoxUnavailableException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		StrongBoxUnavailableException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		StrongBoxUnavailableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StrongBoxUnavailableException()
		{
			__constructor();
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_STRONGBOXUNAVAILABLEEXCEPTION

