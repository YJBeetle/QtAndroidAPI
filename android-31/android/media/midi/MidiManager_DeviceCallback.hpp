#pragma once

#include "./MidiDeviceInfo.def.hpp"
#include "./MidiDeviceStatus.def.hpp"
#include "./MidiManager_DeviceCallback.def.hpp"

namespace android::media::midi
{
	// Fields
	
	// Constructors
	inline MidiManager_DeviceCallback::MidiManager_DeviceCallback()
		: JObject(
			"android.media.midi.MidiManager$DeviceCallback",
			"()V"
		) {}
	
	// Methods
	inline void MidiManager_DeviceCallback::onDeviceAdded(android::media::midi::MidiDeviceInfo arg0) const
	{
		callMethod<void>(
			"onDeviceAdded",
			"(Landroid/media/midi/MidiDeviceInfo;)V",
			arg0.object()
		);
	}
	inline void MidiManager_DeviceCallback::onDeviceRemoved(android::media::midi::MidiDeviceInfo arg0) const
	{
		callMethod<void>(
			"onDeviceRemoved",
			"(Landroid/media/midi/MidiDeviceInfo;)V",
			arg0.object()
		);
	}
	inline void MidiManager_DeviceCallback::onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0) const
	{
		callMethod<void>(
			"onDeviceStatusChanged",
			"(Landroid/media/midi/MidiDeviceStatus;)V",
			arg0.object()
		);
	}
} // namespace android::media::midi

// Base class headers

