#pragma once

#include "../../JFloatArray.hpp"
#include "./HardwareBuffer.def.hpp"
#include "./Sensor.def.hpp"
#include "./SensorDirectChannel.def.hpp"
#include "./SensorManager_DynamicSensorCallback.def.hpp"
#include "./TriggerEventListener.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/MemoryFile.def.hpp"
#include "./SensorManager.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint SensorManager::AXIS_MINUS_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_X"
		);
	}
	inline jint SensorManager::AXIS_MINUS_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_Y"
		);
	}
	inline jint SensorManager::AXIS_MINUS_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_Z"
		);
	}
	inline jint SensorManager::AXIS_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_X"
		);
	}
	inline jint SensorManager::AXIS_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_Y"
		);
	}
	inline jint SensorManager::AXIS_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_Z"
		);
	}
	inline jint SensorManager::DATA_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_X"
		);
	}
	inline jint SensorManager::DATA_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_Y"
		);
	}
	inline jint SensorManager::DATA_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_Z"
		);
	}
	inline jfloat SensorManager::GRAVITY_DEATH_STAR_I()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_DEATH_STAR_I"
		);
	}
	inline jfloat SensorManager::GRAVITY_EARTH()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_EARTH"
		);
	}
	inline jfloat SensorManager::GRAVITY_JUPITER()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_JUPITER"
		);
	}
	inline jfloat SensorManager::GRAVITY_MARS()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MARS"
		);
	}
	inline jfloat SensorManager::GRAVITY_MERCURY()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MERCURY"
		);
	}
	inline jfloat SensorManager::GRAVITY_MOON()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MOON"
		);
	}
	inline jfloat SensorManager::GRAVITY_NEPTUNE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_NEPTUNE"
		);
	}
	inline jfloat SensorManager::GRAVITY_PLUTO()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_PLUTO"
		);
	}
	inline jfloat SensorManager::GRAVITY_SATURN()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_SATURN"
		);
	}
	inline jfloat SensorManager::GRAVITY_SUN()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_SUN"
		);
	}
	inline jfloat SensorManager::GRAVITY_THE_ISLAND()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_THE_ISLAND"
		);
	}
	inline jfloat SensorManager::GRAVITY_URANUS()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_URANUS"
		);
	}
	inline jfloat SensorManager::GRAVITY_VENUS()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_VENUS"
		);
	}
	inline jfloat SensorManager::LIGHT_CLOUDY()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_CLOUDY"
		);
	}
	inline jfloat SensorManager::LIGHT_FULLMOON()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_FULLMOON"
		);
	}
	inline jfloat SensorManager::LIGHT_NO_MOON()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_NO_MOON"
		);
	}
	inline jfloat SensorManager::LIGHT_OVERCAST()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_OVERCAST"
		);
	}
	inline jfloat SensorManager::LIGHT_SHADE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SHADE"
		);
	}
	inline jfloat SensorManager::LIGHT_SUNLIGHT()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNLIGHT"
		);
	}
	inline jfloat SensorManager::LIGHT_SUNLIGHT_MAX()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNLIGHT_MAX"
		);
	}
	inline jfloat SensorManager::LIGHT_SUNRISE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNRISE"
		);
	}
	inline jfloat SensorManager::MAGNETIC_FIELD_EARTH_MAX()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"MAGNETIC_FIELD_EARTH_MAX"
		);
	}
	inline jfloat SensorManager::MAGNETIC_FIELD_EARTH_MIN()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"MAGNETIC_FIELD_EARTH_MIN"
		);
	}
	inline jfloat SensorManager::PRESSURE_STANDARD_ATMOSPHERE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"PRESSURE_STANDARD_ATMOSPHERE"
		);
	}
	inline jint SensorManager::RAW_DATA_INDEX()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_INDEX"
		);
	}
	inline jint SensorManager::RAW_DATA_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_X"
		);
	}
	inline jint SensorManager::RAW_DATA_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_Y"
		);
	}
	inline jint SensorManager::RAW_DATA_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_Z"
		);
	}
	inline jint SensorManager::SENSOR_ACCELEROMETER()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ACCELEROMETER"
		);
	}
	inline jint SensorManager::SENSOR_ALL()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ALL"
		);
	}
	inline jint SensorManager::SENSOR_DELAY_FASTEST()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_FASTEST"
		);
	}
	inline jint SensorManager::SENSOR_DELAY_GAME()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_GAME"
		);
	}
	inline jint SensorManager::SENSOR_DELAY_NORMAL()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_NORMAL"
		);
	}
	inline jint SensorManager::SENSOR_DELAY_UI()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_UI"
		);
	}
	inline jint SensorManager::SENSOR_LIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_LIGHT"
		);
	}
	inline jint SensorManager::SENSOR_MAGNETIC_FIELD()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MAGNETIC_FIELD"
		);
	}
	inline jint SensorManager::SENSOR_MAX()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MAX"
		);
	}
	inline jint SensorManager::SENSOR_MIN()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MIN"
		);
	}
	inline jint SensorManager::SENSOR_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ORIENTATION"
		);
	}
	inline jint SensorManager::SENSOR_ORIENTATION_RAW()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ORIENTATION_RAW"
		);
	}
	inline jint SensorManager::SENSOR_PROXIMITY()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_PROXIMITY"
		);
	}
	inline jint SensorManager::SENSOR_STATUS_ACCURACY_HIGH()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_HIGH"
		);
	}
	inline jint SensorManager::SENSOR_STATUS_ACCURACY_LOW()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_LOW"
		);
	}
	inline jint SensorManager::SENSOR_STATUS_ACCURACY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_MEDIUM"
		);
	}
	inline jint SensorManager::SENSOR_STATUS_NO_CONTACT()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_NO_CONTACT"
		);
	}
	inline jint SensorManager::SENSOR_STATUS_UNRELIABLE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_UNRELIABLE"
		);
	}
	inline jint SensorManager::SENSOR_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_TEMPERATURE"
		);
	}
	inline jint SensorManager::SENSOR_TRICORDER()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_TRICORDER"
		);
	}
	inline jfloat SensorManager::STANDARD_GRAVITY()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"STANDARD_GRAVITY"
		);
	}
	
	// Constructors
	
	// Methods
	inline jfloat SensorManager::getAltitude(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"android.hardware.SensorManager",
			"getAltitude",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline void SensorManager::getAngleChange(JFloatArray arg0, JFloatArray arg1, JFloatArray arg2)
	{
		callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getAngleChange",
			"([F[F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>()
		);
	}
	inline jfloat SensorManager::getInclination(JFloatArray arg0)
	{
		return callStaticMethod<jfloat>(
			"android.hardware.SensorManager",
			"getInclination",
			"([F)F",
			arg0.object<jfloatArray>()
		);
	}
	inline JFloatArray SensorManager::getOrientation(JFloatArray arg0, JFloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.hardware.SensorManager",
			"getOrientation",
			"([F[F)[F",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void SensorManager::getQuaternionFromVector(JFloatArray arg0, JFloatArray arg1)
	{
		callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getQuaternionFromVector",
			"([F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline jboolean SensorManager::getRotationMatrix(JFloatArray arg0, JFloatArray arg1, JFloatArray arg2, JFloatArray arg3)
	{
		return callStaticMethod<jboolean>(
			"android.hardware.SensorManager",
			"getRotationMatrix",
			"([F[F[F[F)Z",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>(),
			arg3.object<jfloatArray>()
		);
	}
	inline void SensorManager::getRotationMatrixFromVector(JFloatArray arg0, JFloatArray arg1)
	{
		callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getRotationMatrixFromVector",
			"([F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline jboolean SensorManager::remapCoordinateSystem(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3)
	{
		return callStaticMethod<jboolean>(
			"android.hardware.SensorManager",
			"remapCoordinateSystem",
			"([FII[F)Z",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>()
		);
	}
	inline jboolean SensorManager::cancelTriggerSensor(android::hardware::TriggerEventListener arg0, android::hardware::Sensor arg1) const
	{
		return callMethod<jboolean>(
			"cancelTriggerSensor",
			"(Landroid/hardware/TriggerEventListener;Landroid/hardware/Sensor;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::hardware::SensorDirectChannel SensorManager::createDirectChannel(android::hardware::HardwareBuffer arg0) const
	{
		return callObjectMethod(
			"createDirectChannel",
			"(Landroid/hardware/HardwareBuffer;)Landroid/hardware/SensorDirectChannel;",
			arg0.object()
		);
	}
	inline android::hardware::SensorDirectChannel SensorManager::createDirectChannel(android::os::MemoryFile arg0) const
	{
		return callObjectMethod(
			"createDirectChannel",
			"(Landroid/os/MemoryFile;)Landroid/hardware/SensorDirectChannel;",
			arg0.object()
		);
	}
	inline jboolean SensorManager::flush(JObject arg0) const
	{
		return callMethod<jboolean>(
			"flush",
			"(Landroid/hardware/SensorEventListener;)Z",
			arg0.object()
		);
	}
	inline android::hardware::Sensor SensorManager::getDefaultSensor(jint arg0) const
	{
		return callObjectMethod(
			"getDefaultSensor",
			"(I)Landroid/hardware/Sensor;",
			arg0
		);
	}
	inline android::hardware::Sensor SensorManager::getDefaultSensor(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getDefaultSensor",
			"(IZ)Landroid/hardware/Sensor;",
			arg0,
			arg1
		);
	}
	inline JObject SensorManager::getDynamicSensorList(jint arg0) const
	{
		return callObjectMethod(
			"getDynamicSensorList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline JObject SensorManager::getSensorList(jint arg0) const
	{
		return callObjectMethod(
			"getSensorList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jint SensorManager::getSensors() const
	{
		return callMethod<jint>(
			"getSensors",
			"()I"
		);
	}
	inline jboolean SensorManager::isDynamicSensorDiscoverySupported() const
	{
		return callMethod<jboolean>(
			"isDynamicSensorDiscoverySupported",
			"()Z"
		);
	}
	inline void SensorManager::registerDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0) const
	{
		callMethod<void>(
			"registerDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;)V",
			arg0.object()
		);
	}
	inline void SensorManager::registerDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean SensorManager::registerListener(JObject arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorListener;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean SensorManager::registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean SensorManager::registerListener(JObject arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorListener;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean SensorManager::registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2, android::os::Handler arg3) const
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;ILandroid/os/Handler;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean SensorManager::registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;II)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline jboolean SensorManager::registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2, jint arg3, android::os::Handler arg4) const
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;IILandroid/os/Handler;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline jboolean SensorManager::requestTriggerSensor(android::hardware::TriggerEventListener arg0, android::hardware::Sensor arg1) const
	{
		return callMethod<jboolean>(
			"requestTriggerSensor",
			"(Landroid/hardware/TriggerEventListener;Landroid/hardware/Sensor;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SensorManager::unregisterDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0) const
	{
		callMethod<void>(
			"unregisterDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;)V",
			arg0.object()
		);
	}
	inline void SensorManager::unregisterListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorEventListener;)V",
			arg0.object()
		);
	}
	inline void SensorManager::unregisterListener(JObject arg0, android::hardware::Sensor arg1) const
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SensorManager::unregisterListener(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorListener;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
