#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class NoAuthenticationKeyAvailableException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoAuthenticationKeyAvailableException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		NoAuthenticationKeyAvailableException(QAndroidJniObject obj);
		
		// Constructors
		NoAuthenticationKeyAvailableException(jstring arg0);
		NoAuthenticationKeyAvailableException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

