#include "./CommandAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// QAndroidJniObject forward
	CommandAction::CommandAction(QAndroidJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
	
	// Constructors
	CommandAction::CommandAction(jstring arg0)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.CommandAction",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CommandAction::CommandAction(jstring arg0, jstring arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.CommandAction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint CommandAction::getActionType()
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
} // namespace android::service::controls::actions

