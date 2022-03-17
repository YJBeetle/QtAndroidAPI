#pragma once

#include "./AcousticEchoCanceler.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::audiofx::AcousticEchoCanceler AcousticEchoCanceler::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.AcousticEchoCanceler",
			"create",
			"(I)Landroid/media/audiofx/AcousticEchoCanceler;",
			arg0
		);
	}
	inline jboolean AcousticEchoCanceler::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.AcousticEchoCanceler",
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
