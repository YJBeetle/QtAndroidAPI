#include "./Sensor.hpp"
#include "./SensorAdditionalInfo.hpp"

namespace android::hardware
{
	// Fields
	jint SensorAdditionalInfo::TYPE_FRAME_BEGIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_BEGIN"
		);
	}
	jint SensorAdditionalInfo::TYPE_FRAME_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_END"
		);
	}
	jint SensorAdditionalInfo::TYPE_INTERNAL_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_INTERNAL_TEMPERATURE"
		);
	}
	jint SensorAdditionalInfo::TYPE_SAMPLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SAMPLING"
		);
	}
	jint SensorAdditionalInfo::TYPE_SENSOR_PLACEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SENSOR_PLACEMENT"
		);
	}
	jint SensorAdditionalInfo::TYPE_UNTRACKED_DELAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_UNTRACKED_DELAY"
		);
	}
	jint SensorAdditionalInfo::TYPE_VEC3_CALIBRATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_VEC3_CALIBRATION"
		);
	}
	jfloatArray SensorAdditionalInfo::floatValues()
	{
		return getObjectField(
			"floatValues",
			"[F"
		).object<jfloatArray>();
	}
	jintArray SensorAdditionalInfo::intValues()
	{
		return getObjectField(
			"intValues",
			"[I"
		).object<jintArray>();
	}
	android::hardware::Sensor SensorAdditionalInfo::sensor()
	{
		return getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jint SensorAdditionalInfo::serial()
	{
		return getField<jint>(
			"serial"
		);
	}
	jint SensorAdditionalInfo::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// QAndroidJniObject forward
	SensorAdditionalInfo::SensorAdditionalInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

