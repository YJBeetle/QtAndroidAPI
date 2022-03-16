#pragma once

#include "../../../JString.hpp"
#include "./CertificateExpiredException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateExpiredException::CertificateExpiredException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateExpiredException",
			"()V"
		) {}
	inline CertificateExpiredException::CertificateExpiredException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"

