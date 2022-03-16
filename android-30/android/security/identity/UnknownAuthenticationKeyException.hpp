#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class UnknownAuthenticationKeyException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnknownAuthenticationKeyException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownAuthenticationKeyException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		UnknownAuthenticationKeyException(JString arg0);
		UnknownAuthenticationKeyException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

