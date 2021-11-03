#include "./AudioAttributes.hpp"
#include "./AudioFocusRequest.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioFocusRequest::AudioFocusRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AudioFocusRequest::acceptsDelayedFocusGain()
	{
		return callMethod<jboolean>(
			"acceptsDelayedFocusGain",
			"()Z"
		);
	}
	android::media::AudioAttributes AudioFocusRequest::getAudioAttributes()
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint AudioFocusRequest::getFocusGain()
	{
		return callMethod<jint>(
			"getFocusGain",
			"()I"
		);
	}
	jboolean AudioFocusRequest::willPauseWhenDucked()
	{
		return callMethod<jboolean>(
			"willPauseWhenDucked",
			"()Z"
		);
	}
} // namespace android::media

