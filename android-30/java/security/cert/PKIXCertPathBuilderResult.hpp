#pragma once

#include "../../../JString.hpp"
#include "./CertPath.def.hpp"
#include "./TrustAnchor.def.hpp"
#include "./PKIXCertPathBuilderResult.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(java::security::cert::CertPath arg0, java::security::cert::TrustAnchor arg1, JObject arg2, JObject arg3)
		: java::security::cert::PKIXCertPathValidatorResult(
			"java.security.cert.PKIXCertPathBuilderResult",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline java::security::cert::CertPath PKIXCertPathBuilderResult::getCertPath() const
	{
		return callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	inline JString PKIXCertPathBuilderResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers
#include "./PKIXCertPathValidatorResult.hpp"

