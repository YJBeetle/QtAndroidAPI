#include "./TriggerEvent.hpp"
#include "./TriggerEventListener.hpp"

namespace android::hardware
{
	// Fields
	
	TriggerEventListener::TriggerEventListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TriggerEventListener::TriggerEventListener()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.TriggerEventListener",
			"()V"
		);
	}
	
	// Methods
	void TriggerEventListener::onTrigger(android::hardware::TriggerEvent arg0)
	{
		__thiz.callMethod<void>(
			"onTrigger",
			"(Landroid/hardware/TriggerEvent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware

