#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace __jni_impl::android::security::keystore
{
	class KeyExpiredException : public __jni_impl::java::security::InvalidKeyException
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
	void KeyExpiredException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"()V"
		);
	}
	void KeyExpiredException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void KeyExpiredException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyExpiredException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void KeyExpiredException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyExpiredException : public __jni_impl::android::security::keystore::KeyExpiredException
	{
	public:
		KeyExpiredException(QAndroidJniObject obj) { __thiz = obj; }
		KeyExpiredException()
		{
			__constructor();
		}
		KeyExpiredException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyExpiredException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security::keystore

