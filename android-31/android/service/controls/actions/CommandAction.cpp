#include "../../../../JString.hpp"
#include "./CommandAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// Constructors
	CommandAction::CommandAction(JString arg0)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.CommandAction",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CommandAction::CommandAction(JString arg0, JString arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.CommandAction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint CommandAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
} // namespace android::service::controls::actions

