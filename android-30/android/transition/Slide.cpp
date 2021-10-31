#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Slide.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	Slide::Slide(QJniObject obj) : android::transition::Visibility(obj) {}
	
	// Constructors
	Slide::Slide()
		: android::transition::Visibility(
			"android.transition.Slide",
			"()V"
		) {}
	Slide::Slide(jint arg0)
		: android::transition::Visibility(
			"android.transition.Slide",
			"(I)V",
			arg0
		) {}
	Slide::Slide(android::content::Context arg0, __JniBaseClass arg1)
		: android::transition::Visibility(
			"android.transition.Slide",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void Slide::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void Slide::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	jint Slide::getSlideEdge()
	{
		return callMethod<jint>(
			"getSlideEdge",
			"()I"
		);
	}
	android::animation::Animator Slide::onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	android::animation::Animator Slide::onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	void Slide::setSlideEdge(jint arg0)
	{
		callMethod<void>(
			"setSlideEdge",
			"(I)V",
			arg0
		);
	}
} // namespace android::transition

