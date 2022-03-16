#pragma once

#include "./IdentityCredentialException.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class AlreadyPersonalizedException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlreadyPersonalizedException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		AlreadyPersonalizedException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		AlreadyPersonalizedException(JString arg0);
		AlreadyPersonalizedException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

