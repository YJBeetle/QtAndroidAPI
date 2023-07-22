#pragma once

#include "../../JString.hpp"
#include "./JsPromptResult.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void JsPromptResult::confirm(JString arg0) const
	{
		callMethod<void>(
			"confirm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

// Base class headers
#include "./JsResult.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
