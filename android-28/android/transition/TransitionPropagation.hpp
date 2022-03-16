#pragma once

#include "../../JArray.hpp"
#include "./Transition.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./TransitionPropagation.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline TransitionPropagation::TransitionPropagation()
		: JObject(
			"android.transition.TransitionPropagation",
			"()V"
		) {}
	
	// Methods
	inline void TransitionPropagation::captureValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline JArray TransitionPropagation::getPropagationProperties() const
	{
		return callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		);
	}
	inline jlong TransitionPropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
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
} // namespace android::transition

// Base class headers

