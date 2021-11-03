#include "../../JArray.hpp"
#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeScroll.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	ChangeScroll::ChangeScroll(QAndroidJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	ChangeScroll::ChangeScroll()
		: android::transition::Transition(
			"android.transition.ChangeScroll",
			"()V"
		) {}
	ChangeScroll::ChangeScroll(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeScroll",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ChangeScroll::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void ChangeScroll::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::animation::Animator ChangeScroll::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JArray ChangeScroll::getTransitionProperties()
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
} // namespace android::transition

