#include "./AudioAttributes.hpp"
#include "../os/Handler.hpp"
#include "./AudioFocusRequest.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioFocusRequest::AudioFocusRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

