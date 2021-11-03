#pragma once

#include "../../../JObject.hpp"

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
	class MidiManager_DeviceCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiManager_DeviceCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiManager_DeviceCallback(QAndroidJniObject obj);
		
		// Constructors
		MidiManager_DeviceCallback();
		
		// Methods
		void onDeviceAdded(android::media::midi::MidiDeviceInfo arg0);
		void onDeviceRemoved(android::media::midi::MidiDeviceInfo arg0);
		void onDeviceStatusChanged(android::media::midi::MidiDeviceStatus arg0);
	};
} // namespace android::media::midi

