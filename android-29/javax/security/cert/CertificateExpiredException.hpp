#pragma once

#include "../../../JString.hpp"
#include "./CertificateExpiredException.def.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateExpiredException::CertificateExpiredException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateExpiredException",
			"()V"
		) {}
	inline CertificateExpiredException::CertificateExpiredException(JString arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"

