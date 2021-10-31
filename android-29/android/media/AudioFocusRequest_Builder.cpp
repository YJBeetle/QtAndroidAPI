#include "./AudioAttributes.hpp"
#include "./AudioFocusRequest.hpp"
#include "../os/Handler.hpp"
#include "./AudioFocusRequest_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(android::media::AudioFocusRequest arg0)
		: __JniBaseClass(
			"android.media.AudioFocusRequest$Builder",
			"(Landroid/media/AudioFocusRequest;)V",
			arg0.object()
		) {}
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(jint arg0)
		: __JniBaseClass(
			"android.media.AudioFocusRequest$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject AudioFocusRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioFocusRequest;"
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setAcceptsDelayedFocusGain(jboolean arg0)
	{
		return callObjectMethod(
			"setAcceptsDelayedFocusGain",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		return callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setFocusGain(jint arg0)
	{
		return callObjectMethod(
			"setFocusGain",
			"(I)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setForceDucking(jboolean arg0)
	{
		return callObjectMethod(
			"setForceDucking",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setOnAudioFocusChangeListener(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setOnAudioFocusChangeListener",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setOnAudioFocusChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		return callObjectMethod(
			"setOnAudioFocusChangeListener",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;Landroid/os/Handler;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setWillPauseWhenDucked(jboolean arg0)
	{
		return callObjectMethod(
			"setWillPauseWhenDucked",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
} // namespace android::media

