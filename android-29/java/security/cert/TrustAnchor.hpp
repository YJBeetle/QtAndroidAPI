#pragma once

#ifndef JAVA_SECURITY_CERT_TRUSTANCHOR
#define JAVA_SECURITY_CERT_TRUSTANCHOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}
namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}

namespace __jni_impl::java::security::cert
{
	class TrustAnchor : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2);
		void __constructor(__jni_impl::javax::security::auth::x500::X500Principal arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2);
		void __constructor(__jni_impl::java::security::cert::X509Certificate arg0, jbyteArray arg1);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getTrustedCert();
		QAndroidJniObject getCA();
		QAndroidJniObject getCAName();
		QAndroidJniObject getCAPublicKey();
		QAndroidJniObject getNameConstraints();
	};
} // namespace __jni_impl::java::security::cert

#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "X509Certificate.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void TrustAnchor::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/lang/String;Ljava/security/PublicKey;[B)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	void TrustAnchor::__constructor(__jni_impl::javax::security::auth::x500::X500Principal arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void TrustAnchor::__constructor(__jni_impl::java::security::cert::X509Certificate arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject TrustAnchor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TrustAnchor::getTrustedCert()
	{
		return __thiz.callObjectMethod(
			"getTrustedCert",
			"()Ljava/security/cert/X509Certificate;");
	}
	QAndroidJniObject TrustAnchor::getCA()
	{
		return __thiz.callObjectMethod(
			"getCA",
			"()Ljavax/security/auth/x500/X500Principal;");
	}
	QAndroidJniObject TrustAnchor::getCAName()
	{
		return __thiz.callObjectMethod(
			"getCAName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TrustAnchor::getCAPublicKey()
	{
		return __thiz.callObjectMethod(
			"getCAPublicKey",
			"()Ljava/security/PublicKey;");
	}
	QAndroidJniObject TrustAnchor::getNameConstraints()
	{
		return __thiz.callObjectMethod(
			"getNameConstraints",
			"()[B");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class TrustAnchor : public __jni_impl::java::security::cert::TrustAnchor
	{
	public:
		TrustAnchor(QAndroidJniObject obj) { __thiz = obj; }
		TrustAnchor(jstring arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TrustAnchor(__jni_impl::javax::security::auth::x500::X500Principal arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TrustAnchor(__jni_impl::java::security::cert::X509Certificate arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_TRUSTANCHOR

