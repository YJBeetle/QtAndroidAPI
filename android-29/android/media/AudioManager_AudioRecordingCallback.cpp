#include "./AudioManager_AudioRecordingCallback.hpp"

namespace android::media
{
	// Fields
	
	AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioManager_AudioRecordingCallback::AudioManager_AudioRecordingCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioManager$AudioRecordingCallback",
			"()V"
		);
	}
	
	// Methods
	void AudioManager_AudioRecordingCallback::onRecordingConfigChanged(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRecordingConfigChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

