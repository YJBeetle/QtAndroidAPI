#pragma once

#include "./AudioAttributes.def.hpp"
#include "./AudioFocusRequest.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AudioFocusRequest::acceptsDelayedFocusGain() const
	{
		return callMethod<jboolean>(
			"acceptsDelayedFocusGain",
			"()Z"
		);
	}
	inline android::media::AudioAttributes AudioFocusRequest::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	inline jint AudioFocusRequest::getFocusGain() const
	{
		return callMethod<jint>(
			"getFocusGain",
			"()I"
		);
	}
	inline jboolean AudioFocusRequest::willPauseWhenDucked() const
	{
		return callMethod<jboolean>(
			"willPauseWhenDucked",
			"()Z"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
