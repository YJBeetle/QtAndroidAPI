#pragma once

#include "../../JByteArray.hpp"
#include "../content/Context.def.hpp"
#include "./ConfirmationCallback.def.hpp"
#include "../../JString.hpp"
#include "./ConfirmationPrompt.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ConfirmationPrompt::isSupported(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.ConfirmationPrompt",
			"isSupported",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline void ConfirmationPrompt::cancelPrompt() const
	{
		callMethod<void>(
			"cancelPrompt",
			"()V"
		);
	}
	inline void ConfirmationPrompt::presentPrompt(JObject arg0, android::security::ConfirmationCallback arg1) const
	{
		callMethod<void>(
			"presentPrompt",
			"(Ljava/util/concurrent/Executor;Landroid/security/ConfirmationCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
