#pragma once

#include "../../../JString.hpp"
#include "./CertificateParsingException.def.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateParsingException::CertificateParsingException()
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateParsingException",
			"()V"
		) {}
	inline CertificateParsingException::CertificateParsingException(JString arg0)
		: javax::security::cert::CertificateException(
			"javax.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::cert

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::cert;
#endif
