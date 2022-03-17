#pragma once

#include "../../JArray.hpp"
#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./ChangeTransform.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline ChangeTransform::ChangeTransform()
		: android::transition::Transition(
			"android.transition.ChangeTransform",
			"()V"
		) {}
	inline ChangeTransform::ChangeTransform(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeTransform",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ChangeTransform::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void ChangeTransform::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::animation::Animator ChangeTransform::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean ChangeTransform::getReparent() const
	{
		return callMethod<jboolean>(
			"getReparent",
			"()Z"
		);
	}
	inline jboolean ChangeTransform::getReparentWithOverlay() const
	{
		return callMethod<jboolean>(
			"getReparentWithOverlay",
			"()Z"
		);
	}
	inline JArray ChangeTransform::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
	inline void ChangeTransform::setReparent(jboolean arg0) const
	{
		callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	inline void ChangeTransform::setReparentWithOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setReparentWithOverlay",
			"(Z)V",
			arg0
		);
	}
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
