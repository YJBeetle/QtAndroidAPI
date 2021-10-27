#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class SensorAdditionalInfo : public __JniBaseClass
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
		jfloatArray floatValues();
		jintArray intValues();
		QAndroidJniObject sensor();
		jint serial();
		jint type();
		
		SensorAdditionalInfo(QAndroidJniObject obj);
		// Constructors
		SensorAdditionalInfo() = default;
		
		// Methods
	};
} // namespace android::hardware

