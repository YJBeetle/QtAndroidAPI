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
	};
} // namespace android::view::contentcapture

