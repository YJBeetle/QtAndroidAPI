#pragma once

#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Fade.def.hpp"

namespace android::transition
{
	// Fields
	inline jint Fade::IN()
	{
		return getStaticField<jint>(
			"android.transition.Fade",
			"IN"
		);
	}
	inline jint Fade::OUT()
	{
		return getStaticField<jint>(
			"android.transition.Fade",
			"OUT"
		);
	}
	
	// Constructors
	inline Fade::Fade()
		: android::transition::Visibility(
			"android.transition.Fade",
			"()V"
		) {}
	inline Fade::Fade(jint arg0)
		: android::transition::Visibility(
			"android.transition.Fade",
			"(I)V",
			arg0
		) {}
	inline Fade::Fade(android::content::Context arg0, JObject arg1)
		: android::transition::Visibility(
			"android.transition.Fade",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void Fade::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::animation::Animator Fade::onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
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
	inline android::animation::Animator Fade::onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
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
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"
#include "./Visibility.hpp"

