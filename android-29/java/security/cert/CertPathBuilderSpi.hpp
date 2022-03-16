#pragma once

#include "./CertPathBuilderSpi.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertPathBuilderSpi::CertPathBuilderSpi()
		: JObject(
			"java.security.cert.CertPathBuilderSpi",
			"()V"
		) {}
	
	// Methods
	inline JObject CertPathBuilderSpi::engineBuild(JObject arg0) const
	{
		return callObjectMethod(
			"engineBuild",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.object()
		);
	}
	inline JObject CertPathBuilderSpi::engineGetRevocationChecker() const
	{
		return callObjectMethod(
			"engineGetRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
} // namespace java::security::cert

// Base class headers

