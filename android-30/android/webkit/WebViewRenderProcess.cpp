#include "./WebViewRenderProcess.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	WebViewRenderProcess::WebViewRenderProcess()
		: JObject(
			"android.webkit.WebViewRenderProcess",
			"()V"
		) {}
	
	// Methods
	jboolean WebViewRenderProcess::terminate() const
	{
		return callMethod<jboolean>(
			"terminate",
			"()Z"
		);
	}
} // namespace android::webkit

