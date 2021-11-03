#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class SessionTranscriptMismatchException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SessionTranscriptMismatchException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		SessionTranscriptMismatchException(QJniObject obj);
		
		// Constructors
		SessionTranscriptMismatchException(JString arg0);
		SessionTranscriptMismatchException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

