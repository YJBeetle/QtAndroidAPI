#include "./Animator.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LayoutTransition.hpp"

namespace android::animation
{
	// Fields
	jint LayoutTransition::APPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"APPEARING"
		);
	}
	jint LayoutTransition::CHANGE_APPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_APPEARING"
		);
	}
	jint LayoutTransition::CHANGE_DISAPPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_DISAPPEARING"
		);
	}
	jint LayoutTransition::CHANGING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGING"
		);
	}
	jint LayoutTransition::DISAPPEARING()
	{
		return getStaticField<jint>(
			"android.animation.LayoutTransition",
			"DISAPPEARING"
		);
	}
	
	// QJniObject forward
	LayoutTransition::LayoutTransition(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LayoutTransition::LayoutTransition()
		: JObject(
			"android.animation.LayoutTransition",
			"()V"
		) {}
	
	// Methods
	void LayoutTransition::addChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LayoutTransition::addTransitionListener(JObject arg0)
	{
		callMethod<void>(
			"addTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.object()
		);
	}
	void LayoutTransition::disableTransitionType(jint arg0)
	{
		callMethod<void>(
			"disableTransitionType",
			"(I)V",
			arg0
		);
	}
	void LayoutTransition::enableTransitionType(jint arg0)
	{
		callMethod<void>(
			"enableTransitionType",
			"(I)V",
			arg0
		);
	}
	android::animation::Animator LayoutTransition::getAnimator(jint arg0)
	{
		return callObjectMethod(
			"getAnimator",
			"(I)Landroid/animation/Animator;",
			arg0
		);
	}
	jlong LayoutTransition::getDuration(jint arg0)
	{
		return callMethod<jlong>(
			"getDuration",
			"(I)J",
			arg0
		);
	}
	JObject LayoutTransition::getInterpolator(jint arg0)
	{
		return callObjectMethod(
			"getInterpolator",
			"(I)Landroid/animation/TimeInterpolator;",
			arg0
		);
	}
	jlong LayoutTransition::getStagger(jint arg0)
	{
		return callMethod<jlong>(
			"getStagger",
			"(I)J",
			arg0
		);
	}
	jlong LayoutTransition::getStartDelay(jint arg0)
	{
		return callMethod<jlong>(
			"getStartDelay",
			"(I)J",
			arg0
		);
	}
	JObject LayoutTransition::getTransitionListeners()
	{
		return callObjectMethod(
			"getTransitionListeners",
			"()Ljava/util/List;"
		);
	}
	void LayoutTransition::hideChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LayoutTransition::hideChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2)
	{
		callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean LayoutTransition::isChangingLayout()
	{
		return callMethod<jboolean>(
			"isChangingLayout",
			"()Z"
		);
	}
	jboolean LayoutTransition::isRunning()
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean LayoutTransition::isTransitionTypeEnabled(jint arg0)
	{
		return callMethod<jboolean>(
			"isTransitionTypeEnabled",
			"(I)Z",
			arg0
		);
	}
	void LayoutTransition::removeChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		callMethod<void>(
			"removeChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LayoutTransition::removeTransitionListener(JObject arg0)
	{
		callMethod<void>(
			"removeTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.object()
		);
	}
	void LayoutTransition::setAnimateParentHierarchy(jboolean arg0)
	{
		callMethod<void>(
			"setAnimateParentHierarchy",
			"(Z)V",
			arg0
		);
	}
	void LayoutTransition::setAnimator(jint arg0, android::animation::Animator arg1)
	{
		callMethod<void>(
			"setAnimator",
			"(ILandroid/animation/Animator;)V",
			arg0,
			arg1.object()
		);
	}
	void LayoutTransition::setDuration(jlong arg0)
	{
		callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void LayoutTransition::setDuration(jint arg0, jlong arg1)
	{
		callMethod<void>(
			"setDuration",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void LayoutTransition::setInterpolator(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"setInterpolator",
			"(ILandroid/animation/TimeInterpolator;)V",
			arg0,
			arg1.object()
		);
	}
	void LayoutTransition::setStagger(jint arg0, jlong arg1)
	{
		callMethod<void>(
			"setStagger",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void LayoutTransition::setStartDelay(jint arg0, jlong arg1)
	{
		callMethod<void>(
			"setStartDelay",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void LayoutTransition::showChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LayoutTransition::showChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2)
	{
		callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::animation

