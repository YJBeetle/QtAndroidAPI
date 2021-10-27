#include "./AudioManager_AudioPlaybackCallback.hpp"

namespace android::media
{
	// Fields
	
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioManager$AudioPlaybackCallback",
			"()V"
		);
	}
	
	// Methods
	void AudioManager_AudioPlaybackCallback::onPlaybackConfigChanged(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPlaybackConfigChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

