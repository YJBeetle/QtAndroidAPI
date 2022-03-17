#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./IdentityCredentialException.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	inline IdentityCredentialException::IdentityCredentialException(JString arg0)
		: java::lang::Exception(
			"android.security.identity.IdentityCredentialException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IdentityCredentialException::IdentityCredentialException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.security.identity.IdentityCredentialException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

// Base class headers
#include "../../../java/lang/Exception.hpp"

