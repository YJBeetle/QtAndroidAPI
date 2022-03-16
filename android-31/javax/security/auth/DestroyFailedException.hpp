#pragma once

#include "../../../JString.hpp"
#include "./DestroyFailedException.def.hpp"

namespace javax::security::auth
{
	// Fields
	
	// Constructors
	inline DestroyFailedException::DestroyFailedException()
		: java::lang::Exception(
			"javax.security.auth.DestroyFailedException",
			"()V"
		) {}
	inline DestroyFailedException::DestroyFailedException(JString arg0)
		: java::lang::Exception(
			"javax.security.auth.DestroyFailedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::security::auth

// Base class headers
#include "../../../java/lang/Exception.hpp"

