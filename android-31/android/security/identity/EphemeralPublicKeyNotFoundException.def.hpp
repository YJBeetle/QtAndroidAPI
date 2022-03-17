#pragma once

#include "./IdentityCredentialException.def.hpp"

class JString;
class JThrowable;

namespace android::security::identity
{
	class EphemeralPublicKeyNotFoundException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EphemeralPublicKeyNotFoundException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		EphemeralPublicKeyNotFoundException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
		
		// Constructors
		EphemeralPublicKeyNotFoundException(JString arg0);
		EphemeralPublicKeyNotFoundException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

