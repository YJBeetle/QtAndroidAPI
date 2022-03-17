#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvalidKeySpecException.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline InvalidKeySpecException::InvalidKeySpecException()
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"()V"
		) {}
	inline InvalidKeySpecException::InvalidKeySpecException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidKeySpecException::InvalidKeySpecException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InvalidKeySpecException::InvalidKeySpecException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::spec

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

