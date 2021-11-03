#include "../../../JByteArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../../JString.hpp"
#include "../../math/BigInteger.hpp"
#include "../Provider.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509Certificate.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	X509Certificate::X509Certificate(QAndroidJniObject obj) : java::security::cert::Certificate(obj) {}
	
	// Constructors
	
	// Methods
	void X509Certificate::checkValidity()
	{
		callMethod<void>(
			"checkValidity",
			"()V"
		);
	}
	void X509Certificate::checkValidity(java::util::Date arg0)
	{
		callMethod<void>(
			"checkValidity",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	jint X509Certificate::getBasicConstraints()
	{
		return callMethod<jint>(
			"getBasicConstraints",
			"()I"
		);
	}
	JObject X509Certificate::getExtendedKeyUsage()
	{
		return callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/List;"
		);
	}
	JObject X509Certificate::getIssuerAlternativeNames()
	{
		return callObjectMethod(
			"getIssuerAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	JObject X509Certificate::getIssuerDN()
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	JBooleanArray X509Certificate::getIssuerUniqueID()
	{
		return callObjectMethod(
			"getIssuerUniqueID",
			"()[Z"
		);
	}
	javax::security::auth::x500::X500Principal X509Certificate::getIssuerX500Principal()
	{
		return callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JBooleanArray X509Certificate::getKeyUsage()
	{
		return callObjectMethod(
			"getKeyUsage",
			"()[Z"
		);
	}
	java::util::Date X509Certificate::getNotAfter()
	{
		return callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date X509Certificate::getNotBefore()
	{
		return callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	java::math::BigInteger X509Certificate::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	JString X509Certificate::getSigAlgName()
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		);
	}
	JString X509Certificate::getSigAlgOID()
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		);
	}
	JByteArray X509Certificate::getSigAlgParams()
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		);
	}
	JByteArray X509Certificate::getSignature()
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		);
	}
	JObject X509Certificate::getSubjectAlternativeNames()
	{
		return callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	JObject X509Certificate::getSubjectDN()
	{
		return callObjectMethod(
			"getSubjectDN",
			"()Ljava/security/Principal;"
		);
	}
	JBooleanArray X509Certificate::getSubjectUniqueID()
	{
		return callObjectMethod(
			"getSubjectUniqueID",
			"()[Z"
		);
	}
	javax::security::auth::x500::X500Principal X509Certificate::getSubjectX500Principal()
	{
		return callObjectMethod(
			"getSubjectX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JByteArray X509Certificate::getTBSCertificate()
	{
		return callObjectMethod(
			"getTBSCertificate",
			"()[B"
		);
	}
	jint X509Certificate::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	void X509Certificate::verify(JObject arg0, java::security::Provider arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

