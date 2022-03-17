#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./DigestException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline DigestException::DigestException()
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"()V"
		) {}
	inline DigestException::DigestException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline DigestException::DigestException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline DigestException::DigestException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"

