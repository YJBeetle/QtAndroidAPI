#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ContentCaptureContext_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ContentCaptureContext_Builder(QAndroidJniObject obj);
		// Constructors
		ContentCaptureContext_Builder(android::content::LocusId arg0);
		ContentCaptureContext_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::contentcapture

