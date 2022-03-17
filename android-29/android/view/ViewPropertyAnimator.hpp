#pragma once

#include "./View.def.hpp"
#include "./ViewPropertyAnimator.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::alpha(jfloat arg0) const
	{
		return callObjectMethod(
			"alpha",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::alphaBy(jfloat arg0) const
	{
		return callObjectMethod(
			"alphaBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline void ViewPropertyAnimator::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jlong ViewPropertyAnimator::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline JObject ViewPropertyAnimator::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	inline jlong ViewPropertyAnimator::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::rotation(jfloat arg0) const
	{
		return callObjectMethod(
			"rotation",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationBy(jfloat arg0) const
	{
		return callObjectMethod(
			"rotationBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationX(jfloat arg0) const
	{
		return callObjectMethod(
			"rotationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationXBy(jfloat arg0) const
	{
		return callObjectMethod(
			"rotationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationY(jfloat arg0) const
	{
		return callObjectMethod(
			"rotationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::rotationYBy(jfloat arg0) const
	{
		return callObjectMethod(
			"rotationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleX(jfloat arg0) const
	{
		return callObjectMethod(
			"scaleX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleXBy(jfloat arg0) const
	{
		return callObjectMethod(
			"scaleXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleY(jfloat arg0) const
	{
		return callObjectMethod(
			"scaleY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::scaleYBy(jfloat arg0) const
	{
		return callObjectMethod(
			"scaleYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::setInterpolator(JObject arg0) const
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::setListener(JObject arg0) const
	{
		return callObjectMethod(
			"setListener",
			"(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::setStartDelay(jlong arg0) const
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::setUpdateListener(JObject arg0) const
	{
		return callObjectMethod(
			"setUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	inline void ViewPropertyAnimator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::translationX(jfloat arg0) const
	{
		return callObjectMethod(
			"translationX",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::translationXBy(jfloat arg0) const
	{
		return callObjectMethod(
			"translationXBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::translationY(jfloat arg0) const
	{
		return callObjectMethod(
			"translationY",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::translationYBy(jfloat arg0) const
	{
		return callObjectMethod(
			"translationYBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::translationZ(jfloat arg0) const
	{
		return callObjectMethod(
			"translationZ",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::translationZBy(jfloat arg0) const
	{
		return callObjectMethod(
			"translationZBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::withEndAction(JObject arg0) const
	{
		return callObjectMethod(
			"withEndAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::withLayer() const
	{
		return callObjectMethod(
			"withLayer",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::withStartAction(JObject arg0) const
	{
		return callObjectMethod(
			"withStartAction",
			"(Ljava/lang/Runnable;)Landroid/view/ViewPropertyAnimator;",
			arg0.object()
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::x(jfloat arg0) const
	{
		return callObjectMethod(
			"x",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::xBy(jfloat arg0) const
	{
		return callObjectMethod(
			"xBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::y(jfloat arg0) const
	{
		return callObjectMethod(
			"y",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::yBy(jfloat arg0) const
	{
		return callObjectMethod(
			"yBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::z(jfloat arg0) const
	{
		return callObjectMethod(
			"z",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
	inline android::view::ViewPropertyAnimator ViewPropertyAnimator::zBy(jfloat arg0) const
	{
		return callObjectMethod(
			"zBy",
			"(F)Landroid/view/ViewPropertyAnimator;",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
