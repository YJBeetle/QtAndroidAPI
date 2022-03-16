#pragma once

#include "./IdentityCredentialException.def.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class InvalidRequestMessageException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidRequestMessageException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidRequestMessageException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		InvalidRequestMessageException(JString arg0);
		InvalidRequestMessageException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

