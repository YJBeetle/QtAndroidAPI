#pragma once

#include "./CertPath.def.hpp"
#include "./CertPathValidatorSpi.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertPathValidatorSpi::CertPathValidatorSpi()
		: JObject(
			"java.security.cert.CertPathValidatorSpi",
			"()V"
		) {}
	
	// Methods
	inline JObject CertPathValidatorSpi::engineGetRevocationChecker() const
	{
		return callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	inline JObject CertPathValidatorSpi::engineValidate(java::security::cert::CertPath arg0, JObject arg1) const
	{
		return callObjectMethod(
			"engineValidate",
			"(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security::cert

// Base class headers

