#include "./RenderProcessGoneDetail.hpp"

namespace android::webkit
{
	// Fields
	
	RenderProcessGoneDetail::RenderProcessGoneDetail(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RenderProcessGoneDetail::RenderProcessGoneDetail()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.RenderProcessGoneDetail",
			"()V"
		);
	}
	
	// Methods
	jboolean RenderProcessGoneDetail::didCrash()
	{
		return __thiz.callMethod<jboolean>(
			"didCrash",
			"()Z"
		);
	}
	jint RenderProcessGoneDetail::rendererPriorityAtExit()
	{
		return __thiz.callMethod<jint>(
			"rendererPriorityAtExit",
			"()I"
		);
	}
} // namespace android::webkit

