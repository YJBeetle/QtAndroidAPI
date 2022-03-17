#pragma once

#include "../../JArray.hpp"
#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./ChangeClipBounds.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline ChangeClipBounds::ChangeClipBounds()
		: android::transition::Transition(
			"android.transition.ChangeClipBounds",
			"()V"
		) {}
	inline ChangeClipBounds::ChangeClipBounds(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeClipBounds",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ChangeClipBounds::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void ChangeClipBounds::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::animation::Animator ChangeClipBounds::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JArray ChangeClipBounds::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
