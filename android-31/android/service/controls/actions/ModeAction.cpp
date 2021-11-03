#include "../../../../JString.hpp"
#include "./ModeAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// QJniObject forward
	ModeAction::ModeAction(QJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
	
	// Constructors
	ModeAction::ModeAction(JString arg0, jint arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.ModeAction",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	ModeAction::ModeAction(JString arg0, jint arg1, JString arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.ModeAction",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	jint ModeAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	jint ModeAction::getNewMode() const
	{
		return callMethod<jint>(
			"getNewMode",
			"()I"
		);
	}
} // namespace android::service::controls::actions

