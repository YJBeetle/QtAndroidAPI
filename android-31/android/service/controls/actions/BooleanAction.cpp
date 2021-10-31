#include "./BooleanAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// QJniObject forward
	BooleanAction::BooleanAction(QJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
	
	// Constructors
	BooleanAction::BooleanAction(jstring arg0, jboolean arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.BooleanAction",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	BooleanAction::BooleanAction(jstring arg0, jboolean arg1, jstring arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.BooleanAction",
			"(Ljava/lang/String;ZLjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint BooleanAction::getActionType()
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	jboolean BooleanAction::getNewState()
	{
		return callMethod<jboolean>(
			"getNewState",
			"()Z"
		);
	}
} // namespace android::service::controls::actions

