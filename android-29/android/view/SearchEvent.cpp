#include "./InputDevice.hpp"
#include "./SearchEvent.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	SearchEvent::SearchEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SearchEvent::SearchEvent(android::view::InputDevice arg0)
		: JObject(
			"android.view.SearchEvent",
			"(Landroid/view/InputDevice;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::InputDevice SearchEvent::getInputDevice() const
	{
		return callObjectMethod(
			"getInputDevice",
			"()Landroid/view/InputDevice;"
		);
	}
} // namespace android::view

