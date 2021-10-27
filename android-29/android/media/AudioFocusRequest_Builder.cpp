#include "./AudioAttributes.hpp"
#include "./AudioFocusRequest.hpp"
#include "../os/Handler.hpp"
#include "./AudioFocusRequest_Builder.hpp"

namespace android::media
{
	// Fields
	
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(android::media::AudioFocusRequest &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFocusRequest$Builder",
			"(Landroid/media/AudioFocusRequest;)V",
			arg0.__jniObject().object()
		);
	}
	AudioFocusRequest_Builder::AudioFocusRequest_Builder(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFocusRequest$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject AudioFocusRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioFocusRequest;"
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setAcceptsDelayedFocusGain(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAcceptsDelayedFocusGain",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setFocusGain(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFocusGain",
			"(I)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setForceDucking(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setForceDucking",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setOnAudioFocusChangeListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnAudioFocusChangeListener",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setOnAudioFocusChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		return __thiz.callObjectMethod(
			"setOnAudioFocusChangeListener",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;Landroid/os/Handler;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setWillPauseWhenDucked(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setWillPauseWhenDucked",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
			arg0
		);
	}
} // namespace android::media

