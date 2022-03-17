#pragma once

#include "../../../JString.hpp"
#include "./CertificateNotYetValidException.def.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateNotYetValidException::CertificateNotYetValidException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateNotYetValidException",
			"()V"
		) {}
	inline CertificateNotYetValidException::CertificateNotYetValidException(JString arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"

