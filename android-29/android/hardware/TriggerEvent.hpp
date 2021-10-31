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
		android::hardware::Sensor sensor();
		jlong timestamp();
		jfloatArray values();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TriggerEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TriggerEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::hardware

