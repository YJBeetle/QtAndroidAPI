#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../../JString.hpp"
#include "../../math/BigInteger.def.hpp"
#include "../Provider.def.hpp"
#include "../../util/Date.def.hpp"
#include "../../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./X509Certificate.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void X509Certificate::checkValidity() const
	{
		callMethod<void>(
			"checkValidity",
			"()V"
		);
	}
	inline void X509Certificate::checkValidity(java::util::Date arg0) const
	{
		callMethod<void>(
			"checkValidity",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	inline jint X509Certificate::getBasicConstraints() const
	{
		return callMethod<jint>(
			"getBasicConstraints",
			"()I"
		);
	}
	inline JObject X509Certificate::getExtendedKeyUsage() const
	{
		return callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/List;"
		);
	}
	inline JObject X509Certificate::getIssuerAlternativeNames() const
	{
		return callObjectMethod(
			"getIssuerAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject X509Certificate::getIssuerDN() const
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	inline JBooleanArray X509Certificate::getIssuerUniqueID() const
	{
		return callObjectMethod(
			"getIssuerUniqueID",
			"()[Z"
		);
	}
	inline javax::security::auth::x500::X500Principal X509Certificate::getIssuerX500Principal() const
	{
		return callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline JBooleanArray X509Certificate::getKeyUsage() const
	{
		return callObjectMethod(
			"getKeyUsage",
			"()[Z"
		);
	}
	inline java::util::Date X509Certificate::getNotAfter() const
	{
		return callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date X509Certificate::getNotBefore() const
	{
		return callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	inline java::math::BigInteger X509Certificate::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	inline JString X509Certificate::getSigAlgName() const
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		);
	}
	inline JString X509Certificate::getSigAlgOID() const
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray X509Certificate::getSigAlgParams() const
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		);
	}
	inline JByteArray X509Certificate::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		);
	}
	inline JObject X509Certificate::getSubjectAlternativeNames() const
	{
		return callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject X509Certificate::getSubjectDN() const
	{
		return callObjectMethod(
			"getSubjectDN",
			"()Ljava/security/Principal;"
		);
	}
	inline JBooleanArray X509Certificate::getSubjectUniqueID() const
	{
		return callObjectMethod(
			"getSubjectUniqueID",
			"()[Z"
		);
	}
	inline javax::security::auth::x500::X500Principal X509Certificate::getSubjectX500Principal() const
	{
		return callObjectMethod(
			"getSubjectX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline JByteArray X509Certificate::getTBSCertificate() const
	{
		return callObjectMethod(
			"getTBSCertificate",
			"()[B"
		);
	}
	inline jint X509Certificate::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline void X509Certificate::verify(JObject arg0, java::security::Provider arg1) const
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
#include "./Certificate.hpp"

