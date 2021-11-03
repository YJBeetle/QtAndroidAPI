#pragma once

#include "../../JObject.hpp"

class JArray;

namespace android::media
{
	class AudioDeviceCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioDeviceCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioDeviceCallback(QJniObject obj);
		
		// Constructors
		AudioDeviceCallback();
		
		// Methods
		void onAudioDevicesAdded(JArray arg0) const;
		void onAudioDevicesRemoved(JArray arg0) const;
	};
} // namespace android::media

