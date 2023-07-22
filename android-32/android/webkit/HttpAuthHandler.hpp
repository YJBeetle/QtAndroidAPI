#pragma once

#include "../../JString.hpp"
#include "./HttpAuthHandler.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void HttpAuthHandler::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void HttpAuthHandler::proceed(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"proceed",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean HttpAuthHandler::useHttpAuthUsernamePassword() const
	{
		return callMethod<jboolean>(
			"useHttpAuthUsernamePassword",
			"()Z"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../os/Handler.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
