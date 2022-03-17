#pragma once

#include "../../JArray.hpp"
#include "./AudioDeviceCallback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioDeviceCallback::AudioDeviceCallback()
		: JObject(
			"android.media.AudioDeviceCallback",
			"()V"
		) {}
	
	// Methods
	inline void AudioDeviceCallback::onAudioDevicesAdded(JArray arg0) const
	{
		callMethod<void>(
			"onAudioDevicesAdded",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0.object<jarray>()
		);
	}
	inline void AudioDeviceCallback::onAudioDevicesRemoved(JArray arg0) const
	{
		callMethod<void>(
			"onAudioDevicesRemoved",
			"([Landroid/media/AudioDeviceInfo;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::media

// Base class headers

