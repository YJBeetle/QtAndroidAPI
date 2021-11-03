#include "../../JIntArray.hpp"
#include "./Animator.hpp"
#include "../../JObject.hpp"
#include "./StateListAnimator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	StateListAnimator::StateListAnimator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StateListAnimator::StateListAnimator()
		: JObject(
			"android.animation.StateListAnimator",
			"()V"
		) {}
	
	// Methods
	void StateListAnimator::addState(JIntArray arg0, android::animation::Animator arg1)
	{
		callMethod<void>(
			"addState",
			"([ILandroid/animation/Animator;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	android::animation::StateListAnimator StateListAnimator::clone()
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

