#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Bundle;
}
namespace android::view::contentcapture
{
	class ContentCaptureContext;
}

namespace android::view::contentcapture
{
	class ContentCaptureContext_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureContext_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureContext_Builder(QJniObject obj);
		
		// Constructors
		ContentCaptureContext_Builder(android::content::LocusId arg0);
		
		// Methods
		android::view::contentcapture::ContentCaptureContext build() const;
		android::view::contentcapture::ContentCaptureContext_Builder setExtras(android::os::Bundle arg0) const;
	};
} // namespace android::view::contentcapture

