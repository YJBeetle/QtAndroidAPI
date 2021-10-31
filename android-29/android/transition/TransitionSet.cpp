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
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_SEQUENTIAL"
		);
	}
	jint TransitionSet::ORDERING_TOGETHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_TOGETHER"
		);
	}
	
	TransitionSet::TransitionSet(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransitionSet::TransitionSet()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionSet",
			"()V"
		);
	}
	TransitionSet::TransitionSet(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TransitionSet::addListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::addTarget(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::addTarget(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::addTarget(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::addTarget(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::addTransition(android::transition::Transition arg0)
	{
		return __thiz.callObjectMethod(
			"addTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	void TransitionSet::captureEndValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionSet::captureStartValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/transition/TransitionSet;"
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(android::view::View arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(jclass arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	jint TransitionSet::getOrdering()
	{
		return __thiz.callMethod<jint>(
			"getOrdering",
			"()I"
		);
	}
	QAndroidJniObject TransitionSet::getTransitionAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTransitionAt",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	jint TransitionSet::getTransitionCount()
	{
		return __thiz.callMethod<jint>(
			"getTransitionCount",
			"()I"
		);
	}
	QAndroidJniObject TransitionSet::removeListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::removeTransition(android::transition::Transition arg0)
	{
		return __thiz.callObjectMethod(
			"removeTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	void TransitionSet::setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0)
	{
		__thiz.callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setInterpolator(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setOrdering(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setOrdering",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	void TransitionSet::setPathMotion(android::transition::PathMotion arg0)
	{
		__thiz.callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionSet::setPropagation(android::transition::TransitionPropagation arg0)
	{
		__thiz.callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setStartDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
} // namespace android::transition

