#include "../../content/LocusId.hpp"
#include "../../os/Bundle.hpp"
#include "./ContentCaptureContext.hpp"
#include "./ContentCaptureContext_Builder.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QJniObject forward
	ContentCaptureContext_Builder::ContentCaptureContext_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentCaptureContext_Builder::ContentCaptureContext_Builder(android::content::LocusId arg0)
		: JObject(
			"android.view.contentcapture.ContentCaptureContext$Builder",
			"(Landroid/content/LocusId;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::contentcapture::ContentCaptureContext ContentCaptureContext_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	android::view::contentcapture::ContentCaptureContext_Builder ContentCaptureContext_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/contentcapture/ContentCaptureContext$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::contentcapture

