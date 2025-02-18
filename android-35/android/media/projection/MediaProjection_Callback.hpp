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
	inline void MediaProjection_Callback::onCapturedContentResize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onCapturedContentResize",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void MediaProjection_Callback::onCapturedContentVisibilityChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onCapturedContentVisibilityChanged",
			"(Z)V",
			arg0
		);
	}
	inline void MediaProjection_Callback::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::projection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::projection;
#endif
