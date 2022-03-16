#pragma once

#include "./Transition.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./CircularPropagation.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline CircularPropagation::CircularPropagation()
		: android::transition::VisibilityPropagation(
			"android.transition.CircularPropagation",
			"()V"
		) {}
	
	// Methods
	inline jlong CircularPropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
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
	inline void CircularPropagation::setPropagationSpeed(jfloat arg0) const
	{
		callMethod<void>(
			"setPropagationSpeed",
			"(F)V",
			arg0
		);
	}
} // namespace android::transition

// Base class headers
#include "./TransitionPropagation.hpp"
#include "./VisibilityPropagation.hpp"

