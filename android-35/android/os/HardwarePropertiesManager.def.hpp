#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JArray;

namespace android::os
{
	class HardwarePropertiesManager : public JObject
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
		template<typename ...Ts> explicit HardwarePropertiesManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HardwarePropertiesManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JArray getCpuUsages() const;
		JFloatArray getDeviceTemperatures(jint arg0, jint arg1) const;
		JFloatArray getFanSpeeds() const;
	};
} // namespace android::os

