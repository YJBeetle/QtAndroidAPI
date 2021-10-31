#include "./SessionTranscriptMismatchException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	SessionTranscriptMismatchException::SessionTranscriptMismatchException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	SessionTranscriptMismatchException::SessionTranscriptMismatchException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.SessionTranscriptMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SessionTranscriptMismatchException::SessionTranscriptMismatchException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.SessionTranscriptMismatchException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

