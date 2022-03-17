#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::hardware
{
	class Sensor : public JObject
	{
	public:
		// Fields
		static jint REPORTING_MODE_CONTINUOUS();
		static jint REPORTING_MODE_ONE_SHOT();
		static jint REPORTING_MODE_ON_CHANGE();
		static jint REPORTING_MODE_SPECIAL_TRIGGER();
		static JString STRING_TYPE_ACCELEROMETER();
		static JString STRING_TYPE_ACCELEROMETER_UNCALIBRATED();
		static JString STRING_TYPE_AMBIENT_TEMPERATURE();
		static JString STRING_TYPE_GAME_ROTATION_VECTOR();
		static JString STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR();
		static JString STRING_TYPE_GRAVITY();
		static JString STRING_TYPE_GYROSCOPE();
		static JString STRING_TYPE_GYROSCOPE_UNCALIBRATED();
		static JString STRING_TYPE_HEART_BEAT();
		static JString STRING_TYPE_HEART_RATE();
		static JString STRING_TYPE_LIGHT();
		static JString STRING_TYPE_LINEAR_ACCELERATION();
		static JString STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT();
		static JString STRING_TYPE_MAGNETIC_FIELD();
		static JString STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED();
		static JString STRING_TYPE_MOTION_DETECT();
		static JString STRING_TYPE_ORIENTATION();
		static JString STRING_TYPE_POSE_6DOF();
		static JString STRING_TYPE_PRESSURE();
		static JString STRING_TYPE_PROXIMITY();
		static JString STRING_TYPE_RELATIVE_HUMIDITY();
		static JString STRING_TYPE_ROTATION_VECTOR();
		static JString STRING_TYPE_SIGNIFICANT_MOTION();
		static JString STRING_TYPE_STATIONARY_DETECT();
		static JString STRING_TYPE_STEP_COUNTER();
		static JString STRING_TYPE_STEP_DETECTOR();
		static JString STRING_TYPE_TEMPERATURE();
		static jint TYPE_ACCELEROMETER();
		static jint TYPE_ACCELEROMETER_UNCALIBRATED();
		static jint TYPE_ALL();
		static jint TYPE_AMBIENT_TEMPERATURE();
		static jint TYPE_DEVICE_PRIVATE_BASE();
		static jint TYPE_GAME_ROTATION_VECTOR();
		static jint TYPE_GEOMAGNETIC_ROTATION_VECTOR();
		static jint TYPE_GRAVITY();
		static jint TYPE_GYROSCOPE();
		static jint TYPE_GYROSCOPE_UNCALIBRATED();
		static jint TYPE_HEART_BEAT();
		static jint TYPE_HEART_RATE();
		static jint TYPE_LIGHT();
		static jint TYPE_LINEAR_ACCELERATION();
		static jint TYPE_LOW_LATENCY_OFFBODY_DETECT();
		static jint TYPE_MAGNETIC_FIELD();
		static jint TYPE_MAGNETIC_FIELD_UNCALIBRATED();
		static jint TYPE_MOTION_DETECT();
		static jint TYPE_ORIENTATION();
		static jint TYPE_POSE_6DOF();
		static jint TYPE_PRESSURE();
		static jint TYPE_PROXIMITY();
		static jint TYPE_RELATIVE_HUMIDITY();
		static jint TYPE_ROTATION_VECTOR();
		static jint TYPE_SIGNIFICANT_MOTION();
		static jint TYPE_STATIONARY_DETECT();
		static jint TYPE_STEP_COUNTER();
		static jint TYPE_STEP_DETECTOR();
		static jint TYPE_TEMPERATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Sensor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Sensor(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getFifoMaxEventCount() const;
		jint getFifoReservedEventCount() const;
		jint getHighestDirectReportRateLevel() const;
		jint getId() const;
		jint getMaxDelay() const;
		jfloat getMaximumRange() const;
		jint getMinDelay() const;
		JString getName() const;
		jfloat getPower() const;
		jint getReportingMode() const;
		jfloat getResolution() const;
		JString getStringType() const;
		jint getType() const;
		JString getVendor() const;
		jint getVersion() const;
		jboolean isAdditionalInfoSupported() const;
		jboolean isDirectChannelTypeSupported(jint arg0) const;
		jboolean isDynamicSensor() const;
		jboolean isWakeUpSensor() const;
		JString toString() const;
	};
} // namespace android::hardware

