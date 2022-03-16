#include "./WebView_VisualStateCallback.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	WebView_VisualStateCallback::WebView_VisualStateCallback()
		: JObject(
			"android.webkit.WebView$VisualStateCallback",
			"()V"
		) {}
	
	// Methods
	void WebView_VisualStateCallback::onComplete(jlong arg0) const
	{
		callMethod<void>(
			"onComplete",
			"(J)V",
			arg0
		);
	}
} // namespace android::webkit

