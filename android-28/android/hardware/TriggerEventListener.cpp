#include "./TriggerEvent.hpp"
#include "./TriggerEventListener.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	TriggerEventListener::TriggerEventListener()
		: JObject(
			"android.hardware.TriggerEventListener",
			"()V"
		) {}
	
	// Methods
	void TriggerEventListener::onTrigger(android::hardware::TriggerEvent arg0) const
	{
		callMethod<void>(
			"onTrigger",
			"(Landroid/hardware/TriggerEvent;)V",
			arg0.object()
		);
	}
} // namespace android::hardware

