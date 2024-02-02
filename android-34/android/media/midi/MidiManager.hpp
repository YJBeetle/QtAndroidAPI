#pragma once

#include "../../../JArray.hpp"
#include "../../bluetooth/BluetoothDevice.def.hpp"
#include "./MidiDeviceInfo.def.hpp"
#include "./MidiManager_DeviceCallback.def.hpp"
#include "../../os/Handler.def.hpp"
#include "./MidiManager.def.hpp"

namespace android::media::midi
{
	// Fields
	inline jint MidiManager::TRANSPORT_MIDI_BYTE_STREAM()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiManager",
			"TRANSPORT_MIDI_BYTE_STREAM"
		);
	}
	inline jint MidiManager::TRANSPORT_UNIVERSAL_MIDI_PACKETS()
	{
		return getStaticField<jint>(
			"android.media.midi.MidiManager",
			"TRANSPORT_UNIVERSAL_MIDI_PACKETS"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray MidiManager::getDevices() const
	{
		return callObjectMethod(
			"getDevices",
			"()[Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	inline JObject MidiManager::getDevicesForTransport(jint arg0) const
	{
		return callObjectMethod(
			"getDevicesForTransport",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline void MidiManager::openBluetoothDevice(android::bluetooth::BluetoothDevice arg0, JObject arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"openBluetoothDevice",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/media/midi/MidiManager$OnDeviceOpenedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MidiManager::openDevice(android::media::midi::MidiDeviceInfo arg0, JObject arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"openDevice",
			"(Landroid/media/midi/MidiDeviceInfo;Landroid/media/midi/MidiManager$OnDeviceOpenedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MidiManager::registerDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerDeviceCallback",
			"(Landroid/media/midi/MidiManager$DeviceCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MidiManager::registerDeviceCallback(jint arg0, JObject arg1, android::media::midi::MidiManager_DeviceCallback arg2) const
	{
		callMethod<void>(
			"registerDeviceCallback",
			"(ILjava/util/concurrent/Executor;Landroid/media/midi/MidiManager$DeviceCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void MidiManager::unregisterDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0) const
	{
		callMethod<void>(
			"unregisterDeviceCallback",
			"(Landroid/media/midi/MidiManager$DeviceCallback;)V",
			arg0.object()
		);
	}
} // namespace android::media::midi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::midi;
#endif
