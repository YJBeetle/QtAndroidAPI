#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TrustAnchor.def.hpp"
#include "./PKIXCertPathValidatorResult.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline PKIXCertPathValidatorResult::PKIXCertPathValidatorResult(java::security::cert::TrustAnchor arg0, JObject arg1, JObject arg2)
		: JObject(
			"java.security.cert.PKIXCertPathValidatorResult",
			"(Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline JObject PKIXCertPathValidatorResult::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject PKIXCertPathValidatorResult::getPolicyTree() const
	{
		return callObjectMethod(
			"getPolicyTree",
			"()Ljava/security/cert/PolicyNode;"
		);
	}
	inline JObject PKIXCertPathValidatorResult::getPublicKey() const
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	inline java::security::cert::TrustAnchor PKIXCertPathValidatorResult::getTrustAnchor() const
	{
		return callObjectMethod(
			"getTrustAnchor",
			"()Ljava/security/cert/TrustAnchor;"
		);
	}
	inline JString PKIXCertPathValidatorResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

