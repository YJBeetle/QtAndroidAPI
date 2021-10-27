#include "./TimeAnimator.hpp"

namespace android::animation
{
	// Fields
	
	TimeAnimator::TimeAnimator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimeAnimator::TimeAnimator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.TimeAnimator",
			"()V"
		);
	}
	
	// Methods
	void TimeAnimator::setCurrentPlayTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	void TimeAnimator::setTimeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTimeListener",
			"(Landroid/animation/TimeAnimator$TimeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TimeAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation

