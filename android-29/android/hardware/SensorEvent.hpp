#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class SensorEvent : public __JniBaseClass
	{
	public:
		// Fields
		jint accuracy();
		QAndroidJniObject sensor();
		jlong timestamp();
		jfloatArray values();
		
		SensorEvent(QAndroidJniObject obj);
		// Constructors
		SensorEvent() = default;
		
		// Methods
	};
} // namespace android::hardware

