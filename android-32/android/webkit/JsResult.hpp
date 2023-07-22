#pragma once

#include "./JsResult.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void JsResult::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void JsResult::confirm() const
	{
		callMethod<void>(
			"confirm",
			"()V"
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
