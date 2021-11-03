#include "./WebViewRenderProcess.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebViewRenderProcess::WebViewRenderProcess(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebViewRenderProcess::WebViewRenderProcess()
		: JObject(
			"android.webkit.WebViewRenderProcess",
			"()V"
		) {}
	
	// Methods
	jboolean WebViewRenderProcess::terminate()
	{
		return callMethod<jboolean>(
			"terminate",
			"()Z"
		);
	}
} // namespace android::webkit

