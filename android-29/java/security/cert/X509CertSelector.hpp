#pragma once

#ifndef JAVA_SECURITY_CERT_X509CERTSELECTOR
#define JAVA_SECURITY_CERT_X509CERTSELECTOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}
namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::java::security::cert
{
	class X509CertSelector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		jboolean match(__jni_impl::java::security::cert::Certificate arg0);
		jint getBasicConstraints();
		QAndroidJniObject getPolicy();
		void setPathToNames(__jni_impl::__JniBaseClass arg0);
		void setNameConstraints(jbyteArray arg0);
		QAndroidJniObject getNameConstraints();
		QAndroidJniObject getIssuerAsString();
		QAndroidJniObject getSubjectAsString();
		void setIssuer(jbyteArray arg0);
		void setIssuer(jstring arg0);
		void setIssuer(__jni_impl::javax::security::auth::x500::X500Principal arg0);
		void setSubjectKeyIdentifier(jbyteArray arg0);
		void setAuthorityKeyIdentifier(jbyteArray arg0);
		void setCertificateValid(__jni_impl::java::util::Date arg0);
		void setPrivateKeyValid(__jni_impl::java::util::Date arg0);
		void setSubjectPublicKeyAlgID(jstring arg0);
		void setSubjectPublicKey(jbyteArray arg0);
		void setSubjectPublicKey(__jni_impl::__JniBaseClass arg0);
		void setKeyUsage(jbooleanArray arg0);
		void setExtendedKeyUsage(__jni_impl::__JniBaseClass arg0);
		void setMatchAllSubjectAltNames(jboolean arg0);
		void setSubjectAlternativeNames(__jni_impl::__JniBaseClass arg0);
		void addSubjectAlternativeName(jint arg0, jbyteArray arg1);
		void addSubjectAlternativeName(jint arg0, jstring arg1);
		void setBasicConstraints(jint arg0);
		void addPathToName(jint arg0, jbyteArray arg1);
		void addPathToName(jint arg0, jstring arg1);
		QAndroidJniObject getIssuer();
		QAndroidJniObject getIssuerAsBytes();
		QAndroidJniObject getSubjectAsBytes();
		QAndroidJniObject getSubjectKeyIdentifier();
		QAndroidJniObject getAuthorityKeyIdentifier();
		QAndroidJniObject getCertificateValid();
		QAndroidJniObject getPrivateKeyValid();
		QAndroidJniObject getSubjectPublicKeyAlgID();
		QAndroidJniObject getSubjectPublicKey();
		jboolean getMatchAllSubjectAltNames();
		QAndroidJniObject getPathToNames();
		void setPolicy(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getSubject();
		QAndroidJniObject getSerialNumber();
		QAndroidJniObject getCertificate();
		void setCertificate(__jni_impl::java::security::cert::X509Certificate arg0);
		void setSubject(__jni_impl::javax::security::auth::x500::X500Principal arg0);
		void setSubject(jbyteArray arg0);
		void setSubject(jstring arg0);
		void setSerialNumber(__jni_impl::java::math::BigInteger arg0);
		QAndroidJniObject getKeyUsage();
		QAndroidJniObject getExtendedKeyUsage();
		QAndroidJniObject getSubjectAlternativeNames();
	};
} // namespace __jni_impl::java::security::cert

#include "../../math/BigInteger.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "../../util/Date.hpp"
#include "X509Certificate.hpp"
#include "../../lang/Boolean.hpp"
#include "Certificate.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void X509CertSelector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509CertSelector",
			"()V");
	}
	
	// Methods
	QAndroidJniObject X509CertSelector::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject X509CertSelector::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jboolean X509CertSelector::match(__jni_impl::java::security::cert::Certificate arg0)
	{
		return __thiz.callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.__jniObject().object());
	}
	jint X509CertSelector::getBasicConstraints()
	{
		return __thiz.callMethod<jint>(
			"getBasicConstraints",
			"()I");
	}
	QAndroidJniObject X509CertSelector::getPolicy()
	{
		return __thiz.callObjectMethod(
			"getPolicy",
			"()Ljava/util/Set;");
	}
	void X509CertSelector::setPathToNames(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPathToNames",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setNameConstraints(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setNameConstraints",
			"([B)V",
			arg0);
	}
	QAndroidJniObject X509CertSelector::getNameConstraints()
	{
		return __thiz.callObjectMethod(
			"getNameConstraints",
			"()[B");
	}
	QAndroidJniObject X509CertSelector::getIssuerAsString()
	{
		return __thiz.callObjectMethod(
			"getIssuerAsString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject X509CertSelector::getSubjectAsString()
	{
		return __thiz.callObjectMethod(
			"getSubjectAsString",
			"()Ljava/lang/String;");
	}
	void X509CertSelector::setIssuer(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setIssuer",
			"([B)V",
			arg0);
	}
	void X509CertSelector::setIssuer(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setIssuer",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void X509CertSelector::setIssuer(__jni_impl::javax::security::auth::x500::X500Principal arg0)
	{
		__thiz.callMethod<void>(
			"setIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setSubjectKeyIdentifier(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectKeyIdentifier",
			"([B)V",
			arg0);
	}
	void X509CertSelector::setAuthorityKeyIdentifier(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setAuthorityKeyIdentifier",
			"([B)V",
			arg0);
	}
	void X509CertSelector::setCertificateValid(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setCertificateValid",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setPrivateKeyValid(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateKeyValid",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setSubjectPublicKeyAlgID(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectPublicKeyAlgID",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void X509CertSelector::setSubjectPublicKey(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectPublicKey",
			"([B)V",
			arg0);
	}
	void X509CertSelector::setSubjectPublicKey(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setKeyUsage(jbooleanArray arg0)
	{
		__thiz.callMethod<void>(
			"setKeyUsage",
			"([Z)V",
			arg0);
	}
	void X509CertSelector::setExtendedKeyUsage(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExtendedKeyUsage",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setMatchAllSubjectAltNames(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMatchAllSubjectAltNames",
			"(Z)V",
			arg0);
	}
	void X509CertSelector::setSubjectAlternativeNames(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectAlternativeNames",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"addSubjectAlternativeName",
			"(I[B)V",
			arg0,
			arg1);
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addSubjectAlternativeName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	void X509CertSelector::setBasicConstraints(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBasicConstraints",
			"(I)V",
			arg0);
	}
	void X509CertSelector::addPathToName(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"addPathToName",
			"(I[B)V",
			arg0,
			arg1);
	}
	void X509CertSelector::addPathToName(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addPathToName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject X509CertSelector::getIssuer()
	{
		return __thiz.callObjectMethod(
			"getIssuer",
			"()Ljavax/security/auth/x500/X500Principal;");
	}
	QAndroidJniObject X509CertSelector::getIssuerAsBytes()
	{
		return __thiz.callObjectMethod(
			"getIssuerAsBytes",
			"()[B");
	}
	QAndroidJniObject X509CertSelector::getSubjectAsBytes()
	{
		return __thiz.callObjectMethod(
			"getSubjectAsBytes",
			"()[B");
	}
	QAndroidJniObject X509CertSelector::getSubjectKeyIdentifier()
	{
		return __thiz.callObjectMethod(
			"getSubjectKeyIdentifier",
			"()[B");
	}
	QAndroidJniObject X509CertSelector::getAuthorityKeyIdentifier()
	{
		return __thiz.callObjectMethod(
			"getAuthorityKeyIdentifier",
			"()[B");
	}
	QAndroidJniObject X509CertSelector::getCertificateValid()
	{
		return __thiz.callObjectMethod(
			"getCertificateValid",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject X509CertSelector::getPrivateKeyValid()
	{
		return __thiz.callObjectMethod(
			"getPrivateKeyValid",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject X509CertSelector::getSubjectPublicKeyAlgID()
	{
		return __thiz.callObjectMethod(
			"getSubjectPublicKeyAlgID",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject X509CertSelector::getSubjectPublicKey()
	{
		return __thiz.callObjectMethod(
			"getSubjectPublicKey",
			"()Ljava/security/PublicKey;");
	}
	jboolean X509CertSelector::getMatchAllSubjectAltNames()
	{
		return __thiz.callMethod<jboolean>(
			"getMatchAllSubjectAltNames",
			"()Z");
	}
	QAndroidJniObject X509CertSelector::getPathToNames()
	{
		return __thiz.callObjectMethod(
			"getPathToNames",
			"()Ljava/util/Collection;");
	}
	void X509CertSelector::setPolicy(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPolicy",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject X509CertSelector::getSubject()
	{
		return __thiz.callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/x500/X500Principal;");
	}
	QAndroidJniObject X509CertSelector::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject X509CertSelector::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/X509Certificate;");
	}
	void X509CertSelector::setCertificate(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setSubject(__jni_impl::javax::security::auth::x500::X500Principal arg0)
	{
		__thiz.callMethod<void>(
			"setSubject",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.__jniObject().object());
	}
	void X509CertSelector::setSubject(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setSubject",
			"([B)V",
			arg0);
	}
	void X509CertSelector::setSubject(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubject",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void X509CertSelector::setSerialNumber(__jni_impl::java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setSerialNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject X509CertSelector::getKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getKeyUsage",
			"()[Z");
	}
	QAndroidJniObject X509CertSelector::getExtendedKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject X509CertSelector::getSubjectAlternativeNames()
	{
		return __thiz.callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class X509CertSelector : public __jni_impl::java::security::cert::X509CertSelector
	{
	public:
		X509CertSelector(QAndroidJniObject obj) { __thiz = obj; }
		X509CertSelector()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_X509CERTSELECTOR

