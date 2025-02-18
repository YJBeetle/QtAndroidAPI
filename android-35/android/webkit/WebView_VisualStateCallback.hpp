#pragma once

#include "./WebView_VisualStateCallback.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebView_VisualStateCallback::WebView_VisualStateCallback()
		: JObject(
			"android.webkit.WebView$VisualStateCallback",
			"()V"
		) {}
	
	// Methods
	inline void WebView_VisualStateCallback::onComplete(jlong arg0) const
	{
		callMethod<void>(
			"onComplete",
			"(J)V",
			arg0
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
