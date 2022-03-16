#pragma once

#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Slide.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline Slide::Slide()
		: android::transition::Visibility(
			"android.transition.Slide",
			"()V"
		) {}
	inline Slide::Slide(jint arg0)
		: android::transition::Visibility(
			"android.transition.Slide",
			"(I)V",
			arg0
		) {}
	inline Slide::Slide(android::content::Context arg0, JObject arg1)
		: android::transition::Visibility(
			"android.transition.Slide",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void Slide::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void Slide::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline jint Slide::getSlideEdge() const
	{
		return callMethod<jint>(
			"getSlideEdge",
			"()I"
		);
	}
	inline android::animation::Animator Slide::onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
	{
		return callObjectMethod(
			"onAppear",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::animation::Animator Slide::onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
	{
		return callObjectMethod(
			"onDisappear",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void Slide::setSlideEdge(jint arg0) const
	{
		callMethod<void>(
			"setSlideEdge",
			"(I)V",
			arg0
		);
	}
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"
#include "./Visibility.hpp"

