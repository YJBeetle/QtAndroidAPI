#pragma once

#ifndef ANDROID_MEDIA_AUDIOFOCUSREQUEST_BUILDER
#define ANDROID_MEDIA_AUDIOFOCUSREQUEST_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioFocusRequest;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}

namespace __jni_impl::android::media
{
	class AudioFocusRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(__jni_impl::android::media::AudioFocusRequest arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setFocusGain(jint arg0);
		QAndroidJniObject setOnAudioFocusChangeListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setOnAudioFocusChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		QAndroidJniObject setWillPauseWhenDucked(jboolean arg0);
		QAndroidJniObject setAcceptsDelayedFocusGain(jboolean arg0);
		QAndroidJniObject setForceDucking(jboolean arg0);
		QAndroidJniObject setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
	};
} // namespace __jni_impl::android::media

#include "AudioFocusRequest.hpp"
#include "../os/Handler.hpp"
#include "AudioAttributes.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioFocusRequest_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFocusRequest$Builder",
			"(I)V",
			arg0);
	}
	void AudioFocusRequest_Builder::__constructor(__jni_impl::android::media::AudioFocusRequest arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFocusRequest$Builder",
			"(Landroid/media/AudioFocusRequest;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject AudioFocusRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/AudioFocusRequest;"
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
	QAndroidJniObject AudioFocusRequest_Builder::setOnAudioFocusChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnAudioFocusChangeListener",
			"(Landroid/media/AudioManager$OnAudioFocusChangeListener;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AudioFocusRequest_Builder::setOnAudioFocusChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
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
	QAndroidJniObject AudioFocusRequest_Builder::setAcceptsDelayedFocusGain(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAcceptsDelayedFocusGain",
			"(Z)Landroid/media/AudioFocusRequest$Builder;",
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
	QAndroidJniObject AudioFocusRequest_Builder::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)Landroid/media/AudioFocusRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioFocusRequest_Builder : public __jni_impl::android::media::AudioFocusRequest_Builder
	{
	public:
		AudioFocusRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AudioFocusRequest_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
		AudioFocusRequest_Builder(__jni_impl::android::media::AudioFocusRequest arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOFOCUSREQUEST_BUILDER

