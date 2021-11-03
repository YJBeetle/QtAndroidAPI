#include "./Transition.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./CircularPropagation.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	CircularPropagation::CircularPropagation(QAndroidJniObject obj) : android::transition::VisibilityPropagation(obj) {}
	
	// Constructors
	CircularPropagation::CircularPropagation()
		: android::transition::VisibilityPropagation(
			"android.transition.CircularPropagation",
			"()V"
		) {}
	
	// Methods
	jlong CircularPropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)J",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void CircularPropagation::setPropagationSpeed(jfloat arg0) const
	{
		callMethod<void>(
			"setPropagationSpeed",
			"(F)V",
			arg0
		);
	}
} // namespace android::transition

