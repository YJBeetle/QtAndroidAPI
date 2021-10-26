#pragma once

#ifndef ANDROID_HARDWARE_SENSOREVENTCALLBACK
#define ANDROID_HARDWARE_SENSOREVENTCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class SensorEvent;
}
namespace __jni_impl::android::hardware
{
	class Sensor;
}
namespace __jni_impl::android::hardware
{
	class SensorAdditionalInfo;
}

namespace __jni_impl::android::hardware
{
	class SensorEventCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onSensorChanged(__jni_impl::android::hardware::SensorEvent arg0);
		void onAccuracyChanged(__jni_impl::android::hardware::Sensor arg0, jint arg1);
		void onFlushCompleted(__jni_impl::android::hardware::Sensor arg0);
		void onSensorAdditionalInfo(__jni_impl::android::hardware::SensorAdditionalInfo arg0);
	};
} // namespace __jni_impl::android::hardware

#include "SensorEvent.hpp"
#include "Sensor.hpp"
#include "SensorAdditionalInfo.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	
	// Constructors
	void SensorEventCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorEventCallback",
			"()V"
		);
	}
	
	// Methods
	void SensorEventCallback::onSensorChanged(__jni_impl::android::hardware::SensorEvent arg0)
	{
		__thiz.callMethod<void>(
			"onSensorChanged",
			"(Landroid/hardware/SensorEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorEventCallback::onAccuracyChanged(__jni_impl::android::hardware::Sensor arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onAccuracyChanged",
			"(Landroid/hardware/Sensor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SensorEventCallback::onFlushCompleted(__jni_impl::android::hardware::Sensor arg0)
	{
		__thiz.callMethod<void>(
			"onFlushCompleted",
			"(Landroid/hardware/Sensor;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorEventCallback::onSensorAdditionalInfo(__jni_impl::android::hardware::SensorAdditionalInfo arg0)
	{
		__thiz.callMethod<void>(
			"onSensorAdditionalInfo",
			"(Landroid/hardware/SensorAdditionalInfo;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class SensorEventCallback : public __jni_impl::android::hardware::SensorEventCallback
	{
	public:
		SensorEventCallback(QAndroidJniObject obj) { __thiz = obj; }
		SensorEventCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_SENSOREVENTCALLBACK

