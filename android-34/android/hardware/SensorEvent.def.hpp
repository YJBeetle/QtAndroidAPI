#pragma once

#include "../../JObject.hpp"

class JFloatArray;
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
		jboolean firstEventAfterDiscontinuity();
		android::hardware::Sensor sensor();
		jlong timestamp();
		JFloatArray values();
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorEvent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::hardware

