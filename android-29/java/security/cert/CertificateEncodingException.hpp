#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertificateEncodingException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateEncodingException::CertificateEncodingException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"()V"
		) {}
	inline CertificateEncodingException::CertificateEncodingException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CertificateEncodingException::CertificateEncodingException(JThrowable arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CertificateEncodingException::CertificateEncodingException(JString arg0, JThrowable arg1)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateEncodingException",
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
