#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class MessageDecryptionException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageDecryptionException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		MessageDecryptionException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		MessageDecryptionException(JString arg0);
		MessageDecryptionException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

