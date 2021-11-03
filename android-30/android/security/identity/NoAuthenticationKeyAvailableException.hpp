#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class NoAuthenticationKeyAvailableException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoAuthenticationKeyAvailableException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		NoAuthenticationKeyAvailableException(QJniObject obj);
		
		// Constructors
		NoAuthenticationKeyAvailableException(JString arg0);
		NoAuthenticationKeyAvailableException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

