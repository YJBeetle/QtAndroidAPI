#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// QJniObject forward
	X509CRL::X509CRL(QJniObject obj) : java::security::cert::CRL(obj) {}
	
	// Constructors
	
	// Methods
	jboolean X509CRL::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray X509CRL::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JObject X509CRL::getIssuerDN() const
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	javax::security::auth::x500::X500Principal X509CRL::getIssuerX500Principal() const
	{
		return callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	java::util::Date X509CRL::getNextUpdate() const
	{
		return callObjectMethod(
			"getNextUpdate",
			"()Ljava/util/Date;"
		);
	}
	java::security::cert::X509CRLEntry X509CRL::getRevokedCertificate(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;",
			arg0.object()
		);
	}
	java::security::cert::X509CRLEntry X509CRL::getRevokedCertificate(java::security::cert::X509Certificate arg0) const
	{
		return callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;",
			arg0.object()
		);
	}
	JObject X509CRL::getRevokedCertificates() const
	{
		return callObjectMethod(
			"getRevokedCertificates",
			"()Ljava/util/Set;"
		);
	}
	JString X509CRL::getSigAlgName() const
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		);
	}
	JString X509CRL::getSigAlgOID() const
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		);
	}
	JByteArray X509CRL::getSigAlgParams() const
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		);
	}
	JByteArray X509CRL::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		);
	}
	JByteArray X509CRL::getTBSCertList() const
	{
		return callObjectMethod(
			"getTBSCertList",
			"()[B"
		);
	}
	java::util::Date X509CRL::getThisUpdate() const
	{
		return callObjectMethod(
			"getThisUpdate",
			"()Ljava/util/Date;"
		);
	}
	jint X509CRL::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jint X509CRL::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void X509CRL::verify(JObject arg0) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void X509CRL::verify(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void X509CRL::verify(JObject arg0, java::security::Provider arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

