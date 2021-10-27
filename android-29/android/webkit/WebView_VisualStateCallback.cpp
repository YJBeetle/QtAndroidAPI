#include "./WebView_VisualStateCallback.hpp"

namespace android::webkit
{
	// Fields
	
	WebView_VisualStateCallback::WebView_VisualStateCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebView_VisualStateCallback::WebView_VisualStateCallback()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView$VisualStateCallback",
			"()V"
		);
	}
	
	// Methods
	void WebView_VisualStateCallback::onComplete(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onComplete",
			"(J)V",
			arg0
		);
	}
} // namespace android::webkit

