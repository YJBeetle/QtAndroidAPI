#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertPathBuilderException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertPathBuilderException::CertPathBuilderException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"()V"
		) {}
	inline CertPathBuilderException::CertPathBuilderException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CertPathBuilderException::CertPathBuilderException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CertPathBuilderException::CertPathBuilderException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

