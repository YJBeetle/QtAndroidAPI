#pragma once

#include "./Animator.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./LayoutTransition.def.hpp"

namespace android::animation
{
	// Fields
	inline jint LayoutTransition::APPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"APPEARING"
		);
	}
	inline jint LayoutTransition::CHANGE_APPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_APPEARING"
		);
	}
	inline jint LayoutTransition::CHANGE_DISAPPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_DISAPPEARING"
		);
	}
	inline jint LayoutTransition::CHANGING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGING"
		);
	}
	inline jint LayoutTransition::DISAPPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"DISAPPEARING"
		);
	}
	
	// Constructors
	inline LayoutTransition::LayoutTransition()
		: JObject(
			"android.animation.LayoutTransition",
			"()V"
		) {}
	
	// Methods
	inline void LayoutTransition::addChild(android::view::ViewGroup arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LayoutTransition::addTransitionListener(JObject arg0) const
	{
		callMethod<void>(
			"addTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.object()
		);
	}
	inline void LayoutTransition::disableTransitionType(jint arg0) const
	{
		callMethod<void>(
			"disableTransitionType",
			"(I)V",
			arg0
		);
	}
	inline void LayoutTransition::enableTransitionType(jint arg0) const
	{
		callMethod<void>(
			"enableTransitionType",
			"(I)V",
			arg0
		);
	}
	inline android::animation::Animator LayoutTransition::getAnimator(jint arg0) const
	{
		return callObjectMethod(
			"getAnimator",
			"(I)Landroid/animation/Animator;",
			arg0
		);
	}
	inline jlong LayoutTransition::getDuration(jint arg0) const
	{
		return callMethod<jlong>(
			"getDuration",
			"(I)J",
			arg0
		);
	}
	inline JObject LayoutTransition::getInterpolator(jint arg0) const
	{
		return callObjectMethod(
			"getInterpolator",
			"(I)Landroid/animation/TimeInterpolator;",
			arg0
		);
	}
	inline jlong LayoutTransition::getStagger(jint arg0) const
	{
		return callMethod<jlong>(
			"getStagger",
			"(I)J",
			arg0
		);
	}
	inline jlong LayoutTransition::getStartDelay(jint arg0) const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"(I)J",
			arg0
		);
	}
	inline JObject LayoutTransition::getTransitionListeners() const
	{
		return callObjectMethod(
			"getTransitionListeners",
			"()Ljava/util/List;"
		);
	}
	inline void LayoutTransition::hideChild(android::view::ViewGroup arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LayoutTransition::hideChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean LayoutTransition::isChangingLayout() const
	{
		return callMethod<jboolean>(
			"isChangingLayout",
			"()Z"
		);
	}
	inline jboolean LayoutTransition::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	inline jboolean LayoutTransition::isTransitionTypeEnabled(jint arg0) const
	{
		return callMethod<jboolean>(
			"isTransitionTypeEnabled",
			"(I)Z",
			arg0
		);
	}
	inline void LayoutTransition::removeChild(android::view::ViewGroup arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"removeChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LayoutTransition::removeTransitionListener(JObject arg0) const
	{
		callMethod<void>(
			"removeTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.object()
		);
	}
	inline void LayoutTransition::setAnimateParentHierarchy(jboolean arg0) const
	{
		callMethod<void>(
			"setAnimateParentHierarchy",
			"(Z)V",
			arg0
		);
	}
	inline void LayoutTransition::setAnimator(jint arg0, android::animation::Animator arg1) const
	{
		callMethod<void>(
			"setAnimator",
			"(ILandroid/animation/Animator;)V",
			arg0,
			arg1.object()
		);
	}
	inline void LayoutTransition::setDuration(jlong arg0) const
	{
		callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	inline void LayoutTransition::setDuration(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setDuration",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void LayoutTransition::setInterpolator(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setInterpolator",
			"(ILandroid/animation/TimeInterpolator;)V",
			arg0,
			arg1.object()
		);
	}
	inline void LayoutTransition::setStagger(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setStagger",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void LayoutTransition::setStartDelay(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setStartDelay",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void LayoutTransition::showChild(android::view::ViewGroup arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LayoutTransition::showChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::animation

// Base class headers

