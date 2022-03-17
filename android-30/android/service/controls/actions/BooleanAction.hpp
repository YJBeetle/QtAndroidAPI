#pragma once

#include "../../../../JString.hpp"
#include "./BooleanAction.def.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// Constructors
	inline BooleanAction::BooleanAction(JString arg0, jboolean arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.BooleanAction",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline BooleanAction::BooleanAction(JString arg0, jboolean arg1, JString arg2)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.BooleanAction",
			"(Ljava/lang/String;ZLjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint BooleanAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
	inline jboolean BooleanAction::getNewState() const
	{
		return callMethod<jboolean>(
			"getNewState",
			"()Z"
		);
	}
} // namespace android::service::controls::actions

// Base class headers
#include "./ControlAction.hpp"

