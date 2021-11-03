#include "../content/Context.hpp"
#include "./PathMotion.hpp"
#include "./Transition.hpp"
#include "./Transition_EpicenterCallback.hpp"
#include "./TransitionPropagation.hpp"
#include "./TransitionValues.hpp"
#include "../view/View.hpp"
#include "./TransitionSet.hpp"

namespace android::transition
{
	// Fields
	jint TransitionSet::ORDERING_SEQUENTIAL()
	{
		return getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_SEQUENTIAL"
		);
	}
	jint TransitionSet::ORDERING_TOGETHER()
	{
		return getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_TOGETHER"
		);
	}
	
	// QAndroidJniObject forward
	TransitionSet::TransitionSet(QAndroidJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	TransitionSet::TransitionSet()
		: android::transition::Transition(
			"android.transition.TransitionSet",
			"()V"
		) {}
	TransitionSet::TransitionSet(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.TransitionSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::transition::TransitionSet TransitionSet::addListener(JObject arg0)
	{
		return callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::addTarget(android::view::View arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::addTarget(jint arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	android::transition::TransitionSet TransitionSet::addTarget(jclass arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	android::transition::TransitionSet TransitionSet::addTarget(jstring arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	android::transition::TransitionSet TransitionSet::addTransition(android::transition::Transition arg0)
	{
		return callObjectMethod(
			"addTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	void TransitionSet::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void TransitionSet::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/transition/TransitionSet;"
		);
	}
	android::transition::Transition TransitionSet::excludeTarget(android::view::View arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	android::transition::Transition TransitionSet::excludeTarget(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition TransitionSet::excludeTarget(jclass arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition TransitionSet::excludeTarget(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	jint TransitionSet::getOrdering()
	{
		return callMethod<jint>(
			"getOrdering",
			"()I"
		);
	}
	android::transition::Transition TransitionSet::getTransitionAt(jint arg0)
	{
		return callObjectMethod(
			"getTransitionAt",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	jint TransitionSet::getTransitionCount()
	{
		return callMethod<jint>(
			"getTransitionCount",
			"()I"
		);
	}
	android::transition::TransitionSet TransitionSet::removeListener(JObject arg0)
	{
		return callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::removeTarget(android::view::View arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::removeTarget(jint arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	android::transition::TransitionSet TransitionSet::removeTarget(jclass arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	android::transition::TransitionSet TransitionSet::removeTarget(jstring arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	android::transition::TransitionSet TransitionSet::removeTransition(android::transition::Transition arg0)
	{
		return callObjectMethod(
			"removeTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	void TransitionSet::setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0)
	{
		callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::setInterpolator(JObject arg0)
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::setOrdering(jint arg0)
	{
		return callObjectMethod(
			"setOrdering",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	void TransitionSet::setPathMotion(android::transition::PathMotion arg0)
	{
		callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.object()
		);
	}
	void TransitionSet::setPropagation(android::transition::TransitionPropagation arg0)
	{
		callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.object()
		);
	}
	android::transition::TransitionSet TransitionSet::setStartDelay(jlong arg0)
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
} // namespace android::transition

