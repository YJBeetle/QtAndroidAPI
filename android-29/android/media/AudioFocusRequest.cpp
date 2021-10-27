#include "./AudioAttributes.hpp"
#include "../os/Handler.hpp"
#include "./AudioFocusRequest.hpp"

namespace android::media
{
	// Fields
	
	AudioFocusRequest::AudioFocusRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean AudioFocusRequest::acceptsDelayedFocusGain()
	{
		return __thiz.callMethod<jboolean>(
			"acceptsDelayedFocusGain",
			"()Z"
		);
	}
	QAndroidJniObject AudioFocusRequest::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint AudioFocusRequest::getFocusGain()
	{
		return __thiz.callMethod<jint>(
			"getFocusGain",
			"()I"
		);
	}
	jboolean AudioFocusRequest::willPauseWhenDucked()
	{
		return __thiz.callMethod<jboolean>(
			"willPauseWhenDucked",
			"()Z"
		);
	}
} // namespace android::media

