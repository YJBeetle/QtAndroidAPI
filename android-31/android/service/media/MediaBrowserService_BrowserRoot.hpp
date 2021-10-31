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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowserService_BrowserRoot(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowserService_BrowserRoot(QJniObject obj);
		
		// Constructors
		MediaBrowserService_BrowserRoot(jstring arg0, android::os::Bundle arg1);
		
		// Methods
		android::os::Bundle getExtras();
		jstring getRootId();
	};
} // namespace android::service::media

