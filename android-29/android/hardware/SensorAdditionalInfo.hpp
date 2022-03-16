#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;
namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class SensorAdditionalInfo : public JObject
	{
	public:
		// Fields
		static jint TYPE_FRAME_BEGIN();
		static jint TYPE_FRAME_END();
		static jint TYPE_INTERNAL_TEMPERATURE();
		static jint TYPE_SAMPLING();
		static jint TYPE_SENSOR_PLACEMENT();
		static jint TYPE_UNTRACKED_DELAY();
		static jint TYPE_VEC3_CALIBRATION();
		JFloatArray floatValues();
		JIntArray intValues();
		android::hardware::Sensor sensor();
		jint serial();
		jint type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SensorAdditionalInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorAdditionalInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::hardware

