#include "./Transition.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./TransitionPropagation.hpp"

namespace android::transition
{
	// Fields
	
	TransitionPropagation::TransitionPropagation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransitionPropagation::TransitionPropagation()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionPropagation",
			"()V"
		);
	}
	
	// Methods
	void TransitionPropagation::captureValues(android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	jarray TransitionPropagation::getPropagationProperties()
	{
		return __thiz.callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jlong TransitionPropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
} // namespace android::transition

