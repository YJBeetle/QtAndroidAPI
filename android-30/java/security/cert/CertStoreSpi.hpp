#pragma once

#include "./CertStoreSpi.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertStoreSpi::CertStoreSpi(JObject arg0)
		: JObject(
			"java.security.cert.CertStoreSpi",
			"(Ljava/security/cert/CertStoreParameters;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject CertStoreSpi::engineGetCRLs(JObject arg0) const
	{
		return callObjectMethod(
			"engineGetCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline JObject CertStoreSpi::engineGetCertificates(JObject arg0) const
	{
		return callObjectMethod(
			"engineGetCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
} // namespace java::security::cert

// Base class headers

