#include "./TimeAnimator.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	TimeAnimator::TimeAnimator()
		: android::animation::ValueAnimator(
			"android.animation.TimeAnimator",
			"()V"
		) {}
	
	// Methods
	void TimeAnimator::setCurrentPlayTime(jlong arg0) const
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	void TimeAnimator::setTimeListener(JObject arg0) const
	{
		callMethod<void>(
			"setTimeListener",
			"(Landroid/animation/TimeAnimator$TimeListener;)V",
			arg0.object()
		);
	}
	void TimeAnimator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation

