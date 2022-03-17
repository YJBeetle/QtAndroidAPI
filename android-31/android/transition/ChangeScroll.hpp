#pragma once

#include "../../JArray.hpp"
#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./ChangeScroll.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline ChangeScroll::ChangeScroll()
		: android::transition::Transition(
			"android.transition.ChangeScroll",
			"()V"
		) {}
	inline ChangeScroll::ChangeScroll(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeScroll",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ChangeScroll::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void ChangeScroll::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::animation::Animator ChangeScroll::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JArray ChangeScroll::getTransitionProperties() const
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
