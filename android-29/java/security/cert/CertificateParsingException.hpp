#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertificateParsingException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateParsingException::CertificateParsingException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"()V"
		) {}
	inline CertificateParsingException::CertificateParsingException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CertificateParsingException::CertificateParsingException(JThrowable arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CertificateParsingException::CertificateParsingException(JString arg0, JThrowable arg1)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
