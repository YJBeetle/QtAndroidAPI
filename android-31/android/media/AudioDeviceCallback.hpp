#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioDeviceCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioDeviceCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioDeviceCallback(QJniObject obj);
		
		// Constructors
		AudioDeviceCallback();
		
		// Methods
		void onAudioDevicesAdded(jarray arg0);
		void onAudioDevicesRemoved(jarray arg0);
	};
} // namespace android::media

