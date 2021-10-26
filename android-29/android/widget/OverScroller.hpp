#pragma once

#ifndef ANDROID_WIDGET_OVERSCROLLER
#define ANDROID_WIDGET_OVERSCROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class OverScroller : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jfloat arg2, jfloat arg3, jboolean arg4);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jfloat arg2, jfloat arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean isFinished();
		void forceFinished(jboolean arg0);
		jint getCurrX();
		jint getCurrY();
		jfloat getCurrVelocity();
		jint getStartX();
		jint getStartY();
		jint getFinalX();
		jint getFinalY();
		jboolean computeScrollOffset();
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3);
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		jboolean springBack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void notifyHorizontalEdgeReached(jint arg0, jint arg1, jint arg2);
		void notifyVerticalEdgeReached(jint arg0, jint arg1, jint arg2);
		jboolean isOverScrolled();
		void abortAnimation();
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		void setFriction(jfloat arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void OverScroller::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jfloat arg2, jfloat arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FFZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	void OverScroller::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FF)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void OverScroller::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void OverScroller::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean OverScroller::isFinished()
	{
		return __thiz.callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	void OverScroller::forceFinished(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	jint OverScroller::getCurrX()
	{
		return __thiz.callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	jint OverScroller::getCurrY()
	{
		return __thiz.callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	jfloat OverScroller::getCurrVelocity()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	jint OverScroller::getStartX()
	{
		return __thiz.callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	jint OverScroller::getStartY()
	{
		return __thiz.callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	jint OverScroller::getFinalX()
	{
		return __thiz.callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	jint OverScroller::getFinalY()
	{
		return __thiz.callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	jboolean OverScroller::computeScrollOffset()
	{
		return __thiz.callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	void OverScroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"startScroll",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void OverScroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"startScroll",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean OverScroller::springBack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jboolean>(
			"springBack",
			"(IIIIII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void OverScroller::notifyHorizontalEdgeReached(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"notifyHorizontalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OverScroller::notifyVerticalEdgeReached(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"notifyVerticalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean OverScroller::isOverScrolled()
	{
		return __thiz.callMethod<jboolean>(
			"isOverScrolled",
			"()Z"
		);
	}
	void OverScroller::abortAnimation()
	{
		__thiz.callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	void OverScroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"fling",
			"(IIIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		);
	}
	void OverScroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"fling",
			"(IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	void OverScroller::setFriction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class OverScroller : public __jni_impl::android::widget::OverScroller
	{
	public:
		OverScroller(QAndroidJniObject obj) { __thiz = obj; }
		OverScroller(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jfloat arg2, jfloat arg3, jboolean arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		OverScroller(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		OverScroller(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OverScroller(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_OVERSCROLLER

