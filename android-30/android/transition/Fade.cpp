#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Fade.hpp"

namespace android::transition
{
	// Fields
	jint Fade::IN()
	{
		return getStaticField<jint>(
			"android.transition.Fade",
			"IN"
		);
	}
	jint Fade::OUT()
	{
		return getStaticField<jint>(
			"android.transition.Fade",
			"OUT"
		);
	}
	
	// QAndroidJniObject forward
	Fade::Fade(QAndroidJniObject obj) : android::transition::Visibility(obj) {}
	
	// Constructors
	Fade::Fade()
		: android::transition::Visibility(
			"android.transition.Fade",
			"()V"
		) {}
	Fade::Fade(jint arg0)
		: android::transition::Visibility(
			"android.transition.Fade",
			"(I)V",
			arg0
		) {}
	Fade::Fade(android::content::Context arg0, __JniBaseClass arg1)
		: android::transition::Visibility(
			"android.transition.Fade",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void Fade::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::animation::Animator Fade::onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	android::animation::Animator Fade::onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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

