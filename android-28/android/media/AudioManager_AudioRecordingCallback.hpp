#pragma once

#include "./AudioManager_AudioRecordingCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback()
		: JObject(
			"android.media.AudioManager$AudioRecordingCallback",
			"()V"
		) {}
	
	// Methods
	inline void AudioManager_AudioRecordingCallback::onRecordingConfigChanged(JObject arg0) const
	{
		callMethod<void>(
			"onRecordingConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
