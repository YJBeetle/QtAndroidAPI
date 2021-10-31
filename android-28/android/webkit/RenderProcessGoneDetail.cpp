#include "./RenderProcessGoneDetail.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	RenderProcessGoneDetail::RenderProcessGoneDetail(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RenderProcessGoneDetail::RenderProcessGoneDetail()
		: __JniBaseClass(
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

