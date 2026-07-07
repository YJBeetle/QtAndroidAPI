#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class Sensor;
}
namespace android::hardware
{
	class SensorAdditionalInfo;
}
namespace android::hardware
{
	class SensorEvent;
}

namespace android::hardware
{
	class SensorEventCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorEventCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorEventCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SensorEventCallback();
		
		// Methods
		void onAccuracyChanged(android::hardware::Sensor arg0, jint arg1) const;
		void onFlushCompleted(android::hardware::Sensor arg0) const;
		void onSensorAdditionalInfo(android::hardware::SensorAdditionalInfo arg0) const;
		void onSensorChanged(android::hardware::SensorEvent arg0) const;
	};
} // namespace android::hardware

