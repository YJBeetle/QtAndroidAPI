#pragma once

#include "../../JIntArray.hpp"
#include "./Animator.def.hpp"
#include "../../JObject.hpp"
#include "./StateListAnimator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline StateListAnimator::StateListAnimator()
		: JObject(
			"android.animation.StateListAnimator",
			"()V"
		) {}
	
	// Methods
	inline void StateListAnimator::addState(JIntArray arg0, android::animation::Animator arg1) const
	{
		callMethod<void>(
			"addState",
			"([ILandroid/animation/Animator;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline android::animation::StateListAnimator StateListAnimator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	inline void StateListAnimator::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
} // namespace android::animation

// Base class headers

