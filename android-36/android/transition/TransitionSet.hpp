#pragma once

#include "../content/Context.def.hpp"
#include "./PathMotion.def.hpp"
#include "./Transition.def.hpp"
#include "./Transition_EpicenterCallback.def.hpp"
#include "./TransitionPropagation.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/View.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TransitionSet.def.hpp"

namespace android::transition
{
	// Fields
	inline jint TransitionSet::ORDERING_SEQUENTIAL()
	{
		return getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_SEQUENTIAL"
		);
	}
	inline jint TransitionSet::ORDERING_TOGETHER()
	{
		return getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_TOGETHER"
		);
	}
	
	// Constructors
	inline TransitionSet::TransitionSet()
		: android::transition::Transition(
			"android.transition.TransitionSet",
			"()V"
		) {}
	inline TransitionSet::TransitionSet(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.TransitionSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::transition::TransitionSet TransitionSet::addListener(JObject arg0) const
	{
		return callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::addTarget(android::view::View arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::addTarget(jint arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	inline android::transition::TransitionSet TransitionSet::addTarget(JClass arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0.object<jclass>()
		);
	}
	inline android::transition::TransitionSet TransitionSet::addTarget(JString arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0.object<jstring>()
		);
	}
	inline android::transition::TransitionSet TransitionSet::addTransition(android::transition::Transition arg0) const
	{
		return callObjectMethod(
			"addTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	inline void TransitionSet::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void TransitionSet::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/transition/TransitionSet;"
		);
	}
	inline android::transition::Transition TransitionSet::excludeTarget(android::view::View arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	inline android::transition::Transition TransitionSet::excludeTarget(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	inline android::transition::Transition TransitionSet::excludeTarget(JClass arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0.object<jclass>(),
			arg1
		);
	}
	inline android::transition::Transition TransitionSet::excludeTarget(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint TransitionSet::getOrdering() const
	{
		return callMethod<jint>(
			"getOrdering",
			"()I"
		);
	}
	inline android::transition::Transition TransitionSet::getTransitionAt(jint arg0) const
	{
		return callObjectMethod(
			"getTransitionAt",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	inline jint TransitionSet::getTransitionCount() const
	{
		return callMethod<jint>(
			"getTransitionCount",
			"()I"
		);
	}
	inline android::transition::TransitionSet TransitionSet::removeListener(JObject arg0) const
	{
		return callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::removeTarget(android::view::View arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::removeTarget(jint arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	inline android::transition::TransitionSet TransitionSet::removeTarget(JClass arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0.object<jclass>()
		);
	}
	inline android::transition::TransitionSet TransitionSet::removeTarget(JString arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0.object<jstring>()
		);
	}
	inline android::transition::TransitionSet TransitionSet::removeTransition(android::transition::Transition arg0) const
	{
		return callObjectMethod(
			"removeTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	inline void TransitionSet::setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0) const
	{
		callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::setInterpolator(JObject arg0) const
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/TransitionSet;",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::setOrdering(jint arg0) const
	{
		return callObjectMethod(
			"setOrdering",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	inline void TransitionSet::setPathMotion(android::transition::PathMotion arg0) const
	{
		callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.object()
		);
	}
	inline void TransitionSet::setPropagation(android::transition::TransitionPropagation arg0) const
	{
		callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.object()
		);
	}
	inline android::transition::TransitionSet TransitionSet::setStartDelay(jlong arg0) const
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
