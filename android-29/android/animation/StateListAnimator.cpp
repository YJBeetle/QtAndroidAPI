#include "./Animator.hpp"
#include "./StateListAnimator.hpp"

namespace android::animation
{
	// Fields
	
	StateListAnimator::StateListAnimator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StateListAnimator::StateListAnimator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.StateListAnimator",
			"()V"
		);
	}
	
	// Methods
	void StateListAnimator::addState(jintArray arg0, android::animation::Animator arg1)
	{
		__thiz.callMethod<void>(
			"addState",
			"([ILandroid/animation/Animator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject StateListAnimator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	void StateListAnimator::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
} // namespace android::animation

