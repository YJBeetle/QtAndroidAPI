#include "./AudioManager_AudioRecordingCallback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback()
		: JObject(
			"android.media.AudioManager$AudioRecordingCallback",
			"()V"
		) {}
	
	// Methods
	void AudioManager_AudioRecordingCallback::onRecordingConfigChanged(JObject arg0)
	{
		callMethod<void>(
			"onRecordingConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

