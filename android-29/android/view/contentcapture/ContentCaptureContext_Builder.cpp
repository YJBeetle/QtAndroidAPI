#include "../../content/LocusId.hpp"
#include "../../os/Bundle.hpp"
#include "./ContentCaptureContext.hpp"
#include "./ContentCaptureContext_Builder.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QAndroidJniObject forward
	ContentCaptureContext_Builder::ContentCaptureContext_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContentCaptureContext_Builder::ContentCaptureContext_Builder(android::content::LocusId arg0)
		: __JniBaseClass(
			"android.view.contentcapture.ContentCaptureContext$Builder",
			"(Landroid/content/LocusId;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject ContentCaptureContext_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	QAndroidJniObject ContentCaptureContext_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/contentcapture/ContentCaptureContext$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::contentcapture

