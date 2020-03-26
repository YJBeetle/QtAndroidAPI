#pragma once

#ifndef JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY
#define JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::security
{
	class KeyStore_SecretKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jstring toString();
		QAndroidJniObject getAttributes();
		QAndroidJniObject getSecretKey();
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStore_SecretKeyEntry::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;)V",
			arg0.__jniObject().object());
	}
	void KeyStore_SecretKeyEntry::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring KeyStore_SecretKeyEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyStore_SecretKeyEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject KeyStore_SecretKeyEntry::getSecretKey()
	{
		return __thiz.callObjectMethod(
			"getSecretKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStore_SecretKeyEntry : public __jni_impl::java::security::KeyStore_SecretKeyEntry
	{
	public:
		KeyStore_SecretKeyEntry(QAndroidJniObject obj) { __thiz = obj; }
		KeyStore_SecretKeyEntry(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		KeyStore_SecretKeyEntry(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYSTORE_SECRETKEYENTRY

