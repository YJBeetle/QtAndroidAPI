#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "./PathMotion.hpp"
#include "./Transition_EpicenterCallback.hpp"
#include "./TransitionPropagation.hpp"
#include "./TransitionValues.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
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
	android::transition::Transition Transition::addListener(JObject arg0)
	{
		return callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::addTarget(android::view::View arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::addTarget(jint arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	android::transition::Transition Transition::addTarget(jclass arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0
		);
	}
	android::transition::Transition Transition::addTarget(jstring arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0
		);
	}
	jboolean Transition::canRemoveViews()
	{
		return callMethod<jboolean>(
			"canRemoveViews",
			"()Z"
		);
	}
	void Transition::captureEndValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void Transition::captureStartValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::transition::Transition Transition::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/transition/Transition;"
		);
	}
	android::animation::Animator Transition::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::transition::Transition Transition::excludeChildren(android::view::View arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeChildren",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	android::transition::Transition Transition::excludeChildren(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeChildren",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition Transition::excludeChildren(jclass arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeChildren",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(android::view::View arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(jclass arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	android::transition::Transition Transition::excludeTarget(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	jlong Transition::getDuration()
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	android::graphics::Rect Transition::getEpicenter()
	{
		return callObjectMethod(
			"getEpicenter",
			"()Landroid/graphics/Rect;"
		);
	}
	android::transition::Transition_EpicenterCallback Transition::getEpicenterCallback()
	{
		return callObjectMethod(
			"getEpicenterCallback",
			"()Landroid/transition/Transition$EpicenterCallback;"
		);
	}
	JObject Transition::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jstring Transition::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::transition::PathMotion Transition::getPathMotion()
	{
		return callObjectMethod(
			"getPathMotion",
			"()Landroid/transition/PathMotion;"
		);
	}
	android::transition::TransitionPropagation Transition::getPropagation()
	{
		return callObjectMethod(
			"getPropagation",
			"()Landroid/transition/TransitionPropagation;"
		);
	}
	jlong Transition::getStartDelay()
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	JObject Transition::getTargetIds()
	{
		return callObjectMethod(
			"getTargetIds",
			"()Ljava/util/List;"
		);
	}
	JObject Transition::getTargetNames()
	{
		return callObjectMethod(
			"getTargetNames",
			"()Ljava/util/List;"
		);
	}
	JObject Transition::getTargetTypes()
	{
		return callObjectMethod(
			"getTargetTypes",
			"()Ljava/util/List;"
		);
	}
	JObject Transition::getTargets()
	{
		return callObjectMethod(
			"getTargets",
			"()Ljava/util/List;"
		);
	}
	jarray Transition::getTransitionProperties()
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	android::transition::TransitionValues Transition::getTransitionValues(android::view::View arg0, jboolean arg1)
	{
		return callObjectMethod(
			"getTransitionValues",
			"(Landroid/view/View;Z)Landroid/transition/TransitionValues;",
			arg0.object(),
			arg1
		);
	}
	jboolean Transition::isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1)
	{
		return callMethod<jboolean>(
			"isTransitionRequired",
			"(Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::transition::Transition Transition::removeListener(JObject arg0)
	{
		return callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::removeTarget(android::view::View arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	android::transition::Transition Transition::removeTarget(jint arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	android::transition::Transition Transition::removeTarget(jclass arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0
		);
	}
	android::transition::Transition Transition::removeTarget(jstring arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0
		);
	}
	android::transition::Transition Transition::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	void Transition::setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0)
	{
		callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.object()
		);
	}
	android::transition::Transition Transition::setInterpolator(JObject arg0)
	{
		return callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	void Transition::setMatchOrder(jintArray arg0)
	{
		callMethod<void>(
			"setMatchOrder",
			"([I)V",
			arg0
		);
	}
	void Transition::setPathMotion(android::transition::PathMotion arg0)
	{
		callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.object()
		);
	}
	void Transition::setPropagation(android::transition::TransitionPropagation arg0)
	{
		callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.object()
		);
	}
	android::transition::Transition Transition::setStartDelay(jlong arg0)
	{
		return callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/Transition;",
			arg0
		);
	}
	jstring Transition::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::transition

