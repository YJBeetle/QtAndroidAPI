#include "./InputDevice.hpp"
#include "./SearchEvent.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	SearchEvent::SearchEvent(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SearchEvent::SearchEvent(android::view::InputDevice arg0)
		: __JniBaseClass(
			"android.view.SearchEvent",
			"(Landroid/view/InputDevice;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::InputDevice SearchEvent::getInputDevice()
	{
		return callObjectMethod(
			"getInputDevice",
			"()Landroid/view/InputDevice;"
		);
	}
} // namespace android::view

