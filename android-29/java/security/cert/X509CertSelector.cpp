#include "../../lang/Boolean.hpp"
#include "../../math/BigInteger.hpp"
#include "./Certificate.hpp"
#include "./X509Certificate.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509CertSelector.hpp"

namespace java::security::cert
{
	// Fields
	
	X509CertSelector::X509CertSelector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	X509CertSelector::X509CertSelector()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509CertSelector",
			"()V"
		);
	}
	
	// Methods
	void X509CertSelector::addPathToName(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"addPathToName",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void X509CertSelector::addPathToName(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addPathToName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"addSubjectAlternativeName",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addSubjectAlternativeName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jobject X509CertSelector::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray X509CertSelector::getAuthorityKeyIdentifier()
	{
		return __thiz.callObjectMethod(
			"getAuthorityKeyIdentifier",
			"()[B"
		).object<jbyteArray>();
	}
	jint X509CertSelector::getBasicConstraints()
	{
		return __thiz.callMethod<jint>(
			"getBasicConstraints",
			"()I"
		);
	}
	QAndroidJniObject X509CertSelector::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	QAndroidJniObject X509CertSelector::getCertificateValid()
	{
		return __thiz.callObjectMethod(
			"getCertificateValid",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509CertSelector::getExtendedKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject X509CertSelector::getIssuer()
	{
		return __thiz.callObjectMethod(
			"getIssuer",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jbyteArray X509CertSelector::getIssuerAsBytes()
	{
		return __thiz.callObjectMethod(
			"getIssuerAsBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X509CertSelector::getIssuerAsString()
	{
		return __thiz.callObjectMethod(
			"getIssuerAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbooleanArray X509CertSelector::getKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getKeyUsage",
			"()[Z"
		).object<jbooleanArray>();
	}
	jboolean X509CertSelector::getMatchAllSubjectAltNames()
	{
		return __thiz.callMethod<jboolean>(
			"getMatchAllSubjectAltNames",
			"()Z"
		);
	}
	jbyteArray X509CertSelector::getNameConstraints()
	{
		return __thiz.callObjectMethod(
			"getNameConstraints",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509CertSelector::getPathToNames()
	{
		return __thiz.callObjectMethod(
			"getPathToNames",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject X509CertSelector::getPolicy()
	{
		return __thiz.callObjectMethod(
			"getPolicy",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject X509CertSelector::getPrivateKeyValid()
	{
		return __thiz.callObjectMethod(
			"getPrivateKeyValid",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509CertSelector::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject X509CertSelector::getSubject()
	{
		return __thiz.callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	QAndroidJniObject X509CertSelector::getSubjectAlternativeNames()
	{
		return __thiz.callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	jbyteArray X509CertSelector::getSubjectAsBytes()
	{
		return __thiz.callObjectMethod(
			"getSubjectAsBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X509CertSelector::getSubjectAsString()
	{
		return __thiz.callObjectMethod(
			"getSubjectAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509CertSelector::getSubjectKeyIdentifier()
	{
		return __thiz.callObjectMethod(
			"getSubjectKeyIdentifier",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509CertSelector::getSubjectPublicKey()
	{
		return __thiz.callObjectMethod(
			"getSubjectPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jstring X509CertSelector::getSubjectPublicKeyAlgID()
	{
		return __thiz.callObjectMethod(
			"getSubjectPublicKeyAlgID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean X509CertSelector::match(java::security::cert::Certificate arg0)
	{
		return __thiz.callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setAuthorityKeyIdentifier(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setAuthorityKeyIdentifier",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setBasicConstraints(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBasicConstraints",
			"(I)V",
			arg0
		);
	}
	void X509CertSelector::setCertificate(java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setCertificateValid(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setCertificateValid",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setExtendedKeyUsage(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExtendedKeyUsage",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setIssuer(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setIssuer",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setIssuer(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setIssuer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void X509CertSelector::setIssuer(javax::security::auth::x500::X500Principal arg0)
	{
		__thiz.callMethod<void>(
			"setIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setKeyUsage(jbooleanArray arg0)
	{
		__thiz.callMethod<void>(
			"setKeyUsage",
			"([Z)V",
			arg0
		);
	}
	void X509CertSelector::setMatchAllSubjectAltNames(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMatchAllSubjectAltNames",
			"(Z)V",
			arg0
		);
	}
	void X509CertSelector::setNameConstraints(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setNameConstraints",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setPathToNames(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPathToNames",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setPolicy(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPolicy",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setPrivateKeyValid(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateKeyValid",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setSerialNumber(java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setSerialNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setSubject(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setSubject",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setSubject(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubject",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void X509CertSelector::setSubject(javax::security::auth::x500::X500Principal arg0)
	{
		__thiz.callMethod<void>(
			"setSubject",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setSubjectAlternativeNames(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectAlternativeNames",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setSubjectKeyIdentifier(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectKeyIdentifier",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setSubjectPublicKey(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectPublicKey",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setSubjectPublicKey(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CertSelector::setSubjectPublicKeyAlgID(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubjectPublicKeyAlgID",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring X509CertSelector::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

