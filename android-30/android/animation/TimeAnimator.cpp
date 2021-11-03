#include "./TimeAnimator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	TimeAnimator::TimeAnimator(QAndroidJniObject obj) : android::animation::ValueAnimator(obj) {}
	
	// Constructors
	TimeAnimator::TimeAnimator()
		: android::animation::ValueAnimator(
			"android.animation.TimeAnimator",
			"()V"
		) {}
	
	// Methods
	void TimeAnimator::setCurrentPlayTime(jlong arg0)
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	void TimeAnimator::setTimeListener(JObject arg0)
	{
		callMethod<void>(
			"setTimeListener",
			"(Landroid/animation/TimeAnimator$TimeListener;)V",
			arg0.object()
		);
	}
	void TimeAnimator::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation

