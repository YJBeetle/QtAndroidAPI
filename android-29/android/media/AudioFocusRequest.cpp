#include "./AudioAttributes.hpp"
#include "../os/Handler.hpp"
#include "./AudioFocusRequest.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioFocusRequest::AudioFocusRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioFocusRequest::acceptsDelayedFocusGain() const
	{
		return callMethod<jboolean>(
			"acceptsDelayedFocusGain",
			"()Z"
		);
	}
	android::media::AudioAttributes AudioFocusRequest::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint AudioFocusRequest::getFocusGain() const
	{
		return callMethod<jint>(
			"getFocusGain",
			"()I"
		);
	}
	jboolean AudioFocusRequest::willPauseWhenDucked() const
	{
		return callMethod<jboolean>(
			"willPauseWhenDucked",
			"()Z"
		);
	}
} // namespace android::media

