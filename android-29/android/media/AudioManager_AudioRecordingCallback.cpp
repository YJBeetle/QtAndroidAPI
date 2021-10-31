#include "./AudioManager_AudioRecordingCallback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback()
		: __JniBaseClass(
			"android.media.AudioManager$AudioRecordingCallback",
			"()V"
		) {}
	
	// Methods
	void AudioManager_AudioRecordingCallback::onRecordingConfigChanged(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRecordingConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

