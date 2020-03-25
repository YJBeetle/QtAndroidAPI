#pragma once

#ifndef ANDROID_VIEW_GESTUREDETECTOR_SIMPLEONGESTURELISTENER
#define ANDROID_VIEW_GESTUREDETECTOR_SIMPLEONGESTURELISTENER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::view
{
	class GestureDetector_SimpleOnGestureListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean onContextClick(__jni_impl::android::view::MotionEvent arg0);
		jboolean onDoubleTap(__jni_impl::android::view::MotionEvent arg0);
		jboolean onDoubleTapEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onSingleTapConfirmed(__jni_impl::android::view::MotionEvent arg0);
		jboolean onDown(__jni_impl::android::view::MotionEvent arg0);
		void onShowPress(__jni_impl::android::view::MotionEvent arg0);
		jboolean onSingleTapUp(__jni_impl::android::view::MotionEvent arg0);
		jboolean onScroll(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
		void onLongPress(__jni_impl::android::view::MotionEvent arg0);
		jboolean onFling(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
	};
} // namespace __jni_impl::android::view

#include "MotionEvent.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void GestureDetector_SimpleOnGestureListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector$SimpleOnGestureListener",
			"()V");
	}
	
	// Methods
	jboolean GestureDetector_SimpleOnGestureListener::onContextClick(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextClick",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDoubleTap(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDoubleTap",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDoubleTapEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDoubleTapEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean GestureDetector_SimpleOnGestureListener::onSingleTapConfirmed(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSingleTapConfirmed",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean GestureDetector_SimpleOnGestureListener::onDown(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDown",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void GestureDetector_SimpleOnGestureListener::onShowPress(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onShowPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object());
	}
	jboolean GestureDetector_SimpleOnGestureListener::onSingleTapUp(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSingleTapUp",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean GestureDetector_SimpleOnGestureListener::onScroll(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onScroll",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void GestureDetector_SimpleOnGestureListener::onLongPress(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onLongPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object());
	}
	jboolean GestureDetector_SimpleOnGestureListener::onFling(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onFling",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class GestureDetector_SimpleOnGestureListener : public __jni_impl::android::view::GestureDetector_SimpleOnGestureListener
	{
	public:
		GestureDetector_SimpleOnGestureListener(QAndroidJniObject obj) { __thiz = obj; }
		GestureDetector_SimpleOnGestureListener()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_GESTUREDETECTOR_SIMPLEONGESTURELISTENER

