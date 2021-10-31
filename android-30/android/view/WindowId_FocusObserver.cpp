#include "./WindowId.hpp"
#include "./WindowId_FocusObserver.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	WindowId_FocusObserver::WindowId_FocusObserver(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WindowId_FocusObserver::WindowId_FocusObserver()
		: __JniBaseClass(
			"android.view.WindowId$FocusObserver",
			"()V"
		) {}
	
	// Methods
	void WindowId_FocusObserver::onFocusGained(android::view::WindowId arg0)
	{
		callMethod<void>(
			"onFocusGained",
			"(Landroid/view/WindowId;)V",
			arg0.object()
		);
	}
	void WindowId_FocusObserver::onFocusLost(android::view::WindowId arg0)
	{
		callMethod<void>(
			"onFocusLost",
			"(Landroid/view/WindowId;)V",
			arg0.object()
		);
	}
} // namespace android::view

