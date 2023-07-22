#pragma once

#include "../../JString.hpp"
#include "./Sensor.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint Sensor::REPORTING_MODE_CONTINUOUS()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_CONTINUOUS"
		);
	}
	inline jint Sensor::REPORTING_MODE_ONE_SHOT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_ONE_SHOT"
		);
	}
	inline jint Sensor::REPORTING_MODE_ON_CHANGE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_ON_CHANGE"
		);
	}
	inline jint Sensor::REPORTING_MODE_SPECIAL_TRIGGER()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_SPECIAL_TRIGGER"
		);
	}
	inline JString Sensor::STRING_TYPE_ACCELEROMETER()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ACCELEROMETER",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_ACCELEROMETER_UNCALIBRATED()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ACCELEROMETER_UNCALIBRATED",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_AMBIENT_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_AMBIENT_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_GAME_ROTATION_VECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GAME_ROTATION_VECTOR",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_GRAVITY()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GRAVITY",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_GYROSCOPE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GYROSCOPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_GYROSCOPE_UNCALIBRATED()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GYROSCOPE_UNCALIBRATED",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_HEART_BEAT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_HEART_BEAT",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_HEART_RATE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_HEART_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_HINGE_ANGLE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_HINGE_ANGLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_LIGHT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_LINEAR_ACCELERATION()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LINEAR_ACCELERATION",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_MAGNETIC_FIELD()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MAGNETIC_FIELD",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_MOTION_DETECT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MOTION_DETECT",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_ORIENTATION()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ORIENTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_POSE_6DOF()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_POSE_6DOF",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_PRESSURE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_PRESSURE",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_PROXIMITY()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_PROXIMITY",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_RELATIVE_HUMIDITY()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_RELATIVE_HUMIDITY",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_ROTATION_VECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ROTATION_VECTOR",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_SIGNIFICANT_MOTION()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_SIGNIFICANT_MOTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_STATIONARY_DETECT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STATIONARY_DETECT",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_STEP_COUNTER()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STEP_COUNTER",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_STEP_DETECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STEP_DETECTOR",
			"Ljava/lang/String;"
		);
	}
	inline JString Sensor::STRING_TYPE_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline jint Sensor::TYPE_ACCELEROMETER()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ACCELEROMETER"
		);
	}
	inline jint Sensor::TYPE_ACCELEROMETER_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ACCELEROMETER_UNCALIBRATED"
		);
	}
	inline jint Sensor::TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ALL"
		);
	}
	inline jint Sensor::TYPE_AMBIENT_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_AMBIENT_TEMPERATURE"
		);
	}
	inline jint Sensor::TYPE_DEVICE_PRIVATE_BASE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_DEVICE_PRIVATE_BASE"
		);
	}
	inline jint Sensor::TYPE_GAME_ROTATION_VECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GAME_ROTATION_VECTOR"
		);
	}
	inline jint Sensor::TYPE_GEOMAGNETIC_ROTATION_VECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GEOMAGNETIC_ROTATION_VECTOR"
		);
	}
	inline jint Sensor::TYPE_GRAVITY()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GRAVITY"
		);
	}
	inline jint Sensor::TYPE_GYROSCOPE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GYROSCOPE"
		);
	}
	inline jint Sensor::TYPE_GYROSCOPE_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GYROSCOPE_UNCALIBRATED"
		);
	}
	inline jint Sensor::TYPE_HEART_BEAT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_HEART_BEAT"
		);
	}
	inline jint Sensor::TYPE_HEART_RATE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_HEART_RATE"
		);
	}
	inline jint Sensor::TYPE_HINGE_ANGLE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_HINGE_ANGLE"
		);
	}
	inline jint Sensor::TYPE_LIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LIGHT"
		);
	}
	inline jint Sensor::TYPE_LINEAR_ACCELERATION()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LINEAR_ACCELERATION"
		);
	}
	inline jint Sensor::TYPE_LOW_LATENCY_OFFBODY_DETECT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LOW_LATENCY_OFFBODY_DETECT"
		);
	}
	inline jint Sensor::TYPE_MAGNETIC_FIELD()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MAGNETIC_FIELD"
		);
	}
	inline jint Sensor::TYPE_MAGNETIC_FIELD_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MAGNETIC_FIELD_UNCALIBRATED"
		);
	}
	inline jint Sensor::TYPE_MOTION_DETECT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MOTION_DETECT"
		);
	}
	inline jint Sensor::TYPE_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ORIENTATION"
		);
	}
	inline jint Sensor::TYPE_POSE_6DOF()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_POSE_6DOF"
		);
	}
	inline jint Sensor::TYPE_PRESSURE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_PRESSURE"
		);
	}
	inline jint Sensor::TYPE_PROXIMITY()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_PROXIMITY"
		);
	}
	inline jint Sensor::TYPE_RELATIVE_HUMIDITY()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_RELATIVE_HUMIDITY"
		);
	}
	inline jint Sensor::TYPE_ROTATION_VECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ROTATION_VECTOR"
		);
	}
	inline jint Sensor::TYPE_SIGNIFICANT_MOTION()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_SIGNIFICANT_MOTION"
		);
	}
	inline jint Sensor::TYPE_STATIONARY_DETECT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STATIONARY_DETECT"
		);
	}
	inline jint Sensor::TYPE_STEP_COUNTER()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STEP_COUNTER"
		);
	}
	inline jint Sensor::TYPE_STEP_DETECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STEP_DETECTOR"
		);
	}
	inline jint Sensor::TYPE_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_TEMPERATURE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Sensor::getFifoMaxEventCount() const
	{
		return callMethod<jint>(
			"getFifoMaxEventCount",
			"()I"
		);
	}
	inline jint Sensor::getFifoReservedEventCount() const
	{
		return callMethod<jint>(
			"getFifoReservedEventCount",
			"()I"
		);
	}
	inline jint Sensor::getHighestDirectReportRateLevel() const
	{
		return callMethod<jint>(
			"getHighestDirectReportRateLevel",
			"()I"
		);
	}
	inline jint Sensor::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint Sensor::getMaxDelay() const
	{
		return callMethod<jint>(
			"getMaxDelay",
			"()I"
		);
	}
	inline jfloat Sensor::getMaximumRange() const
	{
		return callMethod<jfloat>(
			"getMaximumRange",
			"()F"
		);
	}
	inline jint Sensor::getMinDelay() const
	{
		return callMethod<jint>(
			"getMinDelay",
			"()I"
		);
	}
	inline JString Sensor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat Sensor::getPower() const
	{
		return callMethod<jfloat>(
			"getPower",
			"()F"
		);
	}
	inline jint Sensor::getReportingMode() const
	{
		return callMethod<jint>(
			"getReportingMode",
			"()I"
		);
	}
	inline jfloat Sensor::getResolution() const
	{
		return callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	inline JString Sensor::getStringType() const
	{
		return callObjectMethod(
			"getStringType",
			"()Ljava/lang/String;"
		);
	}
	inline jint Sensor::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString Sensor::getVendor() const
	{
		return callObjectMethod(
			"getVendor",
			"()Ljava/lang/String;"
		);
	}
	inline jint Sensor::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline jboolean Sensor::isAdditionalInfoSupported() const
	{
		return callMethod<jboolean>(
			"isAdditionalInfoSupported",
			"()Z"
		);
	}
	inline jboolean Sensor::isDirectChannelTypeSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isDirectChannelTypeSupported",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Sensor::isDynamicSensor() const
	{
		return callMethod<jboolean>(
			"isDynamicSensor",
			"()Z"
		);
	}
	inline jboolean Sensor::isWakeUpSensor() const
	{
		return callMethod<jboolean>(
			"isWakeUpSensor",
			"()Z"
		);
	}
	inline JString Sensor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
