#pragma once

#include "../../../JString.hpp"
#include "./CertificateNotYetValidException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateNotYetValidException::CertificateNotYetValidException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateNotYetValidException",
			"()V"
		) {}
	inline CertificateNotYetValidException::CertificateNotYetValidException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"

