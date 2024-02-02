#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../math/BigInteger.def.hpp"
#include "../Provider.def.hpp"
#include "./X509CRLEntry.def.hpp"
#include "./X509Certificate.def.hpp"
#include "../../util/Date.def.hpp"
#include "../../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./X509CRL.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean X509CRL::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray X509CRL::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JObject X509CRL::getIssuerDN() const
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	inline javax::security::auth::x500::X500Principal X509CRL::getIssuerX500Principal() const
	{
		return callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline java::util::Date X509CRL::getNextUpdate() const
	{
		return callObjectMethod(
			"getNextUpdate",
			"()Ljava/util/Date;"
		);
	}
	inline java::security::cert::X509CRLEntry X509CRL::getRevokedCertificate(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;",
			arg0.object()
		);
	}
	inline java::security::cert::X509CRLEntry X509CRL::getRevokedCertificate(java::security::cert::X509Certificate arg0) const
	{
		return callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;",
			arg0.object()
		);
	}
	inline JObject X509CRL::getRevokedCertificates() const
	{
		return callObjectMethod(
			"getRevokedCertificates",
			"()Ljava/util/Set;"
		);
	}
	inline JString X509CRL::getSigAlgName() const
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		);
	}
	inline JString X509CRL::getSigAlgOID() const
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray X509CRL::getSigAlgParams() const
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		);
	}
	inline JByteArray X509CRL::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		);
	}
	inline JByteArray X509CRL::getTBSCertList() const
	{
		return callObjectMethod(
			"getTBSCertList",
			"()[B"
		);
	}
	inline java::util::Date X509CRL::getThisUpdate() const
	{
		return callObjectMethod(
			"getThisUpdate",
			"()Ljava/util/Date;"
		);
	}
	inline jint X509CRL::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline jint X509CRL::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void X509CRL::verify(JObject arg0) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	inline void X509CRL::verify(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void X509CRL::verify(JObject arg0, java::security::Provider arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

// Base class headers
#include "./CRL.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
