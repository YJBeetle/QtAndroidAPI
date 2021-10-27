#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class TriggerEvent : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject sensor();
		jlong timestamp();
		jfloatArray values();
		
		TriggerEvent(QAndroidJniObject obj);
		// Constructors
		TriggerEvent() = default;
		
		// Methods
	};
} // namespace android::hardware

