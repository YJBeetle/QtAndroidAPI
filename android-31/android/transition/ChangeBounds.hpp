#pragma once

#include "../../JArray.hpp"
#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./ChangeBounds.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline ChangeBounds::ChangeBounds()
		: android::transition::Transition(
			"android.transition.ChangeBounds",
			"()V"
		) {}
	inline ChangeBounds::ChangeBounds(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeBounds",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ChangeBounds::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void ChangeBounds::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::animation::Animator ChangeBounds::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean ChangeBounds::getResizeClip() const
	{
		return callMethod<jboolean>(
			"getResizeClip",
			"()Z"
		);
	}
	inline JArray ChangeBounds::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
	inline void ChangeBounds::setReparent(jboolean arg0) const
	{
		callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	inline void ChangeBounds::setResizeClip(jboolean arg0) const
	{
		callMethod<void>(
			"setResizeClip",
			"(Z)V",
			arg0
		);
	}
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"

