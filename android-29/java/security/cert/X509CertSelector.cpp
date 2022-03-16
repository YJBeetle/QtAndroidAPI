#include "../../../JByteArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../lang/Boolean.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../math/BigInteger.hpp"
#include "./Certificate.hpp"
#include "./X509Certificate.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509CertSelector.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	X509CertSelector::X509CertSelector()
		: JObject(
			"java.security.cert.X509CertSelector",
			"()V"
		) {}
	
	// Methods
	void X509CertSelector::addPathToName(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"addPathToName",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	void X509CertSelector::addPathToName(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"addPathToName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"addSubjectAlternativeName",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	void X509CertSelector::addSubjectAlternativeName(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"addSubjectAlternativeName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	JObject X509CertSelector::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JByteArray X509CertSelector::getAuthorityKeyIdentifier() const
	{
		return callObjectMethod(
			"getAuthorityKeyIdentifier",
			"()[B"
		);
	}
	jint X509CertSelector::getBasicConstraints() const
	{
		return callMethod<jint>(
			"getBasicConstraints",
			"()I"
		);
	}
	java::security::cert::X509Certificate X509CertSelector::getCertificate() const
	{
		return callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	java::util::Date X509CertSelector::getCertificateValid() const
	{
		return callObjectMethod(
			"getCertificateValid",
			"()Ljava/util/Date;"
		);
	}
	JObject X509CertSelector::getExtendedKeyUsage() const
	{
		return callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/Set;"
		);
	}
	javax::security::auth::x500::X500Principal X509CertSelector::getIssuer() const
	{
		return callObjectMethod(
			"getIssuer",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JByteArray X509CertSelector::getIssuerAsBytes() const
	{
		return callObjectMethod(
			"getIssuerAsBytes",
			"()[B"
		);
	}
	JString X509CertSelector::getIssuerAsString() const
	{
		return callObjectMethod(
			"getIssuerAsString",
			"()Ljava/lang/String;"
		);
	}
	JBooleanArray X509CertSelector::getKeyUsage() const
	{
		return callObjectMethod(
			"getKeyUsage",
			"()[Z"
		);
	}
	jboolean X509CertSelector::getMatchAllSubjectAltNames() const
	{
		return callMethod<jboolean>(
			"getMatchAllSubjectAltNames",
			"()Z"
		);
	}
	JByteArray X509CertSelector::getNameConstraints() const
	{
		return callObjectMethod(
			"getNameConstraints",
			"()[B"
		);
	}
	JObject X509CertSelector::getPathToNames() const
	{
		return callObjectMethod(
			"getPathToNames",
			"()Ljava/util/Collection;"
		);
	}
	JObject X509CertSelector::getPolicy() const
	{
		return callObjectMethod(
			"getPolicy",
			"()Ljava/util/Set;"
		);
	}
	java::util::Date X509CertSelector::getPrivateKeyValid() const
	{
		return callObjectMethod(
			"getPrivateKeyValid",
			"()Ljava/util/Date;"
		);
	}
	java::math::BigInteger X509CertSelector::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	javax::security::auth::x500::X500Principal X509CertSelector::getSubject() const
	{
		return callObjectMethod(
			"getSubject",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JObject X509CertSelector::getSubjectAlternativeNames() const
	{
		return callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	JByteArray X509CertSelector::getSubjectAsBytes() const
	{
		return callObjectMethod(
			"getSubjectAsBytes",
			"()[B"
		);
	}
	JString X509CertSelector::getSubjectAsString() const
	{
		return callObjectMethod(
			"getSubjectAsString",
			"()Ljava/lang/String;"
		);
	}
	JByteArray X509CertSelector::getSubjectKeyIdentifier() const
	{
		return callObjectMethod(
			"getSubjectKeyIdentifier",
			"()[B"
		);
	}
	JObject X509CertSelector::getSubjectPublicKey() const
	{
		return callObjectMethod(
			"getSubjectPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	JString X509CertSelector::getSubjectPublicKeyAlgID() const
	{
		return callObjectMethod(
			"getSubjectPublicKeyAlgID",
			"()Ljava/lang/String;"
		);
	}
	jboolean X509CertSelector::match(java::security::cert::Certificate arg0) const
	{
		return callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/Certificate;)Z",
			arg0.object()
		);
	}
	void X509CertSelector::setAuthorityKeyIdentifier(JByteArray arg0) const
	{
		callMethod<void>(
			"setAuthorityKeyIdentifier",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void X509CertSelector::setBasicConstraints(jint arg0) const
	{
		callMethod<void>(
			"setBasicConstraints",
			"(I)V",
			arg0
		);
	}
	void X509CertSelector::setCertificate(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setCertificateValid(java::util::Date arg0) const
	{
		callMethod<void>(
			"setCertificateValid",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setExtendedKeyUsage(JObject arg0) const
	{
		callMethod<void>(
			"setExtendedKeyUsage",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setIssuer(JByteArray arg0) const
	{
		callMethod<void>(
			"setIssuer",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void X509CertSelector::setIssuer(JString arg0) const
	{
		callMethod<void>(
			"setIssuer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void X509CertSelector::setIssuer(javax::security::auth::x500::X500Principal arg0) const
	{
		callMethod<void>(
			"setIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setKeyUsage(JBooleanArray arg0) const
	{
		callMethod<void>(
			"setKeyUsage",
			"([Z)V",
			arg0.object<jbooleanArray>()
		);
	}
	void X509CertSelector::setMatchAllSubjectAltNames(jboolean arg0) const
	{
		callMethod<void>(
			"setMatchAllSubjectAltNames",
			"(Z)V",
			arg0
		);
	}
	void X509CertSelector::setNameConstraints(JByteArray arg0) const
	{
		callMethod<void>(
			"setNameConstraints",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void X509CertSelector::setPathToNames(JObject arg0) const
	{
		callMethod<void>(
			"setPathToNames",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setPolicy(JObject arg0) const
	{
		callMethod<void>(
			"setPolicy",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setPrivateKeyValid(java::util::Date arg0) const
	{
		callMethod<void>(
			"setPrivateKeyValid",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSerialNumber(java::math::BigInteger arg0) const
	{
		callMethod<void>(
			"setSerialNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubject(JByteArray arg0) const
	{
		callMethod<void>(
			"setSubject",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void X509CertSelector::setSubject(JString arg0) const
	{
		callMethod<void>(
			"setSubject",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void X509CertSelector::setSubject(javax::security::auth::x500::X500Principal arg0) const
	{
		callMethod<void>(
			"setSubject",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubjectAlternativeNames(JObject arg0) const
	{
		callMethod<void>(
			"setSubjectAlternativeNames",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubjectKeyIdentifier(JByteArray arg0) const
	{
		callMethod<void>(
			"setSubjectKeyIdentifier",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void X509CertSelector::setSubjectPublicKey(JByteArray arg0) const
	{
		callMethod<void>(
			"setSubjectPublicKey",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void X509CertSelector::setSubjectPublicKey(JObject arg0) const
	{
		callMethod<void>(
			"setSubjectPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void X509CertSelector::setSubjectPublicKeyAlgID(JString arg0) const
	{
		callMethod<void>(
			"setSubjectPublicKeyAlgID",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString X509CertSelector::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

