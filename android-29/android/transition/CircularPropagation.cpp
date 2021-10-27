#include "./Transition.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./CircularPropagation.hpp"

namespace android::transition
{
	// Fields
	
	CircularPropagation::CircularPropagation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CircularPropagation::CircularPropagation()
	{
		__thiz = QAndroidJniObject(
			"android.transition.CircularPropagation",
			"()V"
		);
	}
	
	// Methods
	jlong CircularPropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
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
	void CircularPropagation::setPropagationSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPropagationSpeed",
			"(F)V",
			arg0
		);
	}
} // namespace android::transition

