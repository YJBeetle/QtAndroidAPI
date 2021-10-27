#include "./WebViewRenderProcess.hpp"

namespace android::webkit
{
	// Fields
	
	WebViewRenderProcess::WebViewRenderProcess(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebViewRenderProcess::WebViewRenderProcess()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewRenderProcess",
			"()V"
		);
	}
	
	// Methods
	jboolean WebViewRenderProcess::terminate()
	{
		return __thiz.callMethod<jboolean>(
			"terminate",
			"()Z"
		);
	}
} // namespace android::webkit

