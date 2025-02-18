#pragma once

#include "./KeyStore_CallbackHandlerProtection.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(JObject arg0)
		: JObject(
			"java.security.KeyStore$CallbackHandlerProtection",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject KeyStore_CallbackHandlerProtection::getCallbackHandler() const
	{
		return callObjectMethod(
			"getCallbackHandler",
			"()Ljavax/security/auth/callback/CallbackHandler;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
