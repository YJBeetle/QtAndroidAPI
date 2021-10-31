#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class SensorManager_DynamicSensorCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SensorManager_DynamicSensorCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SensorManager_DynamicSensorCallback(QAndroidJniObject obj);
		
		// Constructors
		SensorManager_DynamicSensorCallback();
		
		// Methods
		void onDynamicSensorConnected(android::hardware::Sensor arg0);
		void onDynamicSensorDisconnected(android::hardware::Sensor arg0);
	};
} // namespace android::hardware

