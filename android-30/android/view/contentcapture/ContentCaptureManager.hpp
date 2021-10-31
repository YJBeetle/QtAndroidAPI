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
	class DataShareRequest;
}

namespace android::view::contentcapture
{
	class ContentCaptureManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint DATA_SHARE_ERROR_CONCURRENT_REQUEST();
		static jint DATA_SHARE_ERROR_TIMEOUT_INTERRUPTED();
		static jint DATA_SHARE_ERROR_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getContentCaptureConditions();
		android::content::ComponentName getServiceComponentName();
		jboolean isContentCaptureEnabled();
		void removeData(android::view::contentcapture::DataRemovalRequest arg0);
		void setContentCaptureEnabled(jboolean arg0);
		void shareData(android::view::contentcapture::DataShareRequest arg0, __JniBaseClass arg1, __JniBaseClass arg2);
	};
} // namespace android::view::contentcapture

