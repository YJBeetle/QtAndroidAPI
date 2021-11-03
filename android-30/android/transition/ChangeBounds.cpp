#include "../../JArray.hpp"
#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeBounds.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	ChangeBounds::ChangeBounds(QJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	ChangeBounds::ChangeBounds()
		: android::transition::Transition(
			"android.transition.ChangeBounds",
			"()V"
		) {}
	ChangeBounds::ChangeBounds(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeBounds",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ChangeBounds::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void ChangeBounds::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::animation::Animator ChangeBounds::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean ChangeBounds::getResizeClip() const
	{
		return callMethod<jboolean>(
			"getResizeClip",
			"()Z"
		);
	}
	JArray ChangeBounds::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
	void ChangeBounds::setReparent(jboolean arg0) const
	{
		callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	void ChangeBounds::setResizeClip(jboolean arg0) const
	{
		callMethod<void>(
			"setResizeClip",
			"(Z)V",
			arg0
		);
	}
} // namespace android::transition

