#include "./RenderProcessGoneDetail.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	RenderProcessGoneDetail::RenderProcessGoneDetail(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RenderProcessGoneDetail::RenderProcessGoneDetail()
		: JObject(
			"android.webkit.RenderProcessGoneDetail",
			"()V"
		) {}
	
	// Methods
	jboolean RenderProcessGoneDetail::didCrash()
	{
		return callMethod<jboolean>(
			"didCrash",
			"()Z"
		);
	}
	jint RenderProcessGoneDetail::rendererPriorityAtExit()
	{
		return callMethod<jint>(
			"rendererPriorityAtExit",
			"()I"
		);
	}
} // namespace android::webkit

