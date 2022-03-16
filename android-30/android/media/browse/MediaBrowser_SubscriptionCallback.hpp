#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser_SubscriptionCallback.def.hpp"

namespace android::media::browse
{
	// Fields
	
	// Constructors
	inline MediaBrowser_SubscriptionCallback::MediaBrowser_SubscriptionCallback()
		: JObject(
			"android.media.browse.MediaBrowser$SubscriptionCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaBrowser_SubscriptionCallback::onChildrenLoaded(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaBrowser_SubscriptionCallback::onChildrenLoaded(JString arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaBrowser_SubscriptionCallback::onError(JString arg0) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaBrowser_SubscriptionCallback::onError(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::browse

// Base class headers

