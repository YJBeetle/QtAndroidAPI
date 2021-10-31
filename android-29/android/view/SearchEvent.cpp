#include "./InputDevice.hpp"
#include "./SearchEvent.hpp"

namespace android::view
{
	// Fields
	
	SearchEvent::SearchEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SearchEvent::SearchEvent(android::view::InputDevice arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.SearchEvent",
			"(Landroid/view/InputDevice;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SearchEvent::getInputDevice()
	{
		return __thiz.callObjectMethod(
			"getInputDevice",
			"()Landroid/view/InputDevice;"
		);
	}
} // namespace android::view

