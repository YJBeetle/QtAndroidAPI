#pragma once

#include "../../../java/security/InvalidKeyException.def.hpp"

class JString;
class JThrowable;

namespace android::security::keystore
{
	class UserPresenceUnavailableException : public java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserPresenceUnavailableException(const char *className, const char *sig, Ts...agv) : java::security::InvalidKeyException(className, sig, std::forward<Ts>(agv)...) {}
		UserPresenceUnavailableException(QAndroidJniObject obj) : java::security::InvalidKeyException(obj) {}
		
		// Constructors
		UserPresenceUnavailableException();
		UserPresenceUnavailableException(JString arg0);
		UserPresenceUnavailableException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

