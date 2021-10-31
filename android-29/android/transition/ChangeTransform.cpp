#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeTransform.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	ChangeTransform::ChangeTransform(QAndroidJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	ChangeTransform::ChangeTransform()
		: android::transition::Transition(
			"android.transition.ChangeTransform",
			"()V"
		) {}
	ChangeTransform::ChangeTransform(android::content::Context arg0, __JniBaseClass arg1)
		: android::transition::Transition(
			"android.transition.ChangeTransform",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ChangeTransform::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void ChangeTransform::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	QAndroidJniObject ChangeTransform::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean ChangeTransform::getReparent()
	{
		return callMethod<jboolean>(
			"getReparent",
			"()Z"
		);
	}
	jboolean ChangeTransform::getReparentWithOverlay()
	{
		return callMethod<jboolean>(
			"getReparentWithOverlay",
			"()Z"
		);
	}
	jarray ChangeTransform::getTransitionProperties()
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void ChangeTransform::setReparent(jboolean arg0)
	{
		callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	void ChangeTransform::setReparentWithOverlay(jboolean arg0)
	{
		callMethod<void>(
			"setReparentWithOverlay",
			"(Z)V",
			arg0
		);
	}
} // namespace android::transition

