#include "./WebViewRenderProcess.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebViewRenderProcess::WebViewRenderProcess(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebViewRenderProcess::WebViewRenderProcess()
		: __JniBaseClass(
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

