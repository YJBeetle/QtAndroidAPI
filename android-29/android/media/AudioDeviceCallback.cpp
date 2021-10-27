#include "./AudioDeviceCallback.hpp"

namespace android::media
{
	// Fields
	
	AudioDeviceCallback::AudioDeviceCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioDeviceCallback::AudioDeviceCallback()
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
} // namespace android::media

