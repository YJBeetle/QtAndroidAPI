#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class SensorManager_DynamicSensorCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SensorManager_DynamicSensorCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorManager_DynamicSensorCallback(QAndroidJniObject obj);
		
		// Constructors
		SensorManager_DynamicSensorCallback();
		
		// Methods
		void onDynamicSensorConnected(android::hardware::Sensor arg0);
		void onDynamicSensorDisconnected(android::hardware::Sensor arg0);
	};
} // namespace android::hardware

