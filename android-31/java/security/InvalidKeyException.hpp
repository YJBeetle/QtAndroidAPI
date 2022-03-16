#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidKeyException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline InvalidKeyException::InvalidKeyException()
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"()V"
		) {}
	inline InvalidKeyException::InvalidKeyException(JString arg0)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidKeyException::InvalidKeyException(JThrowable arg0)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InvalidKeyException::InvalidKeyException(JString arg0, JThrowable arg1)
		: java::security::KeyException(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./KeyException.hpp"

