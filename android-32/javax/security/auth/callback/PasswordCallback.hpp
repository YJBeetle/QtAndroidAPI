#pragma once

#include "../../../../JCharArray.hpp"
#include "../../../../JString.hpp"
#include "./PasswordCallback.def.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	// Constructors
	inline PasswordCallback::PasswordCallback(JString arg0, jboolean arg1)
		: JObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline void PasswordCallback::clearPassword() const
	{
		callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	inline JCharArray PasswordCallback::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	inline JString PasswordCallback::getPrompt() const
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean PasswordCallback::isEchoOn() const
	{
		return callMethod<jboolean>(
			"isEchoOn",
			"()Z"
		);
	}
	inline void PasswordCallback::setPassword(JCharArray arg0) const
	{
		callMethod<void>(
			"setPassword",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
} // namespace javax::security::auth::callback

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::auth::callback;
#endif
