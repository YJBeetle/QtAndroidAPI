#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class MessageDecryptionException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MessageDecryptionException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		MessageDecryptionException(QJniObject obj);
		
		// Constructors
		MessageDecryptionException(jstring arg0);
		MessageDecryptionException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

