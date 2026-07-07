#pragma once

#include "./ExecuteAppFunctionRequest.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../../JString.hpp"
#include "./AppFunctionManager.def.hpp"

namespace android::app::appfunctions
{
	// Fields
	inline jint AppFunctionManager::APP_FUNCTION_STATE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionManager",
			"APP_FUNCTION_STATE_DEFAULT"
		);
	}
	inline jint AppFunctionManager::APP_FUNCTION_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionManager",
			"APP_FUNCTION_STATE_DISABLED"
		);
	}
	inline jint AppFunctionManager::APP_FUNCTION_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionManager",
			"APP_FUNCTION_STATE_ENABLED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void AppFunctionManager::executeAppFunction(android::app::appfunctions::ExecuteAppFunctionRequest arg0, JObject arg1, android::os::CancellationSignal arg2, JObject arg3) const
	{
		callMethod<void>(
			"executeAppFunction",
			"(Landroid/app/appfunctions/ExecuteAppFunctionRequest;Ljava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void AppFunctionManager::isAppFunctionEnabled(JString arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"isAppFunctionEnabled",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AppFunctionManager::isAppFunctionEnabled(JString arg0, JString arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"isAppFunctionEnabled",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void AppFunctionManager::setAppFunctionEnabled(JString arg0, jint arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"setAppFunctionEnabled",
			"(Ljava/lang/String;ILjava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::app::appfunctions

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appfunctions;
#endif
