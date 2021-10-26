#pragma once

#ifndef ANDROID_MEDIA_AUDIOMANAGER_AUDIOPLAYBACKCALLBACK
#define ANDROID_MEDIA_AUDIOMANAGER_AUDIOPLAYBACKCALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class AudioManager_AudioPlaybackCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onPlaybackConfigChanged(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioManager_AudioPlaybackCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioManager$AudioPlaybackCallback",
			"()V"
		);
	}
	
	// Methods
	void AudioManager_AudioPlaybackCallback::onPlaybackConfigChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPlaybackConfigChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioManager_AudioPlaybackCallback : public __jni_impl::android::media::AudioManager_AudioPlaybackCallback
	{
	public:
		AudioManager_AudioPlaybackCallback(QAndroidJniObject obj) { __thiz = obj; }
		AudioManager_AudioPlaybackCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOMANAGER_AUDIOPLAYBACKCALLBACK

