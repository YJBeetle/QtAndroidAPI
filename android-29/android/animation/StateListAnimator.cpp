#include "./Animator.hpp"
#include "./StateListAnimator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	StateListAnimator::StateListAnimator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StateListAnimator::StateListAnimator()
		: __JniBaseClass(
			"android.animation.StateListAnimator",
			"()V"
		) {}
	
	// Methods
	void StateListAnimator::addState(jintArray arg0, android::animation::Animator arg1)
	{
		callMethod<void>(
			"addState",
			"([ILandroid/animation/Animator;)V",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject StateListAnimator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	void StateListAnimator::jumpToCurrentState()
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
} // namespace android::animation

