#pragma once

#include "./MediaBrowser_ConnectionCallback.def.hpp"

namespace android::media::browse
{
	// Fields
	
	// Constructors
	inline MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback()
		: JObject(
			"android.media.browse.MediaBrowser$ConnectionCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaBrowser_ConnectionCallback::onConnected() const
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	inline void MediaBrowser_ConnectionCallback::onConnectionFailed() const
	{
		callMethod<void>(
			"onConnectionFailed",
			"()V"
		);
	}
	inline void MediaBrowser_ConnectionCallback::onConnectionSuspended() const
	{
		callMethod<void>(
			"onConnectionSuspended",
			"()V"
		);
	}
} // namespace android::media::browse

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::browse;
#endif
