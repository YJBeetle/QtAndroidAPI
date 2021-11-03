#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "./PathMotion.hpp"
#include "./Transition_EpicenterCallback.hpp"
#include "./TransitionPropagation.hpp"
#include "./TransitionValues.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Transition.hpp"

namespace android::transition
{
	// Fields
	jint Transition::MATCH_ID()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ID"
		);
	}
	jint Transition::MATCH_INSTANCE()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_INSTANCE"
		);
	}
	jint Transition::MATCH_ITEM_ID()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ITEM_ID"
		);
	}
	jint Transition::MATCH_NAME()
	{
		return getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_NAME"
		);
	}
	
	// QAndroidJniObject forward
	Transition::Transition(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Transition::Transition()
		: JObject(
			"android.transition.Transition",
			"()V"
		) {}
	Transition::Transition(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.transition.Transition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::transition::Transition Transition::addListener(JObject arg0) const
	{
		return callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::addTarget(android::view::View arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::addTarget(jint arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	android::transition::Transition Transition::addTarget(JClass arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0.object<jclass>()
		);
	}
	android::transition::Transition Transition::addTarget(JString arg0) const
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0.object<jstring>()
		);
	}
	jboolean Transition::canRemoveViews() const
	{
		return callMethod<jboolean>(
			"canRemoveViews",
			"()Z"
		);
	}
	void Transition::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void Transition::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::transition::Transition Transition::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/transition/Transition;"
		);
	}
	android::animation::Animator Transition::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::transition::Transition Transition::excludeChildren(android::view::View arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeChildren",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	android::transition::Transition Transition::excludeChildren(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeChildren",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition Transition::excludeChildren(JClass arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeChildren",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0.object<jclass>(),
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(android::view::View arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(JClass arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0.object<jclass>(),
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jlong Transition::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	android::graphics::Rect Transition::getEpicenter() const
	{
		return callObjectMethod(
			"getEpicenter",
			"()Landroid/graphics/Rect;"
		);
	}
	android::transition::Transition_EpicenterCallback Transition::getEpicenterCallback() const
	{
		return callObjectMethod(
			"getEpicenterCallback",
			"()Landroid/transition/Transition$EpicenterCallback;"
		);
	}
	JObject Transition::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	JString Transition::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	android::transition::PathMotion Transition::getPathMotion() const
	{
		return callObjectMethod(
			"getPathMotion",
			"()Landroid/transition/PathMotion;"
		);
	}
	android::transition::TransitionPropagation Transition::getPropagation() const
	{
		return callObjectMethod(
			"getPropagation",
			"()Landroid/transition/TransitionPropagation;"
		);
	}
	jlong Transition::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	JObject Transition::getTargetIds() const
	{
		return callObjectMethod(
			"getTargetIds",
			"()Ljava/util/List;"
		);
	}
	JObject Transition::getTargetNames() const
	{
		return callObjectMethod(
			"getTargetNames",
			"()Ljava/util/List;"
		);
	}
	JObject Transition::getTargetTypes() const
	{
		return callObjectMethod(
			"getTargetTypes",
			"()Ljava/util/List;"
		);
	}
	JObject Transition::getTargets() const
	{
		return callObjectMethod(
			"getTargets",
			"()Ljava/util/List;"
		);
	}
	JArray Transition::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
	android::transition::TransitionValues Transition::getTransitionValues(android::view::View arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getTransitionValues",
			"(Landroid/view/View;Z)Landroid/transition/TransitionValues;",
			arg0.object(),
			arg1
		);
	}
	jboolean Transition::isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1) const
	{
		return callMethod<jboolean>(
			"isTransitionRequired",
			"(Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::transition::Transition Transition::removeListener(JObject arg0) const
	{
		return callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::removeTarget(android::view::View arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::removeTarget(jint arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	android::transition::Transition Transition::removeTarget(JClass arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0.object<jclass>()
		);
	}
	android::transition::Transition Transition::removeTarget(JString arg0) const
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0.object<jstring>()
		);
	}
	android::transition::Transition Transition::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	void Transition::setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0) const
	{
		callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.object()
		);
	}
	android::transition::Transition Transition::setInterpolator(JObject arg0) const
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	void Transition::setMatchOrder(JIntArray arg0) const
	{
		callMethod<void>(
			"setMatchOrder",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void Transition::setPathMotion(android::transition::PathMotion arg0) const
	{
		callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.object()
		);
	}
	void Transition::setPropagation(android::transition::TransitionPropagation arg0) const
	{
		callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.object()
		);
	}
	android::transition::Transition Transition::setStartDelay(jlong arg0) const
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	JString Transition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::transition

