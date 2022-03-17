#pragma once

#include "./MediaRouter2_RoutingController.def.hpp"
#include "./MediaRouter2_ControllerCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaRouter2_ControllerCallback::MediaRouter2_ControllerCallback()
		: JObject(
			"android.media.MediaRouter2$ControllerCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaRouter2_ControllerCallback::onControllerUpdated(android::media::MediaRouter2_RoutingController arg0) const
	{
		callMethod<void>(
			"onControllerUpdated",
			"(Landroid/media/MediaRouter2$RoutingController;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

