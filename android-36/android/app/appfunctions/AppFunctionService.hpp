#pragma once

#include "./ExecuteAppFunctionRequest.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../content/pm/SigningInfo.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../../JString.hpp"
#include "./AppFunctionService.def.hpp"

namespace android::app::appfunctions
{
	// Fields
	inline JString AppFunctionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.app.appfunctions.AppFunctionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline AppFunctionService::AppFunctionService()
		: android::app::Service(
			"android.app.appfunctions.AppFunctionService",
			"()V"
		) {}
	
	// Methods
	inline JObject AppFunctionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void AppFunctionService::onExecuteFunction(android::app::appfunctions::ExecuteAppFunctionRequest arg0, JString arg1, android::content::pm::SigningInfo arg2, android::os::CancellationSignal arg3, JObject arg4) const
	{
		callMethod<void>(
			"onExecuteFunction",
			"(Landroid/app/appfunctions/ExecuteAppFunctionRequest;Ljava/lang/String;Landroid/content/pm/SigningInfo;Landroid/os/CancellationSignal;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::app::appfunctions

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appfunctions;
#endif
