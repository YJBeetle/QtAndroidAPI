#pragma once

#include "../../../JString.hpp"
#include "./CertificateException.def.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateException::CertificateException()
		: java::lang::Exception(
			"javax.security.cert.CertificateException",
			"()V"
		) {}
	inline CertificateException::CertificateException(JString arg0)
		: java::lang::Exception(
			"javax.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

// Base class headers
#include "../../../java/lang/Exception.hpp"

