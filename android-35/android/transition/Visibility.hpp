#pragma once

#include "../../JArray.hpp"
#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Visibility.def.hpp"

namespace android::transition
{
	// Fields
	inline jint Visibility::MODE_IN()
	{
		return getStaticField<jint>(
			"android.transition.Visibility",
			"MODE_IN"
		);
	}
	inline jint Visibility::MODE_OUT()
	{
		return getStaticField<jint>(
			"android.transition.Visibility",
			"MODE_OUT"
		);
	}
	
	// Constructors
	inline Visibility::Visibility()
		: android::transition::Transition(
			"android.transition.Visibility",
			"()V"
		) {}
	inline Visibility::Visibility(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.Visibility",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void Visibility::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void Visibility::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::animation::Animator Visibility::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint Visibility::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline JArray Visibility::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean Visibility::isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1) const
	{
		return callMethod<jboolean>(
			"isTransitionRequired",
			"(Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Visibility::isVisible(android::transition::TransitionValues arg0) const
	{
		return callMethod<jboolean>(
			"isVisible",
			"(Landroid/transition/TransitionValues;)Z",
			arg0.object()
		);
	}
	inline android::animation::Animator Visibility::onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
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
	inline android::animation::Animator Visibility::onAppear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4) const
	{
		return callObjectMethod(
			"onAppear",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;ILandroid/transition/TransitionValues;I)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		);
	}
	inline android::animation::Animator Visibility::onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
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
	inline android::animation::Animator Visibility::onDisappear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4) const
	{
		return callObjectMethod(
			"onDisappear",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;ILandroid/transition/TransitionValues;I)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		);
	}
	inline void Visibility::setMode(jint arg0) const
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
