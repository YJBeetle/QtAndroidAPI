#include "./Transition.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./SidePropagation.hpp"

namespace android::transition
{
	// Fields
	
	SidePropagation::SidePropagation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SidePropagation::SidePropagation()
	{
		__thiz = QAndroidJniObject(
			"android.transition.SidePropagation",
			"()V"
		);
	}
	
	// Methods
	jlong SidePropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	void SidePropagation::setPropagationSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPropagationSpeed",
			"(F)V",
			arg0
		);
	}
	void SidePropagation::setSide(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSide",
			"(I)V",
			arg0
		);
	}
} // namespace android::transition

