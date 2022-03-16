#pragma once

#include "./TimeAnimator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline TimeAnimator::TimeAnimator()
		: android::animation::ValueAnimator(
			"android.animation.TimeAnimator",
			"()V"
		) {}
	
	// Methods
	inline void TimeAnimator::setCurrentPlayTime(jlong arg0) const
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	inline void TimeAnimator::setTimeListener(JObject arg0) const
	{
		callMethod<void>(
			"setTimeListener",
			"(Landroid/animation/TimeAnimator$TimeListener;)V",
			arg0.object()
		);
	}
	inline void TimeAnimator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation

// Base class headers
#include "./Animator.hpp"
#include "./ValueAnimator.hpp"

