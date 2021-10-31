#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Visibility.hpp"

namespace android::transition
{
	// Fields
	jint Visibility::MODE_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Visibility",
			"MODE_IN"
		);
	}
	jint Visibility::MODE_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Visibility",
			"MODE_OUT"
		);
	}
	
	// QAndroidJniObject forward
	Visibility::Visibility(QAndroidJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	Visibility::Visibility()
		: android::transition::Transition(
			"android.transition.Visibility",
			"()V"
		) {}
	Visibility::Visibility(android::content::Context arg0, __JniBaseClass arg1)
		: android::transition::Transition(
			"android.transition.Visibility",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void Visibility::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void Visibility::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::animation::Animator Visibility::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint Visibility::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jarray Visibility::getTransitionProperties()
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean Visibility::isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1)
	{
		return callMethod<jboolean>(
			"isTransitionRequired",
			"(Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Visibility::isVisible(android::transition::TransitionValues arg0)
	{
		return callMethod<jboolean>(
			"isVisible",
			"(Landroid/transition/TransitionValues;)Z",
			arg0.object()
		);
	}
	android::animation::Animator Visibility::onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	android::animation::Animator Visibility::onAppear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4)
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
	android::animation::Animator Visibility::onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	android::animation::Animator Visibility::onDisappear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4)
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
	void Visibility::setMode(jint arg0)
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::transition

