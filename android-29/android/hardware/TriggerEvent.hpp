#pragma once

#ifndef ANDROID_HARDWARE_TRIGGEREVENT
#define ANDROID_HARDWARE_TRIGGEREVENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class Sensor;
}

namespace __jni_impl::android::hardware
{
	class TriggerEvent : public __JniBaseClass
	{
	public:
		// Fields
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
	QAndroidJniObject TriggerEvent::sensor()
	{
		return __thiz.getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jlong TriggerEvent::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp"
		);
	}
	jfloatArray TriggerEvent::values()
	{
		return __thiz.getObjectField(
			"values",
			"[F"
		).object<jfloatArray>();
	}
	
	// Constructors
	void TriggerEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.TriggerEvent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class TriggerEvent : public __jni_impl::android::hardware::TriggerEvent
	{
	public:
		TriggerEvent(QAndroidJniObject obj) { __thiz = obj; }
		TriggerEvent()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_TRIGGEREVENT

