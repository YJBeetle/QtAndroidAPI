#pragma once

#include "./Animator.def.hpp"
#include "./AnimatorListenerAdapter.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline AnimatorListenerAdapter::AnimatorListenerAdapter()
		: JObject(
			"android.animation.AnimatorListenerAdapter",
			"()V"
		) {}
	
	// Methods
	inline void AnimatorListenerAdapter::onAnimationCancel(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationCancel",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	inline void AnimatorListenerAdapter::onAnimationEnd(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationEnd",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	inline void AnimatorListenerAdapter::onAnimationPause(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationPause",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	inline void AnimatorListenerAdapter::onAnimationRepeat(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationRepeat",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	inline void AnimatorListenerAdapter::onAnimationResume(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationResume",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	inline void AnimatorListenerAdapter::onAnimationStart(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationStart",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
} // namespace android::animation

// Base class headers

