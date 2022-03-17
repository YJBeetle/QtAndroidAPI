#pragma once

#include "./AutomaticGainControl.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::audiofx::AutomaticGainControl AutomaticGainControl::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.AutomaticGainControl",
			"create",
			"(I)Landroid/media/audiofx/AutomaticGainControl;",
			arg0
		);
	}
	inline jboolean AutomaticGainControl::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.AutomaticGainControl",
			"isAvailable",
			"()Z"
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./AudioEffect.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
