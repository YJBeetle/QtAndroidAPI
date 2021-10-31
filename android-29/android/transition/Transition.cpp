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
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ID"
		);
	}
	jint Transition::MATCH_INSTANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_INSTANCE"
		);
	}
	jint Transition::MATCH_ITEM_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_ITEM_ID"
		);
	}
	jint Transition::MATCH_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Transition",
			"MATCH_NAME"
		);
	}
	
	// QAndroidJniObject forward
	Transition::Transition(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Transition::Transition()
		: __JniBaseClass(
			"android.transition.Transition",
			"()V"
		) {}
	Transition::Transition(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.transition.Transition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject Transition::addListener(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	QAndroidJniObject Transition::addTarget(android::view::View arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	QAndroidJniObject Transition::addTarget(jint arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::addTarget(jclass arg0)
	{
		return callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::addTarget(jstring arg0)
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
	QAndroidJniObject Transition::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Transition::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject Transition::excludeChildren(android::view::View arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeChildren",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Transition::excludeChildren(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeChildren",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeChildren(jclass arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeChildren",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeTarget(android::view::View arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Transition::excludeTarget(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeTarget(jclass arg0, jboolean arg1)
	{
		return callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transition::excludeTarget(jstring arg0, jboolean arg1)
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
	QAndroidJniObject Transition::getEpicenter()
	{
		return callObjectMethod(
			"getEpicenter",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject Transition::getEpicenterCallback()
	{
		return callObjectMethod(
			"getEpicenterCallback",
			"()Landroid/transition/Transition$EpicenterCallback;"
		);
	}
	QAndroidJniObject Transition::getInterpolator()
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
	QAndroidJniObject Transition::getPathMotion()
	{
		return callObjectMethod(
			"getPathMotion",
			"()Landroid/transition/PathMotion;"
		);
	}
	QAndroidJniObject Transition::getPropagation()
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
	QAndroidJniObject Transition::getTargetIds()
	{
		return callObjectMethod(
			"getTargetIds",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Transition::getTargetNames()
	{
		return callObjectMethod(
			"getTargetNames",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Transition::getTargetTypes()
	{
		return callObjectMethod(
			"getTargetTypes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Transition::getTargets()
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
	QAndroidJniObject Transition::getTransitionValues(android::view::View arg0, jboolean arg1)
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
	QAndroidJniObject Transition::removeListener(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	QAndroidJniObject Transition::removeTarget(android::view::View arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/Transition;",
			arg0.object()
		);
	}
	QAndroidJniObject Transition::removeTarget(jint arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::removeTarget(jclass arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::removeTarget(jstring arg0)
	{
		return callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject Transition::setDuration(jlong arg0)
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
	QAndroidJniObject Transition::setInterpolator(__JniBaseClass arg0)
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
	QAndroidJniObject Transition::setStartDelay(jlong arg0)
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

