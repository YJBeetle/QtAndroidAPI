#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CRLException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CRLException::CRLException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"()V"
		) {}
	inline CRLException::CRLException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CRLException::CRLException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CRLException::CRLException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

