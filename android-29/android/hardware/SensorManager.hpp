#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class HardwareBuffer;
}
namespace __jni_impl::android::hardware
{
	class Sensor;
}
namespace __jni_impl::android::hardware
{
	class SensorDirectChannel;
}
namespace __jni_impl::android::hardware
{
	class SensorManager_DynamicSensorCallback;
}
namespace __jni_impl::android::hardware
{
	class TriggerEventListener;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class MemoryFile;
}

namespace __jni_impl::android::hardware
{
	class SensorManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint AXIS_MINUS_X();
		static jint AXIS_MINUS_Y();
		static jint AXIS_MINUS_Z();
		static jint AXIS_X();
		static jint AXIS_Y();
		static jint AXIS_Z();
		static jint DATA_X();
		static jint DATA_Y();
		static jint DATA_Z();
		static jfloat GRAVITY_DEATH_STAR_I();
		static jfloat GRAVITY_EARTH();
		static jfloat GRAVITY_JUPITER();
		static jfloat GRAVITY_MARS();
		static jfloat GRAVITY_MERCURY();
		static jfloat GRAVITY_MOON();
		static jfloat GRAVITY_NEPTUNE();
		static jfloat GRAVITY_PLUTO();
		static jfloat GRAVITY_SATURN();
		static jfloat GRAVITY_SUN();
		static jfloat GRAVITY_THE_ISLAND();
		static jfloat GRAVITY_URANUS();
		static jfloat GRAVITY_VENUS();
		static jfloat LIGHT_CLOUDY();
		static jfloat LIGHT_FULLMOON();
		static jfloat LIGHT_NO_MOON();
		static jfloat LIGHT_OVERCAST();
		static jfloat LIGHT_SHADE();
		static jfloat LIGHT_SUNLIGHT();
		static jfloat LIGHT_SUNLIGHT_MAX();
		static jfloat LIGHT_SUNRISE();
		static jfloat MAGNETIC_FIELD_EARTH_MAX();
		static jfloat MAGNETIC_FIELD_EARTH_MIN();
		static jfloat PRESSURE_STANDARD_ATMOSPHERE();
		static jint RAW_DATA_INDEX();
		static jint RAW_DATA_X();
		static jint RAW_DATA_Y();
		static jint RAW_DATA_Z();
		static jint SENSOR_ACCELEROMETER();
		static jint SENSOR_ALL();
		static jint SENSOR_DELAY_FASTEST();
		static jint SENSOR_DELAY_GAME();
		static jint SENSOR_DELAY_NORMAL();
		static jint SENSOR_DELAY_UI();
		static jint SENSOR_LIGHT();
		static jint SENSOR_MAGNETIC_FIELD();
		static jint SENSOR_MAX();
		static jint SENSOR_MIN();
		static jint SENSOR_ORIENTATION();
		static jint SENSOR_ORIENTATION_RAW();
		static jint SENSOR_PROXIMITY();
		static jint SENSOR_STATUS_ACCURACY_HIGH();
		static jint SENSOR_STATUS_ACCURACY_LOW();
		static jint SENSOR_STATUS_ACCURACY_MEDIUM();
		static jint SENSOR_STATUS_NO_CONTACT();
		static jint SENSOR_STATUS_UNRELIABLE();
		static jint SENSOR_TEMPERATURE();
		static jint SENSOR_TRICORDER();
		static jfloat STANDARD_GRAVITY();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jfloat getAltitude(jfloat arg0, jfloat arg1);
		static void getAngleChange(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2);
		static jfloat getInclination(jfloatArray arg0);
		static jfloatArray getOrientation(jfloatArray arg0, jfloatArray arg1);
		static void getQuaternionFromVector(jfloatArray arg0, jfloatArray arg1);
		static jboolean getRotationMatrix(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2, jfloatArray arg3);
		static void getRotationMatrixFromVector(jfloatArray arg0, jfloatArray arg1);
		static jboolean remapCoordinateSystem(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3);
		jboolean cancelTriggerSensor(__jni_impl::android::hardware::TriggerEventListener arg0, __jni_impl::android::hardware::Sensor arg1);
		QAndroidJniObject createDirectChannel(__jni_impl::android::hardware::HardwareBuffer arg0);
		QAndroidJniObject createDirectChannel(__jni_impl::android::os::MemoryFile arg0);
		jboolean flush(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getDefaultSensor(jint arg0);
		QAndroidJniObject getDefaultSensor(jint arg0, jboolean arg1);
		QAndroidJniObject getDynamicSensorList(jint arg0);
		QAndroidJniObject getSensorList(jint arg0);
		jint getSensors();
		jboolean isDynamicSensorDiscoverySupported();
		void registerDynamicSensorCallback(__jni_impl::android::hardware::SensorManager_DynamicSensorCallback arg0);
		void registerDynamicSensorCallback(__jni_impl::android::hardware::SensorManager_DynamicSensorCallback arg0, __jni_impl::android::os::Handler arg1);
		jboolean registerListener(__jni_impl::__JniBaseClass arg0, jint arg1);
		jboolean registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2);
		jboolean registerListener(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		jboolean registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2, __jni_impl::android::os::Handler arg3);
		jboolean registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2, jint arg3);
		jboolean registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2, jint arg3, __jni_impl::android::os::Handler arg4);
		jboolean requestTriggerSensor(__jni_impl::android::hardware::TriggerEventListener arg0, __jni_impl::android::hardware::Sensor arg1);
		void unregisterDynamicSensorCallback(__jni_impl::android::hardware::SensorManager_DynamicSensorCallback arg0);
		void unregisterListener(__jni_impl::__JniBaseClass arg0);
		void unregisterListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1);
		void unregisterListener(__jni_impl::__JniBaseClass arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware

#include "HardwareBuffer.hpp"
#include "Sensor.hpp"
#include "SensorDirectChannel.hpp"
#include "SensorManager_DynamicSensorCallback.hpp"
#include "TriggerEventListener.hpp"
#include "../os/Handler.hpp"
#include "../os/MemoryFile.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	jint SensorManager::AXIS_MINUS_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_X"
		);
	}
	jint SensorManager::AXIS_MINUS_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_Y"
		);
	}
	jint SensorManager::AXIS_MINUS_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_Z"
		);
	}
	jint SensorManager::AXIS_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_X"
		);
	}
	jint SensorManager::AXIS_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_Y"
		);
	}
	jint SensorManager::AXIS_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_Z"
		);
	}
	jint SensorManager::DATA_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_X"
		);
	}
	jint SensorManager::DATA_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_Y"
		);
	}
	jint SensorManager::DATA_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_Z"
		);
	}
	jfloat SensorManager::GRAVITY_DEATH_STAR_I()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_DEATH_STAR_I"
		);
	}
	jfloat SensorManager::GRAVITY_EARTH()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_EARTH"
		);
	}
	jfloat SensorManager::GRAVITY_JUPITER()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_JUPITER"
		);
	}
	jfloat SensorManager::GRAVITY_MARS()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MARS"
		);
	}
	jfloat SensorManager::GRAVITY_MERCURY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MERCURY"
		);
	}
	jfloat SensorManager::GRAVITY_MOON()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MOON"
		);
	}
	jfloat SensorManager::GRAVITY_NEPTUNE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_NEPTUNE"
		);
	}
	jfloat SensorManager::GRAVITY_PLUTO()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_PLUTO"
		);
	}
	jfloat SensorManager::GRAVITY_SATURN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_SATURN"
		);
	}
	jfloat SensorManager::GRAVITY_SUN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_SUN"
		);
	}
	jfloat SensorManager::GRAVITY_THE_ISLAND()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_THE_ISLAND"
		);
	}
	jfloat SensorManager::GRAVITY_URANUS()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_URANUS"
		);
	}
	jfloat SensorManager::GRAVITY_VENUS()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_VENUS"
		);
	}
	jfloat SensorManager::LIGHT_CLOUDY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_CLOUDY"
		);
	}
	jfloat SensorManager::LIGHT_FULLMOON()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_FULLMOON"
		);
	}
	jfloat SensorManager::LIGHT_NO_MOON()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_NO_MOON"
		);
	}
	jfloat SensorManager::LIGHT_OVERCAST()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_OVERCAST"
		);
	}
	jfloat SensorManager::LIGHT_SHADE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SHADE"
		);
	}
	jfloat SensorManager::LIGHT_SUNLIGHT()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNLIGHT"
		);
	}
	jfloat SensorManager::LIGHT_SUNLIGHT_MAX()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNLIGHT_MAX"
		);
	}
	jfloat SensorManager::LIGHT_SUNRISE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNRISE"
		);
	}
	jfloat SensorManager::MAGNETIC_FIELD_EARTH_MAX()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"MAGNETIC_FIELD_EARTH_MAX"
		);
	}
	jfloat SensorManager::MAGNETIC_FIELD_EARTH_MIN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"MAGNETIC_FIELD_EARTH_MIN"
		);
	}
	jfloat SensorManager::PRESSURE_STANDARD_ATMOSPHERE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"PRESSURE_STANDARD_ATMOSPHERE"
		);
	}
	jint SensorManager::RAW_DATA_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_INDEX"
		);
	}
	jint SensorManager::RAW_DATA_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_X"
		);
	}
	jint SensorManager::RAW_DATA_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_Y"
		);
	}
	jint SensorManager::RAW_DATA_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_Z"
		);
	}
	jint SensorManager::SENSOR_ACCELEROMETER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ACCELEROMETER"
		);
	}
	jint SensorManager::SENSOR_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ALL"
		);
	}
	jint SensorManager::SENSOR_DELAY_FASTEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_FASTEST"
		);
	}
	jint SensorManager::SENSOR_DELAY_GAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_GAME"
		);
	}
	jint SensorManager::SENSOR_DELAY_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_NORMAL"
		);
	}
	jint SensorManager::SENSOR_DELAY_UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_UI"
		);
	}
	jint SensorManager::SENSOR_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_LIGHT"
		);
	}
	jint SensorManager::SENSOR_MAGNETIC_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MAGNETIC_FIELD"
		);
	}
	jint SensorManager::SENSOR_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MAX"
		);
	}
	jint SensorManager::SENSOR_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MIN"
		);
	}
	jint SensorManager::SENSOR_ORIENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ORIENTATION"
		);
	}
	jint SensorManager::SENSOR_ORIENTATION_RAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ORIENTATION_RAW"
		);
	}
	jint SensorManager::SENSOR_PROXIMITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_PROXIMITY"
		);
	}
	jint SensorManager::SENSOR_STATUS_ACCURACY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_HIGH"
		);
	}
	jint SensorManager::SENSOR_STATUS_ACCURACY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_LOW"
		);
	}
	jint SensorManager::SENSOR_STATUS_ACCURACY_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_MEDIUM"
		);
	}
	jint SensorManager::SENSOR_STATUS_NO_CONTACT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_NO_CONTACT"
		);
	}
	jint SensorManager::SENSOR_STATUS_UNRELIABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_UNRELIABLE"
		);
	}
	jint SensorManager::SENSOR_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_TEMPERATURE"
		);
	}
	jint SensorManager::SENSOR_TRICORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_TRICORDER"
		);
	}
	jfloat SensorManager::STANDARD_GRAVITY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"STANDARD_GRAVITY"
		);
	}
	
	// Constructors
	void SensorManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorManager",
			"(V)V");
	}
	
	// Methods
	jfloat SensorManager::getAltitude(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.hardware.SensorManager",
			"getAltitude",
			"(FF)F",
			arg0,
			arg1
		);
	}
	void SensorManager::getAngleChange(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getAngleChange",
			"([F[F[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat SensorManager::getInclination(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.hardware.SensorManager",
			"getInclination",
			"([F)F",
			arg0
		);
	}
	jfloatArray SensorManager::getOrientation(jfloatArray arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.SensorManager",
			"getOrientation",
			"([F[F)[F",
			arg0,
			arg1
		).object<jfloatArray>();
	}
	void SensorManager::getQuaternionFromVector(jfloatArray arg0, jfloatArray arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getQuaternionFromVector",
			"([F[F)V",
			arg0,
			arg1
		);
	}
	jboolean SensorManager::getRotationMatrix(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2, jfloatArray arg3)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.hardware.SensorManager",
			"getRotationMatrix",
			"([F[F[F[F)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SensorManager::getRotationMatrixFromVector(jfloatArray arg0, jfloatArray arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getRotationMatrixFromVector",
			"([F[F)V",
			arg0,
			arg1
		);
	}
	jboolean SensorManager::remapCoordinateSystem(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.hardware.SensorManager",
			"remapCoordinateSystem",
			"([FII[F)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean SensorManager::cancelTriggerSensor(__jni_impl::android::hardware::TriggerEventListener arg0, __jni_impl::android::hardware::Sensor arg1)
	{
		return __thiz.callMethod<jboolean>(
			"cancelTriggerSensor",
			"(Landroid/hardware/TriggerEventListener;Landroid/hardware/Sensor;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SensorManager::createDirectChannel(__jni_impl::android::hardware::HardwareBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"createDirectChannel",
			"(Landroid/hardware/HardwareBuffer;)Landroid/hardware/SensorDirectChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SensorManager::createDirectChannel(__jni_impl::android::os::MemoryFile arg0)
	{
		return __thiz.callObjectMethod(
			"createDirectChannel",
			"(Landroid/os/MemoryFile;)Landroid/hardware/SensorDirectChannel;",
			arg0.__jniObject().object()
		);
	}
	jboolean SensorManager::flush(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"flush",
			"(Landroid/hardware/SensorEventListener;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SensorManager::getDefaultSensor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDefaultSensor",
			"(I)Landroid/hardware/Sensor;",
			arg0
		);
	}
	QAndroidJniObject SensorManager::getDefaultSensor(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getDefaultSensor",
			"(IZ)Landroid/hardware/Sensor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SensorManager::getDynamicSensorList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDynamicSensorList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject SensorManager::getSensorList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSensorList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jint SensorManager::getSensors()
	{
		return __thiz.callMethod<jint>(
			"getSensors",
			"()I"
		);
	}
	jboolean SensorManager::isDynamicSensorDiscoverySupported()
	{
		return __thiz.callMethod<jboolean>(
			"isDynamicSensorDiscoverySupported",
			"()Z"
		);
	}
	void SensorManager::registerDynamicSensorCallback(__jni_impl::android::hardware::SensorManager_DynamicSensorCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorManager::registerDynamicSensorCallback(__jni_impl::android::hardware::SensorManager_DynamicSensorCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean SensorManager::registerListener(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorListener;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean SensorManager::registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean SensorManager::registerListener(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorListener;II)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean SensorManager::registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;ILandroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean SensorManager::registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;II)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jboolean SensorManager::registerListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1, jint arg2, jint arg3, __jni_impl::android::os::Handler arg4)
	{
		return __thiz.callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;IILandroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jboolean SensorManager::requestTriggerSensor(__jni_impl::android::hardware::TriggerEventListener arg0, __jni_impl::android::hardware::Sensor arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestTriggerSensor",
			"(Landroid/hardware/TriggerEventListener;Landroid/hardware/Sensor;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SensorManager::unregisterDynamicSensorCallback(__jni_impl::android::hardware::SensorManager_DynamicSensorCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorManager::unregisterListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorManager::unregisterListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::hardware::Sensor arg1)
	{
		__thiz.callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SensorManager::unregisterListener(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorListener;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class SensorManager : public __jni_impl::android::hardware::SensorManager
	{
	public:
		SensorManager(QAndroidJniObject obj) { __thiz = obj; }
		SensorManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware

