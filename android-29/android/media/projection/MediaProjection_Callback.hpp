#pragma once

#include "./MediaProjection_Callback.def.hpp"

namespace android::media::projection
{
	// Fields
	
	// Constructors
	inline MediaProjection_Callback::MediaProjection_Callback()
		: JObject(
			"android.media.projection.MediaProjection$Callback",
			"()V"
		) {}
	
	// Methods
	inline void MediaProjection_Callback::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::projection

// Base class headers

