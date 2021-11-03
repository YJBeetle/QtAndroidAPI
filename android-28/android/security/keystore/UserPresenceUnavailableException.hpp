#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace android::security::keystore
{
	class UserPresenceUnavailableException : public java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserPresenceUnavailableException(const char *className, const char *sig, Ts...agv) : java::security::InvalidKeyException(className, sig, std::forward<Ts>(agv)...) {}
		UserPresenceUnavailableException(QAndroidJniObject obj);
		
		// Constructors
		UserPresenceUnavailableException();
		UserPresenceUnavailableException(jstring arg0);
		UserPresenceUnavailableException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

