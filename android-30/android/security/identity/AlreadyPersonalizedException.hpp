#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class AlreadyPersonalizedException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlreadyPersonalizedException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		AlreadyPersonalizedException(QJniObject obj);
		
		// Constructors
		AlreadyPersonalizedException(jstring arg0);
		AlreadyPersonalizedException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity

