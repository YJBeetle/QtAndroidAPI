#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertificateException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateException::CertificateException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"()V"
		) {}
	inline CertificateException::CertificateException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CertificateException::CertificateException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CertificateException::CertificateException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

