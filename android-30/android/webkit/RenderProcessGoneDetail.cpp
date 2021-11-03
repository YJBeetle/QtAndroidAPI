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
	jboolean RenderProcessGoneDetail::didCrash() const
	{
		return callMethod<jboolean>(
			"didCrash",
			"()Z"
		);
	}
	jint RenderProcessGoneDetail::rendererPriorityAtExit() const
	{
		return callMethod<jint>(
			"rendererPriorityAtExit",
			"()I"
		);
	}
} // namespace android::webkit

