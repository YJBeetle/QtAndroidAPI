#pragma once

#include "./MediaBrowser_MediaItem.def.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser_ItemCallback.def.hpp"

namespace android::media::browse
{
	// Fields
	
	// Constructors
	inline MediaBrowser_ItemCallback::MediaBrowser_ItemCallback()
		: JObject(
			"android.media.browse.MediaBrowser$ItemCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaBrowser_ItemCallback::onError(JString arg0) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaBrowser_ItemCallback::onItemLoaded(android::media::browse::MediaBrowser_MediaItem arg0) const
	{
		callMethod<void>(
			"onItemLoaded",
			"(Landroid/media/browse/MediaBrowser$MediaItem;)V",
			arg0.object()
		);
	}
} // namespace android::media::browse

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::browse;
#endif
