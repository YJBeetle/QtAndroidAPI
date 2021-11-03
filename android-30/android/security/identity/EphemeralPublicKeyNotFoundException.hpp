#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class EphemeralPublicKeyNotFoundException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EphemeralPublicKeyNotFoundException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		EphemeralPublicKeyNotFoundException(QJniObject obj);
		
		// Constructors
		EphemeralPublicKeyNotFoundException(jstring arg0);
		EphemeralPublicKeyNotFoundException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

