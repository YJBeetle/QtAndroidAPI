#pragma once

#include "../../JString.hpp"
#include "../../javax/security/auth/Subject.def.hpp"
#include "./AuthProvider.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AuthProvider::login(javax::security::auth::Subject arg0, JObject arg1) const
	{
		callMethod<void>(
			"login",
			"(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AuthProvider::logout() const
	{
		callMethod<void>(
			"logout",
			"()V"
		);
	}
	inline void AuthProvider::setCallbackHandler(JObject arg0) const
	{
		callMethod<void>(
			"setCallbackHandler",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object()
		);
	}
} // namespace java::security

// Base class headers
#include "../util/Dictionary.hpp"
#include "../util/Hashtable.hpp"
#include "../util/Properties.hpp"
#include "./Provider.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
