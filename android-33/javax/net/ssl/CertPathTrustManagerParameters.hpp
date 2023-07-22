#pragma once

#include "./CertPathTrustManagerParameters.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline CertPathTrustManagerParameters::CertPathTrustManagerParameters(JObject arg0)
		: JObject(
			"javax.net.ssl.CertPathTrustManagerParameters",
			"(Ljava/security/cert/CertPathParameters;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject CertPathTrustManagerParameters::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/cert/CertPathParameters;"
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
