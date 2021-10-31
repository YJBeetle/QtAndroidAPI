#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class MidiManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MidiManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getDevices();
		void openBluetoothDevice(android::bluetooth::BluetoothDevice arg0, __JniBaseClass arg1, android::os::Handler arg2);
		void openDevice(android::media::midi::MidiDeviceInfo arg0, __JniBaseClass arg1, android::os::Handler arg2);
		void registerDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0, android::os::Handler arg1);
		void unregisterDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0);
	};
} // namespace android::media::midi

