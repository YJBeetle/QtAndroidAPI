#pragma once

#include "../../../../JString.hpp"
#include "./ModeAction.def.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// Constructors
	inline ModeAction::ModeAction(JString arg0, jint arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.ModeAction",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline ModeAction::ModeAction(JString arg0, jint arg1, JString arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.ModeAction",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint ModeAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	inline jint ModeAction::getNewMode() const
	{
		return callMethod<jint>(
			"getNewMode",
			"()I"
		);
	}
} // namespace android::service::controls::actions

// Base class headers
#include "./ControlAction.hpp"

