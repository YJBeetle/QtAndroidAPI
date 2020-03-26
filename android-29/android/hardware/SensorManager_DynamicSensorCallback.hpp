#pragma once

#ifndef ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK
#define ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class Sensor;
}

namespace __jni_impl::android::hardware
{
	class SensorManager_DynamicSensorCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDynamicSensorConnected(__jni_impl::android::hardware::Sensor arg0);
		void onDynamicSensorDisconnected(__jni_impl::android::hardware::Sensor arg0);
	};
} // namespace __jni_impl::android::hardware

#include "Sensor.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	
	// Constructors
	void SensorManager_DynamicSensorCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorManager$DynamicSensorCallback",
			"()V");
	}
	
	// Methods
	void SensorManager_DynamicSensorCallback::onDynamicSensorConnected(__jni_impl::android::hardware::Sensor arg0)
	{
		__thiz.callMethod<void>(
			"onDynamicSensorConnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorManager_DynamicSensorCallback::onDynamicSensorDisconnected(__jni_impl::android::hardware::Sensor arg0)
	{
		__thiz.callMethod<void>(
			"onDynamicSensorDisconnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class SensorManager_DynamicSensorCallback : public __jni_impl::android::hardware::SensorManager_DynamicSensorCallback
	{
	public:
		SensorManager_DynamicSensorCallback(QAndroidJniObject obj) { __thiz = obj; }
		SensorManager_DynamicSensorCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK

