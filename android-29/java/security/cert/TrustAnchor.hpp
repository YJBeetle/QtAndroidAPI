#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}

namespace __jni_impl::java::security::cert
{
	class TrustAnchor : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::cert::X509Certificate arg0, jbyteArray arg1);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2);
		void __constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2);
		void __constructor(__jni_impl::javax::security::auth::x500::X500Principal arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2);
		
		// Methods
		QAndroidJniObject getCA();
		jstring getCAName();
		QAndroidJniObject getCAPublicKey();
		jbyteArray getNameConstraints();
		QAndroidJniObject getTrustedCert();
		jstring toString();
	};
} // namespace __jni_impl::java::security::cert

#include "./X509Certificate.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void TrustAnchor::__constructor(__jni_impl::java::security::cert::X509Certificate arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TrustAnchor::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/lang/String;Ljava/security/PublicKey;[B)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TrustAnchor::__constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/lang/String;Ljava/security/PublicKey;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TrustAnchor::__constructor(__jni_impl::javax::security::auth::x500::X500Principal arg0, __jni_impl::__JniBaseClass arg1, jbyteArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject TrustAnchor::getCA()
	{
		return __thiz.callObjectMethod(
			"getCA",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jstring TrustAnchor::getCAName()
	{
		return __thiz.callObjectMethod(
			"getCAName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TrustAnchor::getCAPublicKey()
	{
		return __thiz.callObjectMethod(
			"getCAPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jbyteArray TrustAnchor::getNameConstraints()
	{
		return __thiz.callObjectMethod(
			"getNameConstraints",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject TrustAnchor::getTrustedCert()
	{
		return __thiz.callObjectMethod(
			"getTrustedCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jstring TrustAnchor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class TrustAnchor : public __jni_impl::java::security::cert::TrustAnchor
	{
	public:
		TrustAnchor(QAndroidJniObject obj) { __thiz = obj; }
		TrustAnchor(__jni_impl::java::security::cert::X509Certificate arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
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
	};
} // namespace java::security::cert

