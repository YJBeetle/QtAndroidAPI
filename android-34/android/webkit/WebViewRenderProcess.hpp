#pragma once

#include "./WebViewRenderProcess.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebViewRenderProcess::WebViewRenderProcess()
		: JObject(
			"android.webkit.WebViewRenderProcess",
			"()V"
		) {}
	
	// Methods
	inline jboolean WebViewRenderProcess::terminate() const
	{
		return callMethod<jboolean>(
			"terminate",
			"()Z"
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
