#include "../../JIntArray.hpp"
#include "./Animator.hpp"
#include "../../JObject.hpp"
#include "./StateListAnimator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	StateListAnimator::StateListAnimator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StateListAnimator::StateListAnimator()
		: JObject(
			"android.animation.StateListAnimator",
			"()V"
		) {}
	
	// Methods
	void StateListAnimator::addState(JIntArray arg0, android::animation::Animator arg1) const
	{
		callMethod<void>(
			"addState",
			"([ILandroid/animation/Animator;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	android::animation::StateListAnimator StateListAnimator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	void StateListAnimator::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
} // namespace android::animation

