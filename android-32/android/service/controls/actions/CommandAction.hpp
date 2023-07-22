#pragma once

#include "../../../../JString.hpp"
#include "./CommandAction.def.hpp"

namespace android::service::controls::actions
{
	// Fields
	
	// Constructors
	inline CommandAction::CommandAction(JString arg0)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.CommandAction",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CommandAction::CommandAction(JString arg0, JString arg1)
		: android::service::controls::actions::ControlAction(
			"android.service.controls.actions.CommandAction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint CommandAction::getActionType() const
	{
		return callMethod<jint>(
			"getActionType",
			"()I"
		);
	}
} // namespace android::service::controls::actions

// Base class headers
#include "./ControlAction.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls::actions;
#endif
