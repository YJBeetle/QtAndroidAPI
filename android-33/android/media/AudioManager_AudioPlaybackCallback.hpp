#pragma once

#include "./AudioManager_AudioPlaybackCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback()
		: JObject(
			"android.media.AudioManager$AudioPlaybackCallback",
			"()V"
		) {}
	
	// Methods
	inline void AudioManager_AudioPlaybackCallback::onPlaybackConfigChanged(JObject arg0) const
	{
		callMethod<void>(
			"onPlaybackConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
