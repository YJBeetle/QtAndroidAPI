#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeBounds.hpp"

namespace android::transition
{
	// Fields
	
	ChangeBounds::ChangeBounds(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ChangeBounds::ChangeBounds()
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeBounds",
			"()V"
		);
	}
	ChangeBounds::ChangeBounds(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeBounds",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ChangeBounds::captureEndValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void ChangeBounds::captureStartValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ChangeBounds::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return __thiz.callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean ChangeBounds::getResizeClip()
	{
		return __thiz.callMethod<jboolean>(
			"getResizeClip",
			"()Z"
		);
	}
	jarray ChangeBounds::getTransitionProperties()
	{
		return __thiz.callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void ChangeBounds::setReparent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	void ChangeBounds::setResizeClip(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setResizeClip",
			"(Z)V",
			arg0
		);
	}
} // namespace android::transition

