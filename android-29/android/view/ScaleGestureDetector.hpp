#pragma once

#ifndef ANDROID_VIEW_SCALEGESTUREDETECTOR
#define ANDROID_VIEW_SCALEGESTUREDETECTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::view
{
	class ScaleGestureDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2);
		
		// Methods
		jlong getEventTime();
		jfloat getScaleFactor();
		jboolean isQuickScaleEnabled();
		void setStylusScaleEnabled(jboolean arg0);
		jboolean isStylusScaleEnabled();
		jboolean isInProgress();
		jfloat getFocusX();
		jfloat getFocusY();
		void setQuickScaleEnabled(jboolean arg0);
		jfloat getCurrentSpan();
		jfloat getCurrentSpanX();
		jfloat getCurrentSpanY();
		jfloat getPreviousSpan();
		jfloat getPreviousSpanX();
		jfloat getPreviousSpanY();
		jlong getTimeDelta();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "MotionEvent.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ScaleGestureDetector::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ScaleGestureDetector::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	jlong ScaleGestureDetector::getEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getEventTime",
			"()J");
	}
	jfloat ScaleGestureDetector::getScaleFactor()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleFactor",
			"()F");
	}
	jboolean ScaleGestureDetector::isQuickScaleEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isQuickScaleEnabled",
			"()Z");
	}
	void ScaleGestureDetector::setStylusScaleEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStylusScaleEnabled",
			"(Z)V",
			arg0);
	}
	jboolean ScaleGestureDetector::isStylusScaleEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isStylusScaleEnabled",
			"()Z");
	}
	jboolean ScaleGestureDetector::isInProgress()
	{
		return __thiz.callMethod<jboolean>(
			"isInProgress",
			"()Z");
	}
	jfloat ScaleGestureDetector::getFocusX()
	{
		return __thiz.callMethod<jfloat>(
			"getFocusX",
			"()F");
	}
	jfloat ScaleGestureDetector::getFocusY()
	{
		return __thiz.callMethod<jfloat>(
			"getFocusY",
			"()F");
	}
	void ScaleGestureDetector::setQuickScaleEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setQuickScaleEnabled",
			"(Z)V",
			arg0);
	}
	jfloat ScaleGestureDetector::getCurrentSpan()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrentSpan",
			"()F");
	}
	jfloat ScaleGestureDetector::getCurrentSpanX()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrentSpanX",
			"()F");
	}
	jfloat ScaleGestureDetector::getCurrentSpanY()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrentSpanY",
			"()F");
	}
	jfloat ScaleGestureDetector::getPreviousSpan()
	{
		return __thiz.callMethod<jfloat>(
			"getPreviousSpan",
			"()F");
	}
	jfloat ScaleGestureDetector::getPreviousSpanX()
	{
		return __thiz.callMethod<jfloat>(
			"getPreviousSpanX",
			"()F");
	}
	jfloat ScaleGestureDetector::getPreviousSpanY()
	{
		return __thiz.callMethod<jfloat>(
			"getPreviousSpanY",
			"()F");
	}
	jlong ScaleGestureDetector::getTimeDelta()
	{
		return __thiz.callMethod<jlong>(
			"getTimeDelta",
			"()J");
	}
	jboolean ScaleGestureDetector::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ScaleGestureDetector : public __jni_impl::android::view::ScaleGestureDetector
	{
	public:
		ScaleGestureDetector(QAndroidJniObject obj) { __thiz = obj; }
		ScaleGestureDetector(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ScaleGestureDetector(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SCALEGESTUREDETECTOR

