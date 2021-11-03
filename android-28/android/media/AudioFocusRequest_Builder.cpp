#include "./AudioAttributes.hpp"
#include "./AudioFocusRequest.hpp"
#include "../os/Handler.hpp"
#include "./AudioFocusRequest_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(android::media::AudioFocusRequest arg0)
		: JObject(
			"android.media.AudioFocusRequest$Builder",
			"(Landroid/media/AudioFocusRequest;)V",
			arg0.object()
		) {}
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(jint arg0)
		: JObject(
			"android.media.AudioFocusRequest$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::media::AudioFocusRequest AudioFocusRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioFocusRequest;"
		);
	}
	android::media::AudioFocusRequest_Builder AudioFocusRequest_Builder::setAcceptsDelayedFocusGain(jboolean arg0) const
	{
		return callObjectMethod(
			"setAcceptsDelayedFocusGain",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	android::media::AudioFocusRequest_Builder AudioFocusRequest_Builder::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		return callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.object()
		);
	}
	android::media::AudioFocusRequest_Builder AudioFocusRequest_Builder::setFocusGain(jint arg0) const
	{
		return callObjectMethod(
			"setFocusGain",
			"(I)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	android::media::AudioFocusRequest_Builder AudioFocusRequest_Builder::setForceDucking(jboolean arg0) const
	{
		return callObjectMethod(
			"setForceDucking",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	android::media::AudioFocusRequest_Builder AudioFocusRequest_Builder::setOnAudioFocusChangeListener(JObject arg0) const
	{
		return callObjectMethod(
			"setOnAudioFocusChangeListener",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.object()
		);
	}
	android::media::AudioFocusRequest_Builder AudioFocusRequest_Builder::setOnAudioFocusChangeListener(JObject arg0, android::os::Handler arg1) const
	{
		return callObjectMethod(
			"setOnAudioFocusChangeListener",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;Landroid/os/Handler;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::media::AudioFocusRequest_Builder AudioFocusRequest_Builder::setWillPauseWhenDucked(jboolean arg0) const
	{
		return callObjectMethod(
			"setWillPauseWhenDucked",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
} // namespace android::media

