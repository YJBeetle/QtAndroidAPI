#pragma once

#ifndef ANDROID_WIDGET_SCROLLER
#define ANDROID_WIDGET_SCROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class Scroller : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jint getDuration();
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		void setFriction(jfloat arg0);
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
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3);
		void abortAnimation();
		jint timePassed();
		void extendDuration(jint arg0);
		void setFinalX(jint arg0);
		void setFinalY(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Scroller::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Scroller::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Scroller::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint Scroller::getDuration()
	{
		return __thiz.callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	void Scroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
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
	void Scroller::setFriction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	jboolean Scroller::isFinished()
	{
		return __thiz.callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	void Scroller::forceFinished(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	jint Scroller::getCurrX()
	{
		return __thiz.callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	jint Scroller::getCurrY()
	{
		return __thiz.callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	jfloat Scroller::getCurrVelocity()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	jint Scroller::getStartX()
	{
		return __thiz.callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	jint Scroller::getStartY()
	{
		return __thiz.callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	jint Scroller::getFinalX()
	{
		return __thiz.callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	jint Scroller::getFinalY()
	{
		return __thiz.callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	jboolean Scroller::computeScrollOffset()
	{
		return __thiz.callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Scroller::abortAnimation()
	{
		__thiz.callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	jint Scroller::timePassed()
	{
		return __thiz.callMethod<jint>(
			"timePassed",
			"()I"
		);
	}
	void Scroller::extendDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"extendDuration",
			"(I)V",
			arg0
		);
	}
	void Scroller::setFinalX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFinalX",
			"(I)V",
			arg0
		);
	}
	void Scroller::setFinalY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFinalY",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Scroller : public __jni_impl::android::widget::Scroller
	{
	public:
		Scroller(QAndroidJniObject obj) { __thiz = obj; }
		Scroller(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Scroller(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scroller(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SCROLLER

