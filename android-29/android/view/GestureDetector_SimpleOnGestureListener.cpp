#include "./MotionEvent.hpp"
#include "./GestureDetector_SimpleOnGestureListener.hpp"

namespace android::view
{
	// Fields
	
	GestureDetector_SimpleOnGestureListener::GestureDetector_SimpleOnGestureListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GestureDetector_SimpleOnGestureListener::GestureDetector_SimpleOnGestureListener()
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector$SimpleOnGestureListener",
			"()V"
		);
	}
	
	// Methods
	jboolean GestureDetector_SimpleOnGestureListener::onContextClick(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextClick",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDoubleTap(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDoubleTap",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDoubleTapEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDoubleTapEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDown(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDown",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onFling",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void GestureDetector_SimpleOnGestureListener::onLongPress(android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onLongPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onScroll",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void GestureDetector_SimpleOnGestureListener::onShowPress(android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onShowPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onSingleTapConfirmed(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSingleTapConfirmed",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector_SimpleOnGestureListener::onSingleTapUp(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSingleTapUp",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

