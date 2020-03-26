#pragma once

#ifndef ANDROID_VIEW_VIEWPROPERTYANIMATOR
#define ANDROID_VIEW_VIEWPROPERTYANIMATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view
{
	class ViewPropertyAnimator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void start();
		QAndroidJniObject x(jfloat arg0);
		QAndroidJniObject z(jfloat arg0);
		QAndroidJniObject y(jfloat arg0);
		jlong getDuration();
		void cancel();
		QAndroidJniObject rotation(jfloat arg0);
		QAndroidJniObject alpha(jfloat arg0);
		QAndroidJniObject rotationY(jfloat arg0);
		QAndroidJniObject rotationX(jfloat arg0);
		QAndroidJniObject scaleX(jfloat arg0);
		QAndroidJniObject scaleY(jfloat arg0);
		QAndroidJniObject translationX(jfloat arg0);
		QAndroidJniObject translationY(jfloat arg0);
		QAndroidJniObject translationZ(jfloat arg0);
		QAndroidJniObject xBy(jfloat arg0);
		QAndroidJniObject yBy(jfloat arg0);
		QAndroidJniObject zBy(jfloat arg0);
		QAndroidJniObject rotationBy(jfloat arg0);
		QAndroidJniObject rotationXBy(jfloat arg0);
		QAndroidJniObject rotationYBy(jfloat arg0);
		QAndroidJniObject translationXBy(jfloat arg0);
		QAndroidJniObject translationYBy(jfloat arg0);
		QAndroidJniObject translationZBy(jfloat arg0);
		QAndroidJniObject scaleXBy(jfloat arg0);
		QAndroidJniObject scaleYBy(jfloat arg0);
		QAndroidJniObject alphaBy(jfloat arg0);
		QAndroidJniObject withLayer();
		QAndroidJniObject withStartAction(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject withEndAction(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setDuration(jlong arg0);
		QAndroidJniObject setStartDelay(jlong arg0);
		jlong getStartDelay();
		QAndroidJniObject setInterpolator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInterpolator();
		QAndroidJniObject setUpdateListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::view

#include "View.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewPropertyAnimator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewPropertyAnimator",
			"(V)V");
	}
	
	// Methods
	void ViewPropertyAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::x(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"x",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::z(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"z",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::y(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"y",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	jlong ViewPropertyAnimator::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	void ViewPropertyAnimator::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotation(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotation",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::alpha(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"alpha",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationY(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationX(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleX(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleY(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationX(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationY(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationZ(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationZ",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::xBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"xBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::yBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"yBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::zBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"zBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationXBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationYBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationXBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationYBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationZBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationZBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleXBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleYBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::alphaBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"alphaBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withLayer()
	{
		return __thiz.callObjectMethod(
			"withLayer",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withStartAction(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withStartAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withEndAction(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withEndAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setListener",
			"(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setStartDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setStartDelay",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	jlong ViewPropertyAnimator::getStartDelay()
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewPropertyAnimator : public __jni_impl::android::view::ViewPropertyAnimator
	{
	public:
		ViewPropertyAnimator(QAndroidJniObject obj) { __thiz = obj; }
		ViewPropertyAnimator()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWPROPERTYANIMATOR

