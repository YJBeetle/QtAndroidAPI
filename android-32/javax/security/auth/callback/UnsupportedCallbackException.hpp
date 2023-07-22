#pragma once

#include "../../../../JString.hpp"
#include "./UnsupportedCallbackException.def.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	// Constructors
	inline UnsupportedCallbackException::UnsupportedCallbackException(JObject arg0)
		: java::lang::Exception(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;)V",
			arg0.object()
		) {}
	inline UnsupportedCallbackException::UnsupportedCallbackException(JObject arg0, JString arg1)
		: java::lang::Exception(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JObject UnsupportedCallbackException::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Ljavax/security/auth/callback/Callback;"
		);
	}
} // namespace javax::security::auth::callback

// Base class headers
#include "../../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::auth::callback;
#endif
