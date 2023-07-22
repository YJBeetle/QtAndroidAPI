#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::media::midi
{
	class MidiDeviceInfo;
}
namespace android::media::midi
{
	class MidiManager_DeviceCallback;
}
namespace android::os
{
	class Handler;
}

namespace android::media::midi
{
	class MidiManager : public JObject
	{
	public:
		// Fields
		static jint TRANSPORT_MIDI_BYTE_STREAM();
		static jint TRANSPORT_UNIVERSAL_MIDI_PACKETS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JArray getDevices() const;
		JObject getDevicesForTransport(jint arg0) const;
		void openBluetoothDevice(android::bluetooth::BluetoothDevice arg0, JObject arg1, android::os::Handler arg2) const;
		void openDevice(android::media::midi::MidiDeviceInfo arg0, JObject arg1, android::os::Handler arg2) const;
		void registerDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0, android::os::Handler arg1) const;
		void registerDeviceCallback(jint arg0, JObject arg1, android::media::midi::MidiManager_DeviceCallback arg2) const;
		void unregisterDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0) const;
	};
} // namespace android::media::midi

