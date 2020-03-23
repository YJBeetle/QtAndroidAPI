#pragma once

#ifndef ANDROID_MEDIA_AUDIOMANAGER_AUDIORECORDINGCALLBACK
#define ANDROID_MEDIA_AUDIOMANAGER_AUDIORECORDINGCALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class AudioManager_AudioRecordingCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onRecordingConfigChanged(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioManager_AudioRecordingCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioManager$AudioRecordingCallback",
			"()V");
	}
	
	// Methods
	void AudioManager_AudioRecordingCallback::onRecordingConfigChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRecordingConfigChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioManager_AudioRecordingCallback : public __jni_impl::android::media::AudioManager_AudioRecordingCallback
	{
	public:
		AudioManager_AudioRecordingCallback(QAndroidJniObject obj) { __thiz = obj; }
		AudioManager_AudioRecordingCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOMANAGER_AUDIORECORDINGCALLBACK

