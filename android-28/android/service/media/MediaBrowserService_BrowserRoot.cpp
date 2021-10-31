#include "../../os/Bundle.hpp"
#include "./MediaBrowserService_BrowserRoot.hpp"

namespace android::service::media
{
	// Fields
	jstring MediaBrowserService_BrowserRoot::EXTRA_OFFLINE()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_OFFLINE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaBrowserService_BrowserRoot::EXTRA_RECENT()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_RECENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaBrowserService_BrowserRoot::EXTRA_SUGGESTED()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_SUGGESTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaBrowserService_BrowserRoot::MediaBrowserService_BrowserRoot(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaBrowserService_BrowserRoot::MediaBrowserService_BrowserRoot(jstring arg0, android::os::Bundle arg1)
		: __JniBaseClass(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	android::os::Bundle MediaBrowserService_BrowserRoot::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring MediaBrowserService_BrowserRoot::getRootId()
	{
		return callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::media

