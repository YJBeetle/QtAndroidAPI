#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvalidReaderSignatureException.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	inline InvalidReaderSignatureException::InvalidReaderSignatureException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidReaderSignatureException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidReaderSignatureException::InvalidReaderSignatureException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidReaderSignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"

