#include "./AudioManager_AudioPlaybackCallback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback()
		: JObject(
			"android.media.AudioManager$AudioPlaybackCallback",
			"()V"
		) {}
	
	// Methods
	void AudioManager_AudioPlaybackCallback::onPlaybackConfigChanged(JObject arg0) const
	{
		callMethod<void>(
			"onPlaybackConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

