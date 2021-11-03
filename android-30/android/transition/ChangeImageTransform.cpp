#include "../../JArray.hpp"
#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeImageTransform.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	ChangeImageTransform::ChangeImageTransform(QJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	ChangeImageTransform::ChangeImageTransform()
		: android::transition::Transition(
			"android.transition.ChangeImageTransform",
			"()V"
		) {}
	ChangeImageTransform::ChangeImageTransform(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeImageTransform",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ChangeImageTransform::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void ChangeImageTransform::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::animation::Animator ChangeImageTransform::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JArray ChangeImageTransform::getTransitionProperties()
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
} // namespace android::transition

