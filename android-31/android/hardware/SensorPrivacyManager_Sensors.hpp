#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class SensorPrivacyManager_Sensors : public JObject
	{
	public:
		// Fields
		static jint CAMERA();
		static jint MICROPHONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SensorPrivacyManager_Sensors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorPrivacyManager_Sensors(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::hardware

