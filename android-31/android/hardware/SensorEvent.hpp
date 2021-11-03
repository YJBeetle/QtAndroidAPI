#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class SensorEvent : public JObject
	{
	public:
		// Fields
		jint accuracy();
		android::hardware::Sensor sensor();
		jlong timestamp();
		jfloatArray values();
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::hardware

