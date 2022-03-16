#include "./VirtualDisplay_Callback.hpp"

namespace android::hardware::display
{
	// Fields
	
	// Constructors
	VirtualDisplay_Callback::VirtualDisplay_Callback()
		: JObject(
			"android.hardware.display.VirtualDisplay$Callback",
			"()V"
		) {}
	
	// Methods
	void VirtualDisplay_Callback::onPaused() const
	{
		callMethod<void>(
			"onPaused",
			"()V"
		);
	}
	void VirtualDisplay_Callback::onResumed() const
	{
		callMethod<void>(
			"onResumed",
			"()V"
		);
	}
	void VirtualDisplay_Callback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::hardware::display

