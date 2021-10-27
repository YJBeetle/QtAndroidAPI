#pragma once

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
		jfloat getCurrentSpan();
		jfloat getCurrentSpanX();
		jfloat getCurrentSpanY();
		jlong getEventTime();
		jfloat getFocusX();
		jfloat getFocusY();
		jfloat getPreviousSpan();
		jfloat getPreviousSpanX();
		jfloat getPreviousSpanY();
		jfloat getScaleFactor();
		jlong getTimeDelta();
		jboolean isInProgress();
		jboolean isQuickScaleEnabled();
		jboolean isStylusScaleEnabled();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void setQuickScaleEnabled(jboolean arg0);
		void setStylusScaleEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "./MotionEvent.hpp"

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
			arg1.__jniObject().object()
		);
	}
	void ScaleGestureDetector::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.ScaleGestureDetector",
			"(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jfloat ScaleGestureDetector::getCurrentSpan()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrentSpan",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getCurrentSpanX()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrentSpanX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getCurrentSpanY()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrentSpanY",
			"()F"
		);
	}
	jlong ScaleGestureDetector::getEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jfloat ScaleGestureDetector::getFocusX()
	{
		return __thiz.callMethod<jfloat>(
			"getFocusX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getFocusY()
	{
		return __thiz.callMethod<jfloat>(
			"getFocusY",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpan()
	{
		return __thiz.callMethod<jfloat>(
			"getPreviousSpan",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpanX()
	{
		return __thiz.callMethod<jfloat>(
			"getPreviousSpanX",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getPreviousSpanY()
	{
		return __thiz.callMethod<jfloat>(
			"getPreviousSpanY",
			"()F"
		);
	}
	jfloat ScaleGestureDetector::getScaleFactor()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleFactor",
			"()F"
		);
	}
	jlong ScaleGestureDetector::getTimeDelta()
	{
		return __thiz.callMethod<jlong>(
			"getTimeDelta",
			"()J"
		);
	}
	jboolean ScaleGestureDetector::isInProgress()
	{
		return __thiz.callMethod<jboolean>(
			"isInProgress",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::isQuickScaleEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isQuickScaleEnabled",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::isStylusScaleEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isStylusScaleEnabled",
			"()Z"
		);
	}
	jboolean ScaleGestureDetector::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ScaleGestureDetector::setQuickScaleEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setQuickScaleEnabled",
			"(Z)V",
			arg0
		);
	}
	void ScaleGestureDetector::setStylusScaleEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStylusScaleEnabled",
			"(Z)V",
			arg0
		);
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

