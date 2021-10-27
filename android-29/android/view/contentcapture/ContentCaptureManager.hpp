#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::view::contentcapture
{
	class DataRemovalRequest;
}

namespace android::view::contentcapture
{
	class ContentCaptureManager : public __JniBaseClass
	{
	public:
		// Fields
		
		ContentCaptureManager(QAndroidJniObject obj);
		// Constructors
		ContentCaptureManager() = default;
		
		// Methods
		QAndroidJniObject getContentCaptureConditions();
		QAndroidJniObject getServiceComponentName();
		jboolean isContentCaptureEnabled();
		void removeData(android::view::contentcapture::DataRemovalRequest arg0);
		void setContentCaptureEnabled(jboolean arg0);
	};
} // namespace android::view::contentcapture

