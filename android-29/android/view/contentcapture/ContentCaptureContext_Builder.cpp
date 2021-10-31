#include "../../content/LocusId.hpp"
#include "../../os/Bundle.hpp"
#include "./ContentCaptureContext.hpp"
#include "./ContentCaptureContext_Builder.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	ContentCaptureContext_Builder::ContentCaptureContext_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentCaptureContext_Builder::ContentCaptureContext_Builder(android::content::LocusId arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.ContentCaptureContext$Builder",
			"(Landroid/content/LocusId;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ContentCaptureContext_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	QAndroidJniObject ContentCaptureContext_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/contentcapture/ContentCaptureContext$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::contentcapture

