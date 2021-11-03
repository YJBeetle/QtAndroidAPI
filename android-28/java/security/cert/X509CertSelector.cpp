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
	
	// QAndroidJniObject forward
	X509CertSelector::X509CertSelector(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	X509CertSelector::X509CertSelector()
		: JObject(
			"java.security.cert.X509CertSelector",
			"()V"
		) {}
	
	// Methods
	void X509CertSelector::addPathToName(jint arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"addPathToName",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void X509CertSelector::addPathToName(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"addPathToName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"addSubjectAlternativeName",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"addSubjectAlternativeName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jobject X509CertSelector::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray X509CertSelector::getAuthorityKeyIdentifier()
	{
		return callObjectMethod(
			"getAuthorityKeyIdentifier",
			"()[B"
		).object<jbyteArray>();
	}
	jint X509CertSelector::getBasicConstraints()
	{
		return callMethod<jint>(
			"getBasicConstraints",
			"()I"
		);
	}
	java::security::cert::X509Certificate X509CertSelector::getCertificate()
	{
		return callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	java::util::Date X509CertSelector::getCertificateValid()
	{
		return callObjectMethod(
			"getCertificateValid",
			"()Ljava/util/Date;"
		);
	}
	JObject X509CertSelector::getExtendedKeyUsage()
	{
		return callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/Set;"
		);
	}
	javax::security::auth::x500::X500Principal X509CertSelector::getIssuer()
	{
		return callObjectMethod(
			"getIssuer",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jbyteArray X509CertSelector::getIssuerAsBytes()
	{
		return callObjectMethod(
			"getIssuerAsBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X509CertSelector::getIssuerAsString()
	{
		return callObjectMethod(
			"getIssuerAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbooleanArray X509CertSelector::getKeyUsage()
	{
		return callObjectMethod(
			"getKeyUsage",
			"()[Z"
		).object<jbooleanArray>();
	}
	jboolean X509CertSelector::getMatchAllSubjectAltNames()
	{
		return callMethod<jboolean>(
			"getMatchAllSubjectAltNames",
			"()Z"
		);
	}
	jbyteArray X509CertSelector::getNameConstraints()
	{
		return callObjectMethod(
			"getNameConstraints",
			"()[B"
		).object<jbyteArray>();
	}
	JObject X509CertSelector::getPathToNames()
	{
		return callObjectMethod(
			"getPathToNames",
			"()Ljava/util/Collection;"
		);
	}
	JObject X509CertSelector::getPolicy()
	{
		return callObjectMethod(
			"getPolicy",
			"()Ljava/util/Set;"
		);
	}
	java::util::Date X509CertSelector::getPrivateKeyValid()
	{
		return callObjectMethod(
			"getPrivateKeyValid",
			"()Ljava/util/Date;"
		);
	}
	java::math::BigInteger X509CertSelector::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	javax::security::auth::x500::X500Principal X509CertSelector::getSubject()
	{
		return callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JObject X509CertSelector::getSubjectAlternativeNames()
	{
		return callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	jbyteArray X509CertSelector::getSubjectAsBytes()
	{
		return callObjectMethod(
			"getSubjectAsBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X509CertSelector::getSubjectAsString()
	{
		return callObjectMethod(
			"getSubjectAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509CertSelector::getSubjectKeyIdentifier()
	{
		return callObjectMethod(
			"getSubjectKeyIdentifier",
			"()[B"
		).object<jbyteArray>();
	}
	JObject X509CertSelector::getSubjectPublicKey()
	{
		return callObjectMethod(
			"getSubjectPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jstring X509CertSelector::getSubjectPublicKeyAlgID()
	{
		return callObjectMethod(
			"getSubjectPublicKeyAlgID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean X509CertSelector::match(java::security::cert::Certificate arg0)
	{
		return callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.object()
		);
	}
	void X509CertSelector::setAuthorityKeyIdentifier(jbyteArray arg0)
	{
		callMethod<void>(
			"setAuthorityKeyIdentifier",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setBasicConstraints(jint arg0)
	{
		callMethod<void>(
			"setBasicConstraints",
			"(I)V",
			arg0
		);
	}
	void X509CertSelector::setCertificate(java::security::cert::X509Certificate arg0)
	{
		callMethod<void>(
			"setCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setCertificateValid(java::util::Date arg0)
	{
		callMethod<void>(
			"setCertificateValid",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setExtendedKeyUsage(JObject arg0)
	{
		callMethod<void>(
			"setExtendedKeyUsage",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setIssuer(jbyteArray arg0)
	{
		callMethod<void>(
			"setIssuer",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setIssuer(jstring arg0)
	{
		callMethod<void>(
			"setIssuer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void X509CertSelector::setIssuer(javax::security::auth::x500::X500Principal arg0)
	{
		callMethod<void>(
			"setIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setKeyUsage(jbooleanArray arg0)
	{
		callMethod<void>(
			"setKeyUsage",
			"([Z)V",
			arg0
		);
	}
	void X509CertSelector::setMatchAllSubjectAltNames(jboolean arg0)
	{
		callMethod<void>(
			"setMatchAllSubjectAltNames",
			"(Z)V",
			arg0
		);
	}
	void X509CertSelector::setNameConstraints(jbyteArray arg0)
	{
		callMethod<void>(
			"setNameConstraints",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setPathToNames(JObject arg0)
	{
		callMethod<void>(
			"setPathToNames",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setPolicy(JObject arg0)
	{
		callMethod<void>(
			"setPolicy",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setPrivateKeyValid(java::util::Date arg0)
	{
		callMethod<void>(
			"setPrivateKeyValid",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSerialNumber(java::math::BigInteger arg0)
	{
		callMethod<void>(
			"setSerialNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubject(jbyteArray arg0)
	{
		callMethod<void>(
			"setSubject",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setSubject(jstring arg0)
	{
		callMethod<void>(
			"setSubject",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void X509CertSelector::setSubject(javax::security::auth::x500::X500Principal arg0)
	{
		callMethod<void>(
			"setSubject",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubjectAlternativeNames(JObject arg0)
	{
		callMethod<void>(
			"setSubjectAlternativeNames",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubjectKeyIdentifier(jbyteArray arg0)
	{
		callMethod<void>(
			"setSubjectKeyIdentifier",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setSubjectPublicKey(jbyteArray arg0)
	{
		callMethod<void>(
			"setSubjectPublicKey",
			"([B)V",
			arg0
		);
	}
	void X509CertSelector::setSubjectPublicKey(JObject arg0)
	{
		callMethod<void>(
			"setSubjectPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubjectPublicKeyAlgID(jstring arg0)
	{
		callMethod<void>(
			"setSubjectPublicKeyAlgID",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring X509CertSelector::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

