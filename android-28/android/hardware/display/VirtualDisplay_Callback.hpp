#pragma once

#include "./VirtualDisplay_Callback.def.hpp"

namespace android::hardware::display
{
	// Fields
	
	// Constructors
	inline VirtualDisplay_Callback::VirtualDisplay_Callback()
		: JObject(
			"android.hardware.display.VirtualDisplay$Callback",
			"()V"
		) {}
	
	// Methods
	inline void VirtualDisplay_Callback::onPaused() const
	{
		callMethod<void>(
			"onPaused",
			"()V"
		);
	}
	inline void VirtualDisplay_Callback::onResumed() const
	{
		callMethod<void>(
			"onResumed",
			"()V"
		);
	}
	inline void VirtualDisplay_Callback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::hardware::display

// Base class headers

