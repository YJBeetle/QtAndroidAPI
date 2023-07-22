#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SessionTranscriptMismatchException.def.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	inline SessionTranscriptMismatchException::SessionTranscriptMismatchException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.SessionTranscriptMismatchException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SessionTranscriptMismatchException::SessionTranscriptMismatchException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.SessionTranscriptMismatchException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::identity;
#endif
