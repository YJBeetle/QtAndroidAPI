#include "./MotionEvent.hpp"
#include "./GestureDetector_SimpleOnGestureListener.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	GestureDetector_SimpleOnGestureListener::GestureDetector_SimpleOnGestureListener(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GestureDetector_SimpleOnGestureListener::GestureDetector_SimpleOnGestureListener()
		: JObject(
			"android.view.GestureDetector$SimpleOnGestureListener",
			"()V"
		) {}
	
	// Methods
	jboolean GestureDetector_SimpleOnGestureListener::onContextClick(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onContextClick",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDoubleTap(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onDoubleTap",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDoubleTapEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onDoubleTapEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDown(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onDown",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return callMethod<jboolean>(
			"onFling",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void GestureDetector_SimpleOnGestureListener::onLongPress(android::view::MotionEvent arg0)
	{
		callMethod<void>(
			"onLongPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return callMethod<jboolean>(
			"onScroll",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void GestureDetector_SimpleOnGestureListener::onShowPress(android::view::MotionEvent arg0)
	{
		callMethod<void>(
			"onShowPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onSingleTapConfirmed(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onSingleTapConfirmed",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onSingleTapUp(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onSingleTapUp",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::view

