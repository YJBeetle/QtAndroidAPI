#pragma once

#ifndef ANDROID_SECURITY_KEYCHAINEXCEPTION
#define ANDROID_SECURITY_KEYCHAINEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::security
{
	class KeyChainException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::security


namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void KeyChainException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"()V"
		);
	}
	void KeyChainException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void KeyChainException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyChainException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void KeyChainException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void KeyChainException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::security

namespace android::security
{
	class KeyChainException : public __jni_impl::android::security::KeyChainException
	{
	public:
		KeyChainException(QAndroidJniObject obj) { __thiz = obj; }
		KeyChainException()
		{
			__constructor();
		}
		KeyChainException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyChainException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		KeyChainException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_KEYCHAINEXCEPTION

