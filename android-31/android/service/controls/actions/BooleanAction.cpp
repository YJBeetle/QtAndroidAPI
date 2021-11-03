#include "../../../../JString.hpp"
#include "./BooleanAction.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// QJniObject forward
	BooleanAction::BooleanAction(QJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
	
	// Constructors
	BooleanAction::BooleanAction(JString arg0, jboolean arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.BooleanAction",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	BooleanAction::BooleanAction(JString arg0, jboolean arg1, JString arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.BooleanAction",
			"(Ljava/lang/String;ZLjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	jint BooleanAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	jboolean BooleanAction::getNewState() const
	{
		return callMethod<jboolean>(
			"getNewState",
			"()Z"
		);
	}
} // namespace android::service::controls::actions

