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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentCaptureManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getContentCaptureConditions();
		QAndroidJniObject getServiceComponentName();
		jboolean isContentCaptureEnabled();
		void removeData(android::view::contentcapture::DataRemovalRequest arg0);
		void setContentCaptureEnabled(jboolean arg0);
	};
} // namespace android::view::contentcapture

