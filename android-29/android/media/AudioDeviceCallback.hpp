#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioDeviceCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioDeviceCallback(QAndroidJniObject obj);
		// Constructors
		AudioDeviceCallback();
		
		// Methods
		void onAudioDevicesAdded(jarray arg0);
		void onAudioDevicesRemoved(jarray arg0);
	};
} // namespace android::media

