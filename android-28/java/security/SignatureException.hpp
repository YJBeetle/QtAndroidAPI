#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SignatureException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline SignatureException::SignatureException()
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"()V"
		) {}
	inline SignatureException::SignatureException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SignatureException::SignatureException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SignatureException::SignatureException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"

