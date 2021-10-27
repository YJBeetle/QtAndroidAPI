#include "./Animator.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LayoutTransition.hpp"

namespace android::animation
{
	// Fields
	jint LayoutTransition::APPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"APPEARING"
		);
	}
	jint LayoutTransition::CHANGE_APPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_APPEARING"
		);
	}
	jint LayoutTransition::CHANGE_DISAPPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_DISAPPEARING"
		);
	}
	jint LayoutTransition::CHANGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGING"
		);
	}
	jint LayoutTransition::DISAPPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"DISAPPEARING"
		);
	}
	
	LayoutTransition::LayoutTransition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LayoutTransition::LayoutTransition()
	{
		__thiz = QAndroidJniObject(
			"android.animation.LayoutTransition",
			"()V"
		);
	}
	
	// Methods
	void LayoutTransition::addChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"addChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::addTransitionListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutTransition::disableTransitionType(jint arg0)
	{
		__thiz.callMethod<void>(
			"disableTransitionType",
			"(I)V",
			arg0
		);
	}
	void LayoutTransition::enableTransitionType(jint arg0)
	{
		__thiz.callMethod<void>(
			"enableTransitionType",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject LayoutTransition::getAnimator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimator",
			"(I)Landroid/animation/Animator;",
			arg0
		);
	}
	jlong LayoutTransition::getDuration(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject LayoutTransition::getInterpolator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"(I)Landroid/animation/TimeInterpolator;",
			arg0
		);
	}
	jlong LayoutTransition::getStagger(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getStagger",
			"(I)J",
			arg0
		);
	}
	jlong LayoutTransition::getStartDelay(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"(I)J",
			arg0
		);
	}
	QAndroidJniObject LayoutTransition::getTransitionListeners()
	{
		return __thiz.callObjectMethod(
			"getTransitionListeners",
			"()Ljava/util/List;"
		);
	}
	void LayoutTransition::hideChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::hideChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean LayoutTransition::isChangingLayout()
	{
		return __thiz.callMethod<jboolean>(
			"isChangingLayout",
			"()Z"
		);
	}
	jboolean LayoutTransition::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean LayoutTransition::isTransitionTypeEnabled(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionTypeEnabled",
			"(I)Z",
			arg0
		);
	}
	void LayoutTransition::removeChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"removeChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::removeTransitionListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutTransition::setAnimateParentHierarchy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimateParentHierarchy",
			"(Z)V",
			arg0
		);
	}
	void LayoutTransition::setAnimator(jint arg0, android::animation::Animator arg1)
	{
		__thiz.callMethod<void>(
			"setAnimator",
			"(ILandroid/animation/Animator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::setDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void LayoutTransition::setDuration(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void LayoutTransition::setInterpolator(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(ILandroid/animation/TimeInterpolator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::setStagger(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setStagger",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void LayoutTransition::setStartDelay(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setStartDelay",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void LayoutTransition::showChild(android::view::ViewGroup arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::showChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::animation

