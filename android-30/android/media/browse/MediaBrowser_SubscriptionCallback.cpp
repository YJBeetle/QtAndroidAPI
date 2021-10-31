#include "../../os/Bundle.hpp"
#include "./MediaBrowser_SubscriptionCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	// QAndroidJniObject forward
	MediaBrowser_SubscriptionCallback::MediaBrowser_SubscriptionCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaBrowser_SubscriptionCallback::MediaBrowser_SubscriptionCallback()
		: __JniBaseClass(
			"android.media.browse.MediaBrowser$SubscriptionCallback",
			"()V"
		) {}
	
	// Methods
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(jstring arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(jstring arg0)
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media::browse

