#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UserPresenceUnavailableException.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	inline UserPresenceUnavailableException::UserPresenceUnavailableException()
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"()V"
		) {}
	inline UserPresenceUnavailableException::UserPresenceUnavailableException(JString arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline UserPresenceUnavailableException::UserPresenceUnavailableException(JString arg0, JThrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"

