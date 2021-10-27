#include "./VirtualDisplay_Callback.hpp"

namespace android::hardware::display
{
	// Fields
	
	VirtualDisplay_Callback::VirtualDisplay_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VirtualDisplay_Callback::VirtualDisplay_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.display.VirtualDisplay$Callback",
			"()V"
		);
	}
	
	// Methods
	void VirtualDisplay_Callback::onPaused()
	{
		__thiz.callMethod<void>(
			"onPaused",
			"()V"
		);
	}
	void VirtualDisplay_Callback::onResumed()
	{
		__thiz.callMethod<void>(
			"onResumed",
			"()V"
		);
	}
	void VirtualDisplay_Callback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::hardware::display

