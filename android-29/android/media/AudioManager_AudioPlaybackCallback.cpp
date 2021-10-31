#include "./AudioManager_AudioPlaybackCallback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback()
		: __JniBaseClass(
			"android.media.AudioManager$AudioPlaybackCallback",
			"()V"
		) {}
	
	// Methods
	void AudioManager_AudioPlaybackCallback::onPlaybackConfigChanged(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onPlaybackConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

