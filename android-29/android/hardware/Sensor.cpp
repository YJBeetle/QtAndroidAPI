#include "./Sensor.hpp"

namespace android::hardware
{
	// Fields
	jint Sensor::REPORTING_MODE_CONTINUOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_CONTINUOUS"
		);
	}
	jint Sensor::REPORTING_MODE_ONE_SHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_ONE_SHOT"
		);
	}
	jint Sensor::REPORTING_MODE_ON_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_ON_CHANGE"
		);
	}
	jint Sensor::REPORTING_MODE_SPECIAL_TRIGGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_SPECIAL_TRIGGER"
		);
	}
	jstring Sensor::STRING_TYPE_ACCELEROMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ACCELEROMETER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_ACCELEROMETER_UNCALIBRATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ACCELEROMETER_UNCALIBRATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_AMBIENT_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_AMBIENT_TEMPERATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_GAME_ROTATION_VECTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GAME_ROTATION_VECTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_GRAVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GRAVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_GYROSCOPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GYROSCOPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_GYROSCOPE_UNCALIBRATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GYROSCOPE_UNCALIBRATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_HEART_BEAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_HEART_BEAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_HEART_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_HEART_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_LINEAR_ACCELERATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LINEAR_ACCELERATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_MAGNETIC_FIELD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MAGNETIC_FIELD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_MOTION_DETECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MOTION_DETECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ORIENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_POSE_6DOF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_POSE_6DOF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_PRESSURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_PRESSURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_PROXIMITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_PROXIMITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_RELATIVE_HUMIDITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_RELATIVE_HUMIDITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_ROTATION_VECTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ROTATION_VECTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_SIGNIFICANT_MOTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_SIGNIFICANT_MOTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_STATIONARY_DETECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STATIONARY_DETECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_STEP_COUNTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STEP_COUNTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_STEP_DETECTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STEP_DETECTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Sensor::STRING_TYPE_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_TEMPERATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Sensor::TYPE_ACCELEROMETER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ACCELEROMETER"
		);
	}
	jint Sensor::TYPE_ACCELEROMETER_UNCALIBRATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ACCELEROMETER_UNCALIBRATED"
		);
	}
	jint Sensor::TYPE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ALL"
		);
	}
	jint Sensor::TYPE_AMBIENT_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_AMBIENT_TEMPERATURE"
		);
	}
	jint Sensor::TYPE_DEVICE_PRIVATE_BASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_DEVICE_PRIVATE_BASE"
		);
	}
	jint Sensor::TYPE_GAME_ROTATION_VECTOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GAME_ROTATION_VECTOR"
		);
	}
	jint Sensor::TYPE_GEOMAGNETIC_ROTATION_VECTOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GEOMAGNETIC_ROTATION_VECTOR"
		);
	}
	jint Sensor::TYPE_GRAVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GRAVITY"
		);
	}
	jint Sensor::TYPE_GYROSCOPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GYROSCOPE"
		);
	}
	jint Sensor::TYPE_GYROSCOPE_UNCALIBRATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GYROSCOPE_UNCALIBRATED"
		);
	}
	jint Sensor::TYPE_HEART_BEAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_HEART_BEAT"
		);
	}
	jint Sensor::TYPE_HEART_RATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_HEART_RATE"
		);
	}
	jint Sensor::TYPE_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LIGHT"
		);
	}
	jint Sensor::TYPE_LINEAR_ACCELERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LINEAR_ACCELERATION"
		);
	}
	jint Sensor::TYPE_LOW_LATENCY_OFFBODY_DETECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LOW_LATENCY_OFFBODY_DETECT"
		);
	}
	jint Sensor::TYPE_MAGNETIC_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MAGNETIC_FIELD"
		);
	}
	jint Sensor::TYPE_MAGNETIC_FIELD_UNCALIBRATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MAGNETIC_FIELD_UNCALIBRATED"
		);
	}
	jint Sensor::TYPE_MOTION_DETECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MOTION_DETECT"
		);
	}
	jint Sensor::TYPE_ORIENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ORIENTATION"
		);
	}
	jint Sensor::TYPE_POSE_6DOF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_POSE_6DOF"
		);
	}
	jint Sensor::TYPE_PRESSURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_PRESSURE"
		);
	}
	jint Sensor::TYPE_PROXIMITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_PROXIMITY"
		);
	}
	jint Sensor::TYPE_RELATIVE_HUMIDITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_RELATIVE_HUMIDITY"
		);
	}
	jint Sensor::TYPE_ROTATION_VECTOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ROTATION_VECTOR"
		);
	}
	jint Sensor::TYPE_SIGNIFICANT_MOTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_SIGNIFICANT_MOTION"
		);
	}
	jint Sensor::TYPE_STATIONARY_DETECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STATIONARY_DETECT"
		);
	}
	jint Sensor::TYPE_STEP_COUNTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STEP_COUNTER"
		);
	}
	jint Sensor::TYPE_STEP_DETECTOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STEP_DETECTOR"
		);
	}
	jint Sensor::TYPE_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_TEMPERATURE"
		);
	}
	
	// QAndroidJniObject forward
	Sensor::Sensor(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Sensor::getFifoMaxEventCount()
	{
		return callMethod<jint>(
			"getFifoMaxEventCount",
			"()I"
		);
	}
	jint Sensor::getFifoReservedEventCount()
	{
		return callMethod<jint>(
			"getFifoReservedEventCount",
			"()I"
		);
	}
	jint Sensor::getHighestDirectReportRateLevel()
	{
		return callMethod<jint>(
			"getHighestDirectReportRateLevel",
			"()I"
		);
	}
	jint Sensor::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint Sensor::getMaxDelay()
	{
		return callMethod<jint>(
			"getMaxDelay",
			"()I"
		);
	}
	jfloat Sensor::getMaximumRange()
	{
		return callMethod<jfloat>(
			"getMaximumRange",
			"()F"
		);
	}
	jint Sensor::getMinDelay()
	{
		return callMethod<jint>(
			"getMinDelay",
			"()I"
		);
	}
	jstring Sensor::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat Sensor::getPower()
	{
		return callMethod<jfloat>(
			"getPower",
			"()F"
		);
	}
	jint Sensor::getReportingMode()
	{
		return callMethod<jint>(
			"getReportingMode",
			"()I"
		);
	}
	jfloat Sensor::getResolution()
	{
		return callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	jstring Sensor::getStringType()
	{
		return callObjectMethod(
			"getStringType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Sensor::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring Sensor::getVendor()
	{
		return callObjectMethod(
			"getVendor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Sensor::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean Sensor::isAdditionalInfoSupported()
	{
		return callMethod<jboolean>(
			"isAdditionalInfoSupported",
			"()Z"
		);
	}
	jboolean Sensor::isDirectChannelTypeSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isDirectChannelTypeSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean Sensor::isDynamicSensor()
	{
		return callMethod<jboolean>(
			"isDynamicSensor",
			"()Z"
		);
	}
	jboolean Sensor::isWakeUpSensor()
	{
		return callMethod<jboolean>(
			"isWakeUpSensor",
			"()Z"
		);
	}
	jstring Sensor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware

