#pragma once

#include "./TriggerEvent.def.hpp"
#include "./TriggerEventListener.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	inline TriggerEventListener::TriggerEventListener()
		: JObject(
			"android.hardware.TriggerEventListener",
			"()V"
		) {}
	
	// Methods
	inline void TriggerEventListener::onTrigger(android::hardware::TriggerEvent arg0) const
	{
		callMethod<void>(
			"onTrigger",
			"(Landroid/hardware/TriggerEvent;)V",
			arg0.object()
		);
	}
} // namespace android::hardware

// Base class headers

