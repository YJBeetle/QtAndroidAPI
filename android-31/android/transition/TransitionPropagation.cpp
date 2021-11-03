#include "../../JArray.hpp"
#include "./Transition.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./TransitionPropagation.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	TransitionPropagation::TransitionPropagation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TransitionPropagation::TransitionPropagation()
		: JObject(
			"android.transition.TransitionPropagation",
			"()V"
		) {}
	
	// Methods
	void TransitionPropagation::captureValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	JArray TransitionPropagation::getPropagationProperties() const
	{
		return callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		);
	}
	jlong TransitionPropagation::getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const
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

