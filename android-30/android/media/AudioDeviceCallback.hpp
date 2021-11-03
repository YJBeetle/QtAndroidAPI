#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class AudioDeviceCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioDeviceCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioDeviceCallback(QAndroidJniObject obj);
		
		// Constructors
		AudioDeviceCallback();
		
		// Methods
		void onAudioDevicesAdded(jarray arg0);
		void onAudioDevicesRemoved(jarray arg0);
	};
} // namespace android::media

