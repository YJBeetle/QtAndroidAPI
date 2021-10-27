#include "./KeyEvent.hpp"
#include "./KeyEvent_DispatcherState.hpp"

namespace android::view
{
	// Fields
	
	KeyEvent_DispatcherState::KeyEvent_DispatcherState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyEvent_DispatcherState::KeyEvent_DispatcherState()
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyEvent$DispatcherState",
			"()V"
		);
	}
	
	// Methods
	void KeyEvent_DispatcherState::handleUpEvent(android::view::KeyEvent arg0)
	{
		__thiz.callMethod<void>(
			"handleUpEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean KeyEvent_DispatcherState::isTracking(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isTracking",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyEvent_DispatcherState::performedLongPress(android::view::KeyEvent arg0)
	{
		__thiz.callMethod<void>(
			"performedLongPress",
			"(Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyEvent_DispatcherState::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void KeyEvent_DispatcherState::reset(jobject arg0)
	{
		__thiz.callMethod<void>(
			"reset",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void KeyEvent_DispatcherState::startTracking(android::view::KeyEvent arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"startTracking",
			"(Landroid/view/KeyEvent;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

