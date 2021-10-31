#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeClipBounds.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	ChangeClipBounds::ChangeClipBounds(QJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	ChangeClipBounds::ChangeClipBounds()
		: android::transition::Transition(
			"android.transition.ChangeClipBounds",
			"()V"
		) {}
	ChangeClipBounds::ChangeClipBounds(android::content::Context arg0, __JniBaseClass arg1)
		: android::transition::Transition(
			"android.transition.ChangeClipBounds",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ChangeClipBounds::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void ChangeClipBounds::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::animation::Animator ChangeClipBounds::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jarray ChangeClipBounds::getTransitionProperties()
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace android::transition

