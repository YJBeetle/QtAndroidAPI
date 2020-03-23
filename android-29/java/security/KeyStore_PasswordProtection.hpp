#pragma once

#ifndef JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION
#define JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::security
{
	class KeyStore_PasswordProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jcharArray arg0);
		void __constructor(jcharArray arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		void destroy();
		jboolean isDestroyed();
		QAndroidJniObject getProtectionAlgorithm();
		QAndroidJniObject getProtectionParameters();
		QAndroidJniObject getPassword();
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStore_PasswordProtection::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PasswordProtection",
			"([C)V",
			arg0);
	}
	void KeyStore_PasswordProtection::__constructor(jcharArray arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PasswordProtection",
			"([CLjava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	void KeyStore_PasswordProtection::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V");
	}
	jboolean KeyStore_PasswordProtection::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z");
	}
	QAndroidJniObject KeyStore_PasswordProtection::getProtectionAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getProtectionAlgorithm",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject KeyStore_PasswordProtection::getProtectionParameters()
	{
		return __thiz.callObjectMethod(
			"getProtectionParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;");
	}
	QAndroidJniObject KeyStore_PasswordProtection::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStore_PasswordProtection : public __jni_impl::java::security::KeyStore_PasswordProtection
	{
	public:
		KeyStore_PasswordProtection(QAndroidJniObject obj) { __thiz = obj; }
		KeyStore_PasswordProtection(jcharArray arg0)
		{
			__constructor(
				arg0);
		}
		KeyStore_PasswordProtection(jcharArray arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION

