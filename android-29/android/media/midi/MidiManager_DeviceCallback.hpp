#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::midi
{
	class MidiDeviceInfo;
}
namespace android::media::midi
{
	class MidiDeviceStatus;
}

namespace android::media::midi
{
	class MidiManager_DeviceCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		MidiManager_DeviceCallback(QAndroidJniObject obj);
		// Constructors
		MidiManager_DeviceCallback();
		
		// Methods
		void onDeviceAdded(android::media::midi::MidiDeviceInfo arg0);
		void onDeviceRemoved(android::media::midi::MidiDeviceInfo arg0);
		void onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0);
	};
} // namespace android::media::midi

