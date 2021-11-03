#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class UnknownAuthenticationKeyException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnknownAuthenticationKeyException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownAuthenticationKeyException(QAndroidJniObject obj);
		
		// Constructors
		UnknownAuthenticationKeyException(jstring arg0);
		UnknownAuthenticationKeyException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

