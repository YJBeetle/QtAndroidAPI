#include "./VirtualDisplay_Callback.hpp"

namespace android::hardware::display
{
	// Fields
	
	// QAndroidJniObject forward
	VirtualDisplay_Callback::VirtualDisplay_Callback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VirtualDisplay_Callback::VirtualDisplay_Callback()
		: __JniBaseClass(
			"android.hardware.display.VirtualDisplay$Callback",
			"()V"
		) {}
	
	// Methods
	void VirtualDisplay_Callback::onPaused()
	{
		callMethod<void>(
			"onPaused",
			"()V"
		);
	}
	void VirtualDisplay_Callback::onResumed()
	{
		callMethod<void>(
			"onResumed",
			"()V"
		);
	}
	void VirtualDisplay_Callback::onStopped()
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::hardware::display

