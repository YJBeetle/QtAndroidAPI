#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "./MotionEvent.hpp"
#include "./GestureDetector.hpp"

namespace android::view
{
	// Fields
	
	GestureDetector::GestureDetector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GestureDetector::GestureDetector(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.__jniObject().object()
		);
	}
	GestureDetector::GestureDetector(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	GestureDetector::GestureDetector(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	GestureDetector::GestureDetector(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	GestureDetector::GestureDetector(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	jboolean GestureDetector::isLongpressEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isLongpressEnabled",
			"()Z"
		);
	}
	jboolean GestureDetector::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void GestureDetector::setContextClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setContextClickListener",
			"(Landroid/view/GestureDetector$OnContextClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureDetector::setIsLongpressEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsLongpressEnabled",
			"(Z)V",
			arg0
		);
	}
	void GestureDetector::setOnDoubleTapListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDoubleTapListener",
			"(Landroid/view/GestureDetector$OnDoubleTapListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

