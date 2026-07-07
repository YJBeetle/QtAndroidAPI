#pragma once

#include "../../content/LocusId.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./ContentCaptureContext.def.hpp"
#include "./ContentCaptureContext_Builder.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// Constructors
	inline ContentCaptureContext_Builder::ContentCaptureContext_Builder(android::content::LocusId arg0)
		: JObject(
			"android.view.contentcapture.ContentCaptureContext$Builder",
			"(Landroid/content/LocusId;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::contentcapture::ContentCaptureContext ContentCaptureContext_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	inline android::view::contentcapture::ContentCaptureContext_Builder ContentCaptureContext_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/contentcapture/ContentCaptureContext$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::contentcapture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::contentcapture;
#endif
