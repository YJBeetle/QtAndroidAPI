#pragma once

#include "./MediaRouter_RouteInfo.def.hpp"
#include "./MediaRouter_VolumeCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaRouter_VolumeCallback::MediaRouter_VolumeCallback()
		: JObject(
			"android.media.MediaRouter$VolumeCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaRouter_VolumeCallback::onVolumeSetRequest(android::media::MediaRouter_RouteInfo arg0, jint arg1) const
	{
		callMethod<void>(
			"onVolumeSetRequest",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void MediaRouter_VolumeCallback::onVolumeUpdateRequest(android::media::MediaRouter_RouteInfo arg0, jint arg1) const
	{
		callMethod<void>(
			"onVolumeUpdateRequest",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
