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
		android::hardware::Sensor sensor();
		jlong timestamp();
		jfloatArray values();
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SensorEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::hardware

