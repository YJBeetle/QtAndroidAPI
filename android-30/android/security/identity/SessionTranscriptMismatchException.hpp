#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class SessionTranscriptMismatchException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SessionTranscriptMismatchException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		SessionTranscriptMismatchException(QAndroidJniObject obj);
		
		// Constructors
		SessionTranscriptMismatchException(jstring arg0);
		SessionTranscriptMismatchException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

