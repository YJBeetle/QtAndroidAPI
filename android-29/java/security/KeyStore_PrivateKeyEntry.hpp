#pragma once

#ifndef JAVA_SECURITY_KEYSTORE_PRIVATEKEYENTRY
#define JAVA_SECURITY_KEYSTORE_PRIVATEKEYENTRY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::java::security
{
	class KeyStore_PrivateKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jarray arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, jarray arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getAttributes();
		QAndroidJniObject getCertificate();
		QAndroidJniObject getPrivateKey();
		QAndroidJniObject getCertificateChain();
	};
} // namespace __jni_impl::java::security

#include "cert/Certificate.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStore_PrivateKeyEntry::__constructor(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void KeyStore_PrivateKeyEntry::__constructor(__jni_impl::__JniBaseClass arg0, jarray arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject KeyStore_PrivateKeyEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject KeyStore_PrivateKeyEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject KeyStore_PrivateKeyEntry::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/Certificate;");
	}
	QAndroidJniObject KeyStore_PrivateKeyEntry::getPrivateKey()
	{
		return __thiz.callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;");
	}
	QAndroidJniObject KeyStore_PrivateKeyEntry::getCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getCertificateChain",
			"()[Ljava/security/cert/Certificate;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStore_PrivateKeyEntry : public __jni_impl::java::security::KeyStore_PrivateKeyEntry
	{
	public:
		KeyStore_PrivateKeyEntry(QAndroidJniObject obj) { __thiz = obj; }
		KeyStore_PrivateKeyEntry(__jni_impl::__JniBaseClass arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		KeyStore_PrivateKeyEntry(__jni_impl::__JniBaseClass arg0, jarray arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYSTORE_PRIVATEKEYENTRY

