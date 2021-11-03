#include "./AudioDeviceCallback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioDeviceCallback::AudioDeviceCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioDeviceCallback::AudioDeviceCallback()
		: JObject(
			"android.media.AudioDeviceCallback",
			"()V"
		) {}
	
	// Methods
	void AudioDeviceCallback::onAudioDevicesAdded(jarray arg0)
	{
		callMethod<void>(
			"onAudioDevicesAdded",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0
		);
	}
	void AudioDeviceCallback::onAudioDevicesRemoved(jarray arg0)
	{
		callMethod<void>(
			"onAudioDevicesRemoved",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0
		);
	}
} // namespace android::media

