#include "../../math/BigInteger.hpp"
#include "../Provider.hpp"
#include "./X509CRLEntry.hpp"
#include "./X509Certificate.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509CRL.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	X509CRL::X509CRL(QAndroidJniObject obj) : java::security::cert::CRL(obj) {}
	
	// Constructors
	
	// Methods
	jboolean X509CRL::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray X509CRL::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	JObject X509CRL::getIssuerDN()
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	javax::security::auth::x500::X500Principal X509CRL::getIssuerX500Principal()
	{
		return callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	java::util::Date X509CRL::getNextUpdate()
	{
		return callObjectMethod(
			"getNextUpdate",
			"()Ljava/util/Date;"
		);
	}
	java::security::cert::X509CRLEntry X509CRL::getRevokedCertificate(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;",
			arg0.object()
		);
	}
	java::security::cert::X509CRLEntry X509CRL::getRevokedCertificate(java::security::cert::X509Certificate arg0)
	{
		return callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;",
			arg0.object()
		);
	}
	JObject X509CRL::getRevokedCertificates()
	{
		return callObjectMethod(
			"getRevokedCertificates",
			"()Ljava/util/Set;"
		);
	}
	jstring X509CRL::getSigAlgName()
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X509CRL::getSigAlgOID()
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509CRL::getSigAlgParams()
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray X509CRL::getSignature()
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray X509CRL::getTBSCertList()
	{
		return callObjectMethod(
			"getTBSCertList",
			"()[B"
		).object<jbyteArray>();
	}
	java::util::Date X509CRL::getThisUpdate()
	{
		return callObjectMethod(
			"getThisUpdate",
			"()Ljava/util/Date;"
		);
	}
	jint X509CRL::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jint X509CRL::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void X509CRL::verify(JObject arg0)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void X509CRL::verify(JObject arg0, jstring arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void X509CRL::verify(JObject arg0, java::security::Provider arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

