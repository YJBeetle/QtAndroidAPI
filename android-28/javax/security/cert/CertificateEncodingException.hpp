#pragma once

#include "../../../JString.hpp"
#include "./CertificateEncodingException.def.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateEncodingException::CertificateEncodingException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateEncodingException",
			"()V"
		) {}
	inline CertificateEncodingException::CertificateEncodingException(JString arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"

