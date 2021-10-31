#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeTransform.hpp"

namespace android::transition
{
	// Fields
	
	ChangeTransform::ChangeTransform(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ChangeTransform::ChangeTransform()
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeTransform",
			"()V"
		);
	}
	ChangeTransform::ChangeTransform(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeTransform",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ChangeTransform::captureEndValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void ChangeTransform::captureStartValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ChangeTransform::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2)
	{
		return __thiz.callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean ChangeTransform::getReparent()
	{
		return __thiz.callMethod<jboolean>(
			"getReparent",
			"()Z"
		);
	}
	jboolean ChangeTransform::getReparentWithOverlay()
	{
		return __thiz.callMethod<jboolean>(
			"getReparentWithOverlay",
			"()Z"
		);
	}
	jarray ChangeTransform::getTransitionProperties()
	{
		return __thiz.callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void ChangeTransform::setReparent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	void ChangeTransform::setReparentWithOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReparentWithOverlay",
			"(Z)V",
			arg0
		);
	}
} // namespace android::transition

