#include "./View.hpp"
#include "./ViewPropertyAnimator.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewPropertyAnimator::ViewPropertyAnimator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ViewPropertyAnimator::alpha(jfloat arg0)
	{
		return callObjectMethod(
			"alpha",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::alphaBy(jfloat arg0)
	{
		return callObjectMethod(
			"alphaBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	void ViewPropertyAnimator::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jlong ViewPropertyAnimator::getDuration()
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jlong ViewPropertyAnimator::getStartDelay()
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotation(jfloat arg0)
	{
		return callObjectMethod(
			"rotation",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationBy(jfloat arg0)
	{
		return callObjectMethod(
			"rotationBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationX(jfloat arg0)
	{
		return callObjectMethod(
			"rotationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationXBy(jfloat arg0)
	{
		return callObjectMethod(
			"rotationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationY(jfloat arg0)
	{
		return callObjectMethod(
			"rotationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::rotationYBy(jfloat arg0)
	{
		return callObjectMethod(
			"rotationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleX(jfloat arg0)
	{
		return callObjectMethod(
			"scaleX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleXBy(jfloat arg0)
	{
		return callObjectMethod(
			"scaleXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleY(jfloat arg0)
	{
		return callObjectMethod(
			"scaleY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::scaleYBy(jfloat arg0)
	{
		return callObjectMethod(
			"scaleYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setInterpolator(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setListener(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setListener",
			"(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setStartDelay(jlong arg0)
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::setUpdateListener(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	void ViewPropertyAnimator::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationX(jfloat arg0)
	{
		return callObjectMethod(
			"translationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationXBy(jfloat arg0)
	{
		return callObjectMethod(
			"translationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationY(jfloat arg0)
	{
		return callObjectMethod(
			"translationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationYBy(jfloat arg0)
	{
		return callObjectMethod(
			"translationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationZ(jfloat arg0)
	{
		return callObjectMethod(
			"translationZ",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::translationZBy(jfloat arg0)
	{
		return callObjectMethod(
			"translationZBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withEndAction(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"withEndAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withLayer()
	{
		return callObjectMethod(
			"withLayer",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	QAndroidJniObject ViewPropertyAnimator::withStartAction(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"withStartAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	QAndroidJniObject ViewPropertyAnimator::x(jfloat arg0)
	{
		return callObjectMethod(
			"x",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::xBy(jfloat arg0)
	{
		return callObjectMethod(
			"xBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::y(jfloat arg0)
	{
		return callObjectMethod(
			"y",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::yBy(jfloat arg0)
	{
		return callObjectMethod(
			"yBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::z(jfloat arg0)
	{
		return callObjectMethod(
			"z",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	QAndroidJniObject ViewPropertyAnimator::zBy(jfloat arg0)
	{
		return callObjectMethod(
			"zBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
} // namespace android::view

