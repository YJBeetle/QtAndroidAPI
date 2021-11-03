#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser_SubscriptionCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	// QJniObject forward
	MediaBrowser_SubscriptionCallback::MediaBrowser_SubscriptionCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaBrowser_SubscriptionCallback::MediaBrowser_SubscriptionCallback()
		: JObject(
			"android.media.browse.MediaBrowser$SubscriptionCallback",
			"()V"
		) {}
	
	// Methods
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(JString arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(JString arg0) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::browse

