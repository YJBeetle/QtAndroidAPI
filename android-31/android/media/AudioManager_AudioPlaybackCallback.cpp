#include "./AudioManager_AudioPlaybackCallback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioManager_AudioPlaybackCallback::AudioManager_AudioPlaybackCallback()
		: JObject(
			"android.media.AudioManager$AudioPlaybackCallback",
			"()V"
		) {}
	
	// Methods
	void AudioManager_AudioPlaybackCallback::onPlaybackConfigChanged(JObject arg0)
	{
		callMethod<void>(
			"onPlaybackConfigChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

