#include "./Transition.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./SidePropagation.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	SidePropagation::SidePropagation(QJniObject obj) : android::transition::VisibilityPropagation(obj) {}
	
	// Constructors
	SidePropagation::SidePropagation()
		: android::transition::VisibilityPropagation(
			"android.transition.SidePropagation",
			"()V"
		) {}
	
	// Methods
	jlong SidePropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	void SidePropagation::setPropagationSpeed(jfloat arg0)
	{
		callMethod<void>(
			"setPropagationSpeed",
			"(F)V",
			arg0
		);
	}
	void SidePropagation::setSide(jint arg0)
	{
		callMethod<void>(
			"setSide",
			"(I)V",
			arg0
		);
	}
} // namespace android::transition

