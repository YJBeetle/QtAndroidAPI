#pragma once

#ifndef JAVA_SECURITY_CERT_X509CERTIFICATE
#define JAVA_SECURITY_CERT_X509CERTIFICATE

#include "../../../__JniBaseClass.hpp"
#include "Certificate.hpp"

namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::security::cert
{
	class X509Certificate : public __jni_impl::java::security::cert::Certificate
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jbyteArray getSignature();
		jint getBasicConstraints();
		void verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1);
		QAndroidJniObject getIssuerDN();
		QAndroidJniObject getSubjectDN();
		jint getVersion();
		QAndroidJniObject getSerialNumber();
		jbooleanArray getKeyUsage();
		QAndroidJniObject getIssuerX500Principal();
		QAndroidJniObject getSubjectX500Principal();
		QAndroidJniObject getExtendedKeyUsage();
		QAndroidJniObject getSubjectAlternativeNames();
		QAndroidJniObject getIssuerAlternativeNames();
		jstring getSigAlgName();
		jbyteArray getSigAlgParams();
		jbyteArray getTBSCertificate();
		void checkValidity(__jni_impl::java::util::Date arg0);
		void checkValidity();
		QAndroidJniObject getNotBefore();
		QAndroidJniObject getNotAfter();
		jstring getSigAlgOID();
		jbooleanArray getIssuerUniqueID();
		jbooleanArray getSubjectUniqueID();
	};
} // namespace __jni_impl::java::security::cert

#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "../Provider.hpp"
#include "../../math/BigInteger.hpp"
#include "../../util/Date.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void X509Certificate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509Certificate",
			"(V)V");
	}
	
	// Methods
	jbyteArray X509Certificate::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	jint X509Certificate::getBasicConstraints()
	{
		return __thiz.callMethod<jint>(
			"getBasicConstraints",
			"()I"
		);
	}
	void X509Certificate::verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject X509Certificate::getIssuerDN()
	{
		return __thiz.callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject X509Certificate::getSubjectDN()
	{
		return __thiz.callObjectMethod(
			"getSubjectDN",
			"()Ljava/security/Principal;"
		);
	}
	jint X509Certificate::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	QAndroidJniObject X509Certificate::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	jbooleanArray X509Certificate::getKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getKeyUsage",
			"()[Z"
		).object<jbooleanArray>();
	}
	QAndroidJniObject X509Certificate::getIssuerX500Principal()
	{
		return __thiz.callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	QAndroidJniObject X509Certificate::getSubjectX500Principal()
	{
		return __thiz.callObjectMethod(
			"getSubjectX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	QAndroidJniObject X509Certificate::getExtendedKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject X509Certificate::getSubjectAlternativeNames()
	{
		return __thiz.callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject X509Certificate::getIssuerAlternativeNames()
	{
		return __thiz.callObjectMethod(
			"getIssuerAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	jstring X509Certificate::getSigAlgName()
	{
		return __thiz.callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509Certificate::getSigAlgParams()
	{
		return __thiz.callObjectMethod(
			"getSigAlgParams",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray X509Certificate::getTBSCertificate()
	{
		return __thiz.callObjectMethod(
			"getTBSCertificate",
			"()[B"
		).object<jbyteArray>();
	}
	void X509Certificate::checkValidity(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"checkValidity",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void X509Certificate::checkValidity()
	{
		__thiz.callMethod<void>(
			"checkValidity",
			"()V"
		);
	}
	QAndroidJniObject X509Certificate::getNotBefore()
	{
		return __thiz.callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509Certificate::getNotAfter()
	{
		return __thiz.callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	jstring X509Certificate::getSigAlgOID()
	{
		return __thiz.callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbooleanArray X509Certificate::getIssuerUniqueID()
	{
		return __thiz.callObjectMethod(
			"getIssuerUniqueID",
			"()[Z"
		).object<jbooleanArray>();
	}
	jbooleanArray X509Certificate::getSubjectUniqueID()
	{
		return __thiz.callObjectMethod(
			"getSubjectUniqueID",
			"()[Z"
		).object<jbooleanArray>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class X509Certificate : public __jni_impl::java::security::cert::X509Certificate
	{
	public:
		X509Certificate(QAndroidJniObject obj) { __thiz = obj; }
		X509Certificate()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_X509CERTIFICATE

