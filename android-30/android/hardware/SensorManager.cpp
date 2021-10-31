#include "./HardwareBuffer.hpp"
#include "./Sensor.hpp"
#include "./SensorDirectChannel.hpp"
#include "./SensorManager_DynamicSensorCallback.hpp"
#include "./TriggerEventListener.hpp"
#include "../os/Handler.hpp"
#include "../os/MemoryFile.hpp"
#include "./SensorManager.hpp"

namespace android::hardware
{
	// Fields
	jint SensorManager::AXIS_MINUS_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_X"
		);
	}
	jint SensorManager::AXIS_MINUS_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_Y"
		);
	}
	jint SensorManager::AXIS_MINUS_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_MINUS_Z"
		);
	}
	jint SensorManager::AXIS_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_X"
		);
	}
	jint SensorManager::AXIS_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_Y"
		);
	}
	jint SensorManager::AXIS_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"AXIS_Z"
		);
	}
	jint SensorManager::DATA_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_X"
		);
	}
	jint SensorManager::DATA_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_Y"
		);
	}
	jint SensorManager::DATA_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"DATA_Z"
		);
	}
	jfloat SensorManager::GRAVITY_DEATH_STAR_I()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_DEATH_STAR_I"
		);
	}
	jfloat SensorManager::GRAVITY_EARTH()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_EARTH"
		);
	}
	jfloat SensorManager::GRAVITY_JUPITER()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_JUPITER"
		);
	}
	jfloat SensorManager::GRAVITY_MARS()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MARS"
		);
	}
	jfloat SensorManager::GRAVITY_MERCURY()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MERCURY"
		);
	}
	jfloat SensorManager::GRAVITY_MOON()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_MOON"
		);
	}
	jfloat SensorManager::GRAVITY_NEPTUNE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_NEPTUNE"
		);
	}
	jfloat SensorManager::GRAVITY_PLUTO()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_PLUTO"
		);
	}
	jfloat SensorManager::GRAVITY_SATURN()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_SATURN"
		);
	}
	jfloat SensorManager::GRAVITY_SUN()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_SUN"
		);
	}
	jfloat SensorManager::GRAVITY_THE_ISLAND()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_THE_ISLAND"
		);
	}
	jfloat SensorManager::GRAVITY_URANUS()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_URANUS"
		);
	}
	jfloat SensorManager::GRAVITY_VENUS()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"GRAVITY_VENUS"
		);
	}
	jfloat SensorManager::LIGHT_CLOUDY()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_CLOUDY"
		);
	}
	jfloat SensorManager::LIGHT_FULLMOON()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_FULLMOON"
		);
	}
	jfloat SensorManager::LIGHT_NO_MOON()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_NO_MOON"
		);
	}
	jfloat SensorManager::LIGHT_OVERCAST()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_OVERCAST"
		);
	}
	jfloat SensorManager::LIGHT_SHADE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SHADE"
		);
	}
	jfloat SensorManager::LIGHT_SUNLIGHT()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNLIGHT"
		);
	}
	jfloat SensorManager::LIGHT_SUNLIGHT_MAX()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNLIGHT_MAX"
		);
	}
	jfloat SensorManager::LIGHT_SUNRISE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"LIGHT_SUNRISE"
		);
	}
	jfloat SensorManager::MAGNETIC_FIELD_EARTH_MAX()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"MAGNETIC_FIELD_EARTH_MAX"
		);
	}
	jfloat SensorManager::MAGNETIC_FIELD_EARTH_MIN()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"MAGNETIC_FIELD_EARTH_MIN"
		);
	}
	jfloat SensorManager::PRESSURE_STANDARD_ATMOSPHERE()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"PRESSURE_STANDARD_ATMOSPHERE"
		);
	}
	jint SensorManager::RAW_DATA_INDEX()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_INDEX"
		);
	}
	jint SensorManager::RAW_DATA_X()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_X"
		);
	}
	jint SensorManager::RAW_DATA_Y()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_Y"
		);
	}
	jint SensorManager::RAW_DATA_Z()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"RAW_DATA_Z"
		);
	}
	jint SensorManager::SENSOR_ACCELEROMETER()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ACCELEROMETER"
		);
	}
	jint SensorManager::SENSOR_ALL()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ALL"
		);
	}
	jint SensorManager::SENSOR_DELAY_FASTEST()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_FASTEST"
		);
	}
	jint SensorManager::SENSOR_DELAY_GAME()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_GAME"
		);
	}
	jint SensorManager::SENSOR_DELAY_NORMAL()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_NORMAL"
		);
	}
	jint SensorManager::SENSOR_DELAY_UI()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_DELAY_UI"
		);
	}
	jint SensorManager::SENSOR_LIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_LIGHT"
		);
	}
	jint SensorManager::SENSOR_MAGNETIC_FIELD()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MAGNETIC_FIELD"
		);
	}
	jint SensorManager::SENSOR_MAX()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MAX"
		);
	}
	jint SensorManager::SENSOR_MIN()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_MIN"
		);
	}
	jint SensorManager::SENSOR_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ORIENTATION"
		);
	}
	jint SensorManager::SENSOR_ORIENTATION_RAW()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_ORIENTATION_RAW"
		);
	}
	jint SensorManager::SENSOR_PROXIMITY()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_PROXIMITY"
		);
	}
	jint SensorManager::SENSOR_STATUS_ACCURACY_HIGH()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_HIGH"
		);
	}
	jint SensorManager::SENSOR_STATUS_ACCURACY_LOW()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_LOW"
		);
	}
	jint SensorManager::SENSOR_STATUS_ACCURACY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_ACCURACY_MEDIUM"
		);
	}
	jint SensorManager::SENSOR_STATUS_NO_CONTACT()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_NO_CONTACT"
		);
	}
	jint SensorManager::SENSOR_STATUS_UNRELIABLE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_STATUS_UNRELIABLE"
		);
	}
	jint SensorManager::SENSOR_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_TEMPERATURE"
		);
	}
	jint SensorManager::SENSOR_TRICORDER()
	{
		return getStaticField<jint>(
			"android.hardware.SensorManager",
			"SENSOR_TRICORDER"
		);
	}
	jfloat SensorManager::STANDARD_GRAVITY()
	{
		return getStaticField<jfloat>(
			"android.hardware.SensorManager",
			"STANDARD_GRAVITY"
		);
	}
	
	// QJniObject forward
	SensorManager::SensorManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jfloat SensorManager::getAltitude(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"android.hardware.SensorManager",
			"getAltitude",
			"(FF)F",
			arg0,
			arg1
		);
	}
	void SensorManager::getAngleChange(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2)
	{
		callStaticMethod<void>(
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
		return callStaticMethod<jfloat>(
			"android.hardware.SensorManager",
			"getInclination",
			"([F)F",
			arg0
		);
	}
	jfloatArray SensorManager::getOrientation(jfloatArray arg0, jfloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.hardware.SensorManager",
			"getOrientation",
			"([F[F)[F",
			arg0,
			arg1
		).object<jfloatArray>();
	}
	void SensorManager::getQuaternionFromVector(jfloatArray arg0, jfloatArray arg1)
	{
		callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getQuaternionFromVector",
			"([F[F)V",
			arg0,
			arg1
		);
	}
	jboolean SensorManager::getRotationMatrix(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2, jfloatArray arg3)
	{
		return callStaticMethod<jboolean>(
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
		callStaticMethod<void>(
			"android.hardware.SensorManager",
			"getRotationMatrixFromVector",
			"([F[F)V",
			arg0,
			arg1
		);
	}
	jboolean SensorManager::remapCoordinateSystem(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		return callStaticMethod<jboolean>(
			"android.hardware.SensorManager",
			"remapCoordinateSystem",
			"([FII[F)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean SensorManager::cancelTriggerSensor(android::hardware::TriggerEventListener arg0, android::hardware::Sensor arg1)
	{
		return callMethod<jboolean>(
			"cancelTriggerSensor",
			"(Landroid/hardware/TriggerEventListener;Landroid/hardware/Sensor;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::hardware::SensorDirectChannel SensorManager::createDirectChannel(android::hardware::HardwareBuffer arg0)
	{
		return callObjectMethod(
			"createDirectChannel",
			"(Landroid/hardware/HardwareBuffer;)Landroid/hardware/SensorDirectChannel;",
			arg0.object()
		);
	}
	android::hardware::SensorDirectChannel SensorManager::createDirectChannel(android::os::MemoryFile arg0)
	{
		return callObjectMethod(
			"createDirectChannel",
			"(Landroid/os/MemoryFile;)Landroid/hardware/SensorDirectChannel;",
			arg0.object()
		);
	}
	jboolean SensorManager::flush(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"flush",
			"(Landroid/hardware/SensorEventListener;)Z",
			arg0.object()
		);
	}
	android::hardware::Sensor SensorManager::getDefaultSensor(jint arg0)
	{
		return callObjectMethod(
			"getDefaultSensor",
			"(I)Landroid/hardware/Sensor;",
			arg0
		);
	}
	android::hardware::Sensor SensorManager::getDefaultSensor(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"getDefaultSensor",
			"(IZ)Landroid/hardware/Sensor;",
			arg0,
			arg1
		);
	}
	__JniBaseClass SensorManager::getDynamicSensorList(jint arg0)
	{
		return callObjectMethod(
			"getDynamicSensorList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass SensorManager::getSensorList(jint arg0)
	{
		return callObjectMethod(
			"getSensorList",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jint SensorManager::getSensors()
	{
		return callMethod<jint>(
			"getSensors",
			"()I"
		);
	}
	jboolean SensorManager::isDynamicSensorDiscoverySupported()
	{
		return callMethod<jboolean>(
			"isDynamicSensorDiscoverySupported",
			"()Z"
		);
	}
	void SensorManager::registerDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0)
	{
		callMethod<void>(
			"registerDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;)V",
			arg0.object()
		);
	}
	void SensorManager::registerDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean SensorManager::registerListener(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorListener;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean SensorManager::registerListener(__JniBaseClass arg0, android::hardware::Sensor arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean SensorManager::registerListener(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"registerListener",
			"(Landroid/hardware/SensorListener;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean SensorManager::registerListener(__JniBaseClass arg0, android::hardware::Sensor arg1, jint arg2, android::os::Handler arg3)
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
	jboolean SensorManager::registerListener(__JniBaseClass arg0, android::hardware::Sensor arg1, jint arg2, jint arg3)
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
	jboolean SensorManager::registerListener(__JniBaseClass arg0, android::hardware::Sensor arg1, jint arg2, jint arg3, android::os::Handler arg4)
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
	jboolean SensorManager::requestTriggerSensor(android::hardware::TriggerEventListener arg0, android::hardware::Sensor arg1)
	{
		return callMethod<jboolean>(
			"requestTriggerSensor",
			"(Landroid/hardware/TriggerEventListener;Landroid/hardware/Sensor;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void SensorManager::unregisterDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0)
	{
		callMethod<void>(
			"unregisterDynamicSensorCallback",
			"(Landroid/hardware/SensorManager$DynamicSensorCallback;)V",
			arg0.object()
		);
	}
	void SensorManager::unregisterListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorEventListener;)V",
			arg0.object()
		);
	}
	void SensorManager::unregisterListener(__JniBaseClass arg0, android::hardware::Sensor arg1)
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SensorManager::unregisterListener(__JniBaseClass arg0, jint arg1)
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/hardware/SensorListener;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware

