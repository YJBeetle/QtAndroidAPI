#include "./KeyEvent.hpp"
#include "./KeyEvent_DispatcherState.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	KeyEvent_DispatcherState::KeyEvent_DispatcherState(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyEvent_DispatcherState::KeyEvent_DispatcherState()
		: __JniBaseClass(
			"android.view.KeyEvent$DispatcherState",
			"()V"
		) {}
	
	// Methods
	void KeyEvent_DispatcherState::handleUpEvent(android::view::KeyEvent arg0)
	{
		callMethod<void>(
			"handleUpEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	jboolean KeyEvent_DispatcherState::isTracking(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"isTracking",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void KeyEvent_DispatcherState::performedLongPress(android::view::KeyEvent arg0)
	{
		callMethod<void>(
			"performedLongPress",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	void KeyEvent_DispatcherState::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void KeyEvent_DispatcherState::reset(jobject arg0)
	{
		callMethod<void>(
			"reset",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void KeyEvent_DispatcherState::startTracking(android::view::KeyEvent arg0, jobject arg1)
	{
		callMethod<void>(
			"startTracking",
			"(Landroid/view/KeyEvent;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

