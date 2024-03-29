#pragma once

#include "./NoiseSuppressor.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::audiofx::NoiseSuppressor NoiseSuppressor::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.NoiseSuppressor",
			"create",
			"(I)Landroid/media/audiofx/NoiseSuppressor;",
			arg0
		);
	}
	inline jboolean NoiseSuppressor::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.NoiseSuppressor",
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
