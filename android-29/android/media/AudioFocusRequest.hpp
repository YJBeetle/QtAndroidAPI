#pragma once

#ifndef ANDROID_MEDIA_AUDIOFOCUSREQUEST
#define ANDROID_MEDIA_AUDIOFOCUSREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::media
{
	class AudioFocusRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean acceptsDelayedFocusGain();
		QAndroidJniObject getAudioAttributes();
		jint getFocusGain();
		jboolean willPauseWhenDucked();
	};
} // namespace __jni_impl::android::media

#include "AudioAttributes.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioFocusRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFocusRequest",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioFocusRequest : public __jni_impl::android::media::AudioFocusRequest
	{
	public:
		AudioFocusRequest(QAndroidJniObject obj) { __thiz = obj; }
		AudioFocusRequest()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOFOCUSREQUEST

