#pragma once

#include "../../JObject.hpp"


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
		static jstring STRING_TYPE_ACCELEROMETER();
		static jstring STRING_TYPE_ACCELEROMETER_UNCALIBRATED();
		static jstring STRING_TYPE_AMBIENT_TEMPERATURE();
		static jstring STRING_TYPE_GAME_ROTATION_VECTOR();
		static jstring STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR();
		static jstring STRING_TYPE_GRAVITY();
		static jstring STRING_TYPE_GYROSCOPE();
		static jstring STRING_TYPE_GYROSCOPE_UNCALIBRATED();
		static jstring STRING_TYPE_HEART_BEAT();
		static jstring STRING_TYPE_HEART_RATE();
		static jstring STRING_TYPE_HINGE_ANGLE();
		static jstring STRING_TYPE_LIGHT();
		static jstring STRING_TYPE_LINEAR_ACCELERATION();
		static jstring STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT();
		static jstring STRING_TYPE_MAGNETIC_FIELD();
		static jstring STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED();
		static jstring STRING_TYPE_MOTION_DETECT();
		static jstring STRING_TYPE_ORIENTATION();
		static jstring STRING_TYPE_POSE_6DOF();
		static jstring STRING_TYPE_PRESSURE();
		static jstring STRING_TYPE_PROXIMITY();
		static jstring STRING_TYPE_RELATIVE_HUMIDITY();
		static jstring STRING_TYPE_ROTATION_VECTOR();
		static jstring STRING_TYPE_SIGNIFICANT_MOTION();
		static jstring STRING_TYPE_STATIONARY_DETECT();
		static jstring STRING_TYPE_STEP_COUNTER();
		static jstring STRING_TYPE_STEP_DETECTOR();
		static jstring STRING_TYPE_TEMPERATURE();
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
		static jint TYPE_HINGE_ANGLE();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Sensor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Sensor(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getFifoMaxEventCount();
		jint getFifoReservedEventCount();
		jint getHighestDirectReportRateLevel();
		jint getId();
		jint getMaxDelay();
		jfloat getMaximumRange();
		jint getMinDelay();
		jstring getName();
		jfloat getPower();
		jint getReportingMode();
		jfloat getResolution();
		jstring getStringType();
		jint getType();
		jstring getVendor();
		jint getVersion();
		jboolean isAdditionalInfoSupported();
		jboolean isDirectChannelTypeSupported(jint arg0);
		jboolean isDynamicSensor();
		jboolean isWakeUpSensor();
		jstring toString();
	};
} // namespace android::hardware

