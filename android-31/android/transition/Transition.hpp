#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../animation/Animator.def.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./PathMotion.def.hpp"
#include "./Transition_EpicenterCallback.def.hpp"
#include "./TransitionPropagation.def.hpp"
#include "./TransitionValues.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Transition.def.hpp"

namespace android::transition
{
	// Fields
	inline jint Transition::MATCH_ID()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ID"
		);
	}
	inline jint Transition::MATCH_INSTANCE()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_INSTANCE"
		);
	}
	inline jint Transition::MATCH_ITEM_ID()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ITEM_ID"
		);
	}
	inline jint Transition::MATCH_NAME()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_NAME"
		);
	}
	
	// Constructors
	inline Transition::Transition()
		: JObject(
			"android.transition.Transition",
			"()V"
		) {}
	inline Transition::Transition(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.transition.Transition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::transition::Transition Transition::addListener(JObject arg0) const
	{
		return callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	inline android::transition::Transition Transition::addTarget(android::view::View arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	inline android::transition::Transition Transition::addTarget(jint arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	inline android::transition::Transition Transition::addTarget(JClass arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0.object<jclass>()
		);
	}
	inline android::transition::Transition Transition::addTarget(JString arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Transition::canRemoveViews() const
	{
		return callMethod<jboolean>(
			"canRemoveViews",
			"()Z"
		);
	}
	inline void Transition::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline void Transition::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	inline android::transition::Transition Transition::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::animation::Animator Transition::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::transition::Transition Transition::excludeChildren(android::view::View arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeChildren",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	inline android::transition::Transition Transition::excludeChildren(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeChildren",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	inline android::transition::Transition Transition::excludeChildren(JClass arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeChildren",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0.object<jclass>(),
			arg1
		);
	}
	inline android::transition::Transition Transition::excludeTarget(android::view::View arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	inline android::transition::Transition Transition::excludeTarget(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	inline android::transition::Transition Transition::excludeTarget(JClass arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0.object<jclass>(),
			arg1
		);
	}
	inline android::transition::Transition Transition::excludeTarget(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jlong Transition::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline android::graphics::Rect Transition::getEpicenter() const
	{
		return callObjectMethod(
			"getEpicenter",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::transition::Transition_EpicenterCallback Transition::getEpicenterCallback() const
	{
		return callObjectMethod(
			"getEpicenterCallback",
			"()Landroid/transition/Transition$EpicenterCallback;"
		);
	}
	inline JObject Transition::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	inline JString Transition::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::transition::PathMotion Transition::getPathMotion() const
	{
		return callObjectMethod(
			"getPathMotion",
			"()Landroid/transition/PathMotion;"
		);
	}
	inline android::transition::TransitionPropagation Transition::getPropagation() const
	{
		return callObjectMethod(
			"getPropagation",
			"()Landroid/transition/TransitionPropagation;"
		);
	}
	inline jlong Transition::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	inline JObject Transition::getTargetIds() const
	{
		return callObjectMethod(
			"getTargetIds",
			"()Ljava/util/List;"
		);
	}
	inline JObject Transition::getTargetNames() const
	{
		return callObjectMethod(
			"getTargetNames",
			"()Ljava/util/List;"
		);
	}
	inline JObject Transition::getTargetTypes() const
	{
		return callObjectMethod(
			"getTargetTypes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Transition::getTargets() const
	{
		return callObjectMethod(
			"getTargets",
			"()Ljava/util/List;"
		);
	}
	inline JArray Transition::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
	inline android::transition::TransitionValues Transition::getTransitionValues(android::view::View arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getTransitionValues",
			"(Landroid/view/View;Z)Landroid/transition/TransitionValues;",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Transition::isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1) const
	{
		return callMethod<jboolean>(
			"isTransitionRequired",
			"(Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::transition::Transition Transition::removeListener(JObject arg0) const
	{
		return callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	inline android::transition::Transition Transition::removeTarget(android::view::View arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	inline android::transition::Transition Transition::removeTarget(jint arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	inline android::transition::Transition Transition::removeTarget(JClass arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0.object<jclass>()
		);
	}
	inline android::transition::Transition Transition::removeTarget(JString arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0.object<jstring>()
		);
	}
	inline android::transition::Transition Transition::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	inline void Transition::setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0) const
	{
		callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.object()
		);
	}
	inline android::transition::Transition Transition::setInterpolator(JObject arg0) const
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	inline void Transition::setMatchOrder(JIntArray arg0) const
	{
		callMethod<void>(
			"setMatchOrder",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void Transition::setPathMotion(android::transition::PathMotion arg0) const
	{
		callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.object()
		);
	}
	inline void Transition::setPropagation(android::transition::TransitionPropagation arg0) const
	{
		callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.object()
		);
	}
	inline android::transition::Transition Transition::setStartDelay(jlong arg0) const
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	inline JString Transition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::transition

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
