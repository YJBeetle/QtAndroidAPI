#include "../../JArray.hpp"
#include "./TransitionValues.hpp"
#include "./VisibilityPropagation.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	VisibilityPropagation::VisibilityPropagation(QJniObject obj) : android::transition::TransitionPropagation(obj) {}
	
	// Constructors
	VisibilityPropagation::VisibilityPropagation()
		: android::transition::TransitionPropagation(
			"android.transition.VisibilityPropagation",
			"()V"
		) {}
	
	// Methods
	void VisibilityPropagation::captureValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	JArray VisibilityPropagation::getPropagationProperties() const
	{
		return callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		);
	}
	jint VisibilityPropagation::getViewVisibility(android::transition::TransitionValues arg0) const
	{
		return callMethod<jint>(
			"getViewVisibility",
			"(Landroid/transition/TransitionValues;)I",
			arg0.object()
		);
	}
	jint VisibilityPropagation::getViewX(android::transition::TransitionValues arg0) const
	{
		return callMethod<jint>(
			"getViewX",
			"(Landroid/transition/TransitionValues;)I",
			arg0.object()
		);
	}
	jint VisibilityPropagation::getViewY(android::transition::TransitionValues arg0) const
	{
		return callMethod<jint>(
			"getViewY",
			"(Landroid/transition/TransitionValues;)I",
			arg0.object()
		);
	}
} // namespace android::transition

