#include "./ViewPropertyAnimator.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewPropertyAnimator::ViewPropertyAnimator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::ViewPropertyAnimator ViewPropertyAnimator::alpha(jfloat arg0)
	{
		return callObjectMethod(
			"alpha",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::alphaBy(jfloat arg0)
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
	__JniBaseClass ViewPropertyAnimator::getInterpolator()
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
	android::view::ViewPropertyAnimator ViewPropertyAnimator::rotation(jfloat arg0)
	{
		return callObjectMethod(
			"rotation",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationBy(jfloat arg0)
	{
		return callObjectMethod(
			"rotationBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationX(jfloat arg0)
	{
		return callObjectMethod(
			"rotationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationXBy(jfloat arg0)
	{
		return callObjectMethod(
			"rotationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationY(jfloat arg0)
	{
		return callObjectMethod(
			"rotationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationYBy(jfloat arg0)
	{
		return callObjectMethod(
			"rotationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleX(jfloat arg0)
	{
		return callObjectMethod(
			"scaleX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleXBy(jfloat arg0)
	{
		return callObjectMethod(
			"scaleXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleY(jfloat arg0)
	{
		return callObjectMethod(
			"scaleY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleYBy(jfloat arg0)
	{
		return callObjectMethod(
			"scaleYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::setInterpolator(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::setListener(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setListener",
			"(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::setStartDelay(jlong arg0)
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::setUpdateListener(__JniBaseClass arg0)
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
	android::view::ViewPropertyAnimator ViewPropertyAnimator::translationX(jfloat arg0)
	{
		return callObjectMethod(
			"translationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::translationXBy(jfloat arg0)
	{
		return callObjectMethod(
			"translationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::translationY(jfloat arg0)
	{
		return callObjectMethod(
			"translationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::translationYBy(jfloat arg0)
	{
		return callObjectMethod(
			"translationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::translationZ(jfloat arg0)
	{
		return callObjectMethod(
			"translationZ",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::translationZBy(jfloat arg0)
	{
		return callObjectMethod(
			"translationZBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::withEndAction(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"withEndAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::withLayer()
	{
		return callObjectMethod(
			"withLayer",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::withStartAction(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"withStartAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::x(jfloat arg0)
	{
		return callObjectMethod(
			"x",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::xBy(jfloat arg0)
	{
		return callObjectMethod(
			"xBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::y(jfloat arg0)
	{
		return callObjectMethod(
			"y",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::yBy(jfloat arg0)
	{
		return callObjectMethod(
			"yBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::z(jfloat arg0)
	{
		return callObjectMethod(
			"z",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	android::view::ViewPropertyAnimator ViewPropertyAnimator::zBy(jfloat arg0)
	{
		return callObjectMethod(
			"zBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
} // namespace android::view

