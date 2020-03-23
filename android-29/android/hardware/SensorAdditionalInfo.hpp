#pragma once

#ifndef ANDROID_HARDWARE_SENSORADDITIONALINFO
#define ANDROID_HARDWARE_SENSORADDITIONALINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class Sensor;
}

namespace __jni_impl::android::hardware
{
	class SensorAdditionalInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_FRAME_BEGIN();
		static jint TYPE_FRAME_END();
		static jint TYPE_INTERNAL_TEMPERATURE();
		static jint TYPE_SAMPLING();
		static jint TYPE_SENSOR_PLACEMENT();
		static jint TYPE_UNTRACKED_DELAY();
		static jint TYPE_VEC3_CALIBRATION();
		QAndroidJniObject floatValues();
		QAndroidJniObject intValues();
		QAndroidJniObject sensor();
		jint serial();
		jint type();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::hardware

#include "Sensor.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	jint SensorAdditionalInfo::TYPE_FRAME_BEGIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_BEGIN");
	}
	jint SensorAdditionalInfo::TYPE_FRAME_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_END");
	}
	jint SensorAdditionalInfo::TYPE_INTERNAL_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_INTERNAL_TEMPERATURE");
	}
	jint SensorAdditionalInfo::TYPE_SAMPLING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SAMPLING");
	}
	jint SensorAdditionalInfo::TYPE_SENSOR_PLACEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SENSOR_PLACEMENT");
	}
	jint SensorAdditionalInfo::TYPE_UNTRACKED_DELAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_UNTRACKED_DELAY");
	}
	jint SensorAdditionalInfo::TYPE_VEC3_CALIBRATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_VEC3_CALIBRATION");
	}
	QAndroidJniObject SensorAdditionalInfo::floatValues()
	{
		return __thiz.getObjectField(
			"floatValues",
			"[F");
	}
	QAndroidJniObject SensorAdditionalInfo::intValues()
	{
		return __thiz.getObjectField(
			"intValues",
			"[I");
	}
	QAndroidJniObject SensorAdditionalInfo::sensor()
	{
		return __thiz.getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;");
	}
	jint SensorAdditionalInfo::serial()
	{
		return __thiz.getField<jint>(
			"serial");
	}
	jint SensorAdditionalInfo::type()
	{
		return __thiz.getField<jint>(
			"type");
	}
	
	// Constructors
	void SensorAdditionalInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorAdditionalInfo",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class SensorAdditionalInfo : public __jni_impl::android::hardware::SensorAdditionalInfo
	{
	public:
		SensorAdditionalInfo(QAndroidJniObject obj) { __thiz = obj; }
		SensorAdditionalInfo()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_SENSORADDITIONALINFO

