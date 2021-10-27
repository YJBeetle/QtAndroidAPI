#include "./View.hpp"
#include "./ViewPropertyAnimator.hpp"

namespace android::view
{
	// Fields
	
	ViewPropertyAnimator::ViewPropertyAnimator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ViewPropertyAnimator::alpha(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"alpha",
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
	void ViewPropertyAnimator::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jlong ViewPropertyAnimator::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jlong ViewPropertyAnimator::getStartDelay()
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"()J"
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
	QAndroidJniObject ViewPropertyAnimator::rotationBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationBy",
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
	QAndroidJniObject ViewPropertyAnimator::rotationXBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationXBy",
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
	QAndroidJniObject ViewPropertyAnimator::rotationYBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"rotationYBy",
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
	QAndroidJniObject ViewPropertyAnimator::scaleXBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleXBy",
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
	QAndroidJniObject ViewPropertyAnimator::scaleYBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
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
	QAndroidJniObject ViewPropertyAnimator::setInterpolator(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setListener",
			"(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
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
	QAndroidJniObject ViewPropertyAnimator::setUpdateListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
	void ViewPropertyAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
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
	QAndroidJniObject ViewPropertyAnimator::translationXBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationXBy",
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
	QAndroidJniObject ViewPropertyAnimator::translationYBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationYBy",
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
	QAndroidJniObject ViewPropertyAnimator::translationZBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"translationZBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withEndAction(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withEndAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withLayer()
	{
		return __thiz.callObjectMethod(
			"withLayer",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withStartAction(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withStartAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.__jniObject().object()
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
	QAndroidJniObject ViewPropertyAnimator::xBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"xBy",
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
	QAndroidJniObject ViewPropertyAnimator::yBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"yBy",
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
	QAndroidJniObject ViewPropertyAnimator::zBy(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"zBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
} // namespace android::view

