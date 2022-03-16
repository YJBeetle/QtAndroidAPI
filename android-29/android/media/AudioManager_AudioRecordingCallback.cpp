#include "./AudioManager_AudioRecordingCallback.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback()
		: JObject(
			"android.media.AudioManager$AudioRecordingCallback",
			"()V"
		) {}
	
	// Methods
	void AudioManager_AudioRecordingCallback::onRecordingConfigChanged(JObject arg0) const
	{
		callMethod<void>(
			"onRecordingConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

