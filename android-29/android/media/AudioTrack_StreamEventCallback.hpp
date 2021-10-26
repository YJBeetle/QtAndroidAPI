#pragma once

#ifndef ANDROID_MEDIA_AUDIOTRACK_STREAMEVENTCALLBACK
#define ANDROID_MEDIA_AUDIOTRACK_STREAMEVENTCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioTrack;
}

namespace __jni_impl::android::media
{
	class AudioTrack_StreamEventCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onPresentationEnded(__jni_impl::android::media::AudioTrack arg0);
		void onDataRequest(__jni_impl::android::media::AudioTrack arg0, jint arg1);
		void onTearDown(__jni_impl::android::media::AudioTrack arg0);
	};
} // namespace __jni_impl::android::media

#include "AudioTrack.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioTrack_StreamEventCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack$StreamEventCallback",
			"()V"
		);
	}
	
	// Methods
	void AudioTrack_StreamEventCallback::onPresentationEnded(__jni_impl::android::media::AudioTrack arg0)
	{
		__thiz.callMethod<void>(
			"onPresentationEnded",
			"(Landroid/media/AudioTrack;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioTrack_StreamEventCallback::onDataRequest(__jni_impl::android::media::AudioTrack arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onDataRequest",
			"(Landroid/media/AudioTrack;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AudioTrack_StreamEventCallback::onTearDown(__jni_impl::android::media::AudioTrack arg0)
	{
		__thiz.callMethod<void>(
			"onTearDown",
			"(Landroid/media/AudioTrack;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioTrack_StreamEventCallback : public __jni_impl::android::media::AudioTrack_StreamEventCallback
	{
	public:
		AudioTrack_StreamEventCallback(QAndroidJniObject obj) { __thiz = obj; }
		AudioTrack_StreamEventCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOTRACK_STREAMEVENTCALLBACK

