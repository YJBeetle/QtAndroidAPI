#include "../../../../JString.hpp"
#include "./FloatAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// Constructors
	FloatAction::FloatAction(JString arg0, jfloat arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.FloatAction",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		) {}
	FloatAction::FloatAction(JString arg0, jfloat arg1, JString arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.FloatAction",
			"(Ljava/lang/String;FLjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	jint FloatAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	jfloat FloatAction::getNewValue() const
	{
		return callMethod<jfloat>(
			"getNewValue",
			"()F"
		);
	}
} // namespace android::service::controls::actions

