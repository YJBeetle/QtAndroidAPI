#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class AudioDeviceCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAudioDevicesAdded(jarray arg0);
		void onAudioDevicesRemoved(jarray arg0);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioDeviceCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioDeviceCallback",
			"()V"
		);
	}
	
	// Methods
	void AudioDeviceCallback::onAudioDevicesAdded(jarray arg0)
	{
		__thiz.callMethod<void>(
			"onAudioDevicesAdded",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0
		);
	}
	void AudioDeviceCallback::onAudioDevicesRemoved(jarray arg0)
	{
		__thiz.callMethod<void>(
			"onAudioDevicesRemoved",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioDeviceCallback : public __jni_impl::android::media::AudioDeviceCallback
	{
	public:
		AudioDeviceCallback(QAndroidJniObject obj) { __thiz = obj; }
		AudioDeviceCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

