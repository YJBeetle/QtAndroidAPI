#pragma once

#include "./MediaRouter2_RouteCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaRouter2_RouteCallback::MediaRouter2_RouteCallback()
		: JObject(
			"android.media.MediaRouter2$RouteCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaRouter2_RouteCallback::onRoutesAdded(JObject arg0) const
	{
		callMethod<void>(
			"onRoutesAdded",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void MediaRouter2_RouteCallback::onRoutesChanged(JObject arg0) const
	{
		callMethod<void>(
			"onRoutesChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void MediaRouter2_RouteCallback::onRoutesRemoved(JObject arg0) const
	{
		callMethod<void>(
			"onRoutesRemoved",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void MediaRouter2_RouteCallback::onRoutesUpdated(JObject arg0) const
	{
		callMethod<void>(
			"onRoutesUpdated",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
