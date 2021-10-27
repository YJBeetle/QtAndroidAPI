#pragma once

#ifndef JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY
#define JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::java::security
{
	class KeyStore_TrustedCertificateEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::cert::Certificate arg0);
		void __constructor(__jni_impl::java::security::cert::Certificate arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getAttributes();
		QAndroidJniObject getTrustedCertificate();
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "cert/Certificate.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStore_TrustedCertificateEntry::__constructor(__jni_impl::java::security::cert::Certificate arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStore_TrustedCertificateEntry::__constructor(__jni_impl::java::security::cert::Certificate arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStore_TrustedCertificateEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject KeyStore_TrustedCertificateEntry::getTrustedCertificate()
	{
		return __thiz.callObjectMethod(
			"getTrustedCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	jstring KeyStore_TrustedCertificateEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStore_TrustedCertificateEntry : public __jni_impl::java::security::KeyStore_TrustedCertificateEntry
	{
	public:
		KeyStore_TrustedCertificateEntry(QAndroidJniObject obj) { __thiz = obj; }
		KeyStore_TrustedCertificateEntry(__jni_impl::java::security::cert::Certificate arg0)
		{
			__constructor(
				arg0);
		}
		KeyStore_TrustedCertificateEntry(__jni_impl::java::security::cert::Certificate arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY

