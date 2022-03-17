#pragma once

#include "../content/Intent.def.hpp"
#include "./Call_Details.def.hpp"
#include "./CallScreeningService_CallResponse.def.hpp"
#include "../../JString.hpp"
#include "./CallScreeningService.def.hpp"

namespace android::telecom
{
	// Fields
	inline JString CallScreeningService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telecom.CallScreeningService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CallScreeningService::CallScreeningService()
		: android::app::Service(
			"android.telecom.CallScreeningService",
			"()V"
		) {}
	
	// Methods
	inline JObject CallScreeningService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void CallScreeningService::onScreenCall(android::telecom::Call_Details arg0) const
	{
		callMethod<void>(
			"onScreenCall",
			"(Landroid/telecom/Call$Details;)V",
			arg0.object()
		);
	}
	inline jboolean CallScreeningService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline void CallScreeningService::respondToCall(android::telecom::Call_Details arg0, android::telecom::CallScreeningService_CallResponse arg1) const
	{
		callMethod<void>(
			"respondToCall",
			"(Landroid/telecom/Call$Details;Landroid/telecom/CallScreeningService$CallResponse;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telecom

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

