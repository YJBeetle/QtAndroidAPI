#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::service::media
{
	class MediaBrowserService_BrowserRoot : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_OFFLINE();
		static jstring EXTRA_RECENT();
		static jstring EXTRA_SUGGESTED();
		
		MediaBrowserService_BrowserRoot(QAndroidJniObject obj);
		// Constructors
		MediaBrowserService_BrowserRoot(jstring arg0, android::os::Bundle arg1);
		MediaBrowserService_BrowserRoot() = default;
		
		// Methods
		QAndroidJniObject getExtras();
		jstring getRootId();
	};
} // namespace android::service::media

