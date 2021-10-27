#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace __jni_impl::android::security::keystore
{
	class UserPresenceUnavailableException : public __jni_impl::java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::security::keystore


namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void UserPresenceUnavailableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"()V"
		);
	}
	void UserPresenceUnavailableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UserPresenceUnavailableException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void UserPresenceUnavailableException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void UserPresenceUnavailableException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class UserPresenceUnavailableException : public __jni_impl::android::security::keystore::UserPresenceUnavailableException
	{
	public:
		UserPresenceUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
		UserPresenceUnavailableException()
		{
			__constructor();
		}
		UserPresenceUnavailableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		UserPresenceUnavailableException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security::keystore

