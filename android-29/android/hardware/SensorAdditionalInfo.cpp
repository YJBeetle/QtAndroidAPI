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
		return __thiz.getObjectField(
			"floatValues",
			"[F"
		).object<jfloatArray>();
	}
	jintArray SensorAdditionalInfo::intValues()
	{
		return __thiz.getObjectField(
			"intValues",
			"[I"
		).object<jintArray>();
	}
	QAndroidJniObject SensorAdditionalInfo::sensor()
	{
		return __thiz.getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jint SensorAdditionalInfo::serial()
	{
		return __thiz.getField<jint>(
			"serial"
		);
	}
	jint SensorAdditionalInfo::type()
	{
		return __thiz.getField<jint>(
			"type"
		);
	}
	
	SensorAdditionalInfo::SensorAdditionalInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::hardware

