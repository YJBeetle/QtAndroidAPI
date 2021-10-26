#pragma once

#ifndef ANDROID_HARDWARE_TRIGGEREVENTLISTENER
#define ANDROID_HARDWARE_TRIGGEREVENTLISTENER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class TriggerEvent;
}

namespace __jni_impl::android::hardware
{
	class TriggerEventListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onTrigger(__jni_impl::android::hardware::TriggerEvent arg0);
	};
} // namespace __jni_impl::android::hardware

#include "TriggerEvent.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	
	// Constructors
	void TriggerEventListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.TriggerEventListener",
			"()V"
		);
	}
	
	// Methods
	void TriggerEventListener::onTrigger(__jni_impl::android::hardware::TriggerEvent arg0)
	{
		__thiz.callMethod<void>(
			"onTrigger",
			"(Landroid/hardware/TriggerEvent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class TriggerEventListener : public __jni_impl::android::hardware::TriggerEventListener
	{
	public:
		TriggerEventListener(QAndroidJniObject obj) { __thiz = obj; }
		TriggerEventListener()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_TRIGGEREVENTLISTENER

