#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class Sensor;
}

namespace __jni_impl::android::hardware
{
	class SensorEvent : public __JniBaseClass
	{
	public:
		// Fields
		jint accuracy();
		QAndroidJniObject sensor();
		jlong timestamp();
		jfloatArray values();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::hardware

#include "Sensor.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	jint SensorEvent::accuracy()
	{
		return __thiz.getField<jint>(
			"accuracy"
		);
	}
	QAndroidJniObject SensorEvent::sensor()
	{
		return __thiz.getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jlong SensorEvent::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp"
		);
	}
	jfloatArray SensorEvent::values()
	{
		return __thiz.getObjectField(
			"values",
			"[F"
		).object<jfloatArray>();
	}
	
	// Constructors
	void SensorEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorEvent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class SensorEvent : public __jni_impl::android::hardware::SensorEvent
	{
	public:
		SensorEvent(QAndroidJniObject obj) { __thiz = obj; }
		SensorEvent()
		{
			__constructor();
		}
	};
} // namespace android::hardware

