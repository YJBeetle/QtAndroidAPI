#include "./ModeAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// QAndroidJniObject forward
	ModeAction::ModeAction(QAndroidJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
	
	// Constructors
	ModeAction::ModeAction(jstring arg0, jint arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.ModeAction",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	ModeAction::ModeAction(jstring arg0, jint arg1, jstring arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.ModeAction",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint ModeAction::getActionType()
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	jint ModeAction::getNewMode()
	{
		return callMethod<jint>(
			"getNewMode",
			"()I"
		);
	}
} // namespace android::service::controls::actions

