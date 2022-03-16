#pragma once

#include "../../JArray.hpp"
#include "./TransitionValues.def.hpp"
#include "./VisibilityPropagation.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline VisibilityPropagation::VisibilityPropagation()
		: android::transition::TransitionPropagation(
			"android.transition.VisibilityPropagation",
			"()V"
		) {}
	
	// Methods
	inline void VisibilityPropagation::captureValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline JArray VisibilityPropagation::getPropagationProperties() const
	{
		return callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		);
	}
	inline jint VisibilityPropagation::getViewVisibility(android::transition::TransitionValues arg0) const
	{
		return callMethod<jint>(
			"getViewVisibility",
			"(Landroid/transition/TransitionValues;)I",
			arg0.object()
		);
	}
	inline jint VisibilityPropagation::getViewX(android::transition::TransitionValues arg0) const
	{
		return callMethod<jint>(
			"getViewX",
			"(Landroid/transition/TransitionValues;)I",
			arg0.object()
		);
	}
	inline jint VisibilityPropagation::getViewY(android::transition::TransitionValues arg0) const
	{
		return callMethod<jint>(
			"getViewY",
			"(Landroid/transition/TransitionValues;)I",
			arg0.object()
		);
	}
} // namespace android::transition

// Base class headers
#include "./TransitionPropagation.hpp"

