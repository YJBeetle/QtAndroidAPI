#include "../../JArray.hpp"
#include "./AudioDeviceCallback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioDeviceCallback::AudioDeviceCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioDeviceCallback::AudioDeviceCallback()
		: JObject(
			"android.media.AudioDeviceCallback",
			"()V"
		) {}
	
	// Methods
	void AudioDeviceCallback::onAudioDevicesAdded(JArray arg0) const
	{
		callMethod<void>(
			"onAudioDevicesAdded",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0.object<jarray>()
		);
	}
	void AudioDeviceCallback::onAudioDevicesRemoved(JArray arg0) const
	{
		callMethod<void>(
			"onAudioDevicesRemoved",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::media

