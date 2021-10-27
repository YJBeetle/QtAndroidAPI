#include "./TransitionValues.hpp"
#include "./VisibilityPropagation.hpp"

namespace android::transition
{
	// Fields
	
	VisibilityPropagation::VisibilityPropagation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VisibilityPropagation::VisibilityPropagation()
	{
		__thiz = QAndroidJniObject(
			"android.transition.VisibilityPropagation",
			"()V"
		);
	}
	
	// Methods
	void VisibilityPropagation::captureValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	jarray VisibilityPropagation::getPropagationProperties()
	{
		return __thiz.callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint VisibilityPropagation::getViewVisibility(android::transition::TransitionValues arg0)
	{
		return __thiz.callMethod<jint>(
			"getViewVisibility",
			"(Landroid/transition/TransitionValues;)I",
			arg0.__jniObject().object()
		);
	}
	jint VisibilityPropagation::getViewX(android::transition::TransitionValues arg0)
	{
		return __thiz.callMethod<jint>(
			"getViewX",
			"(Landroid/transition/TransitionValues;)I",
			arg0.__jniObject().object()
		);
	}
	jint VisibilityPropagation::getViewY(android::transition::TransitionValues arg0)
	{
		return __thiz.callMethod<jint>(
			"getViewY",
			"(Landroid/transition/TransitionValues;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace android::transition

