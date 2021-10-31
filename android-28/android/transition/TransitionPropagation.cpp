#include "./Transition.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./TransitionPropagation.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	TransitionPropagation::TransitionPropagation(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TransitionPropagation::TransitionPropagation()
		: __JniBaseClass(
			"android.transition.TransitionPropagation",
			"()V"
		) {}
	
	// Methods
	void TransitionPropagation::captureValues(android::transition::TransitionValues arg0)
	{
		callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	jarray TransitionPropagation::getPropagationProperties()
	{
		return callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jlong TransitionPropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3)
	{
		return callMethod<jlong>(
			"getStartDelay",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)J",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::transition

