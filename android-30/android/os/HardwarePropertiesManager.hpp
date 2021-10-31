#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class HardwarePropertiesManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEVICE_TEMPERATURE_BATTERY();
		static jint DEVICE_TEMPERATURE_CPU();
		static jint DEVICE_TEMPERATURE_GPU();
		static jint DEVICE_TEMPERATURE_SKIN();
		static jint TEMPERATURE_CURRENT();
		static jint TEMPERATURE_SHUTDOWN();
		static jint TEMPERATURE_THROTTLING();
		static jint TEMPERATURE_THROTTLING_BELOW_VR_MIN();
		static jfloat UNDEFINED_TEMPERATURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit HardwarePropertiesManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HardwarePropertiesManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getCpuUsages();
		jfloatArray getDeviceTemperatures(jint arg0, jint arg1);
		jfloatArray getFanSpeeds();
	};
} // namespace android::os

