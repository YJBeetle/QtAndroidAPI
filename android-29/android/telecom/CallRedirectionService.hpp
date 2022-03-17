#pragma once

#include "../content/Intent.def.hpp"
#include "../net/Uri.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "./CallRedirectionService.def.hpp"

namespace android::telecom
{
	// Fields
	inline JString CallRedirectionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telecom.CallRedirectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CallRedirectionService::CallRedirectionService()
		: android::app::Service(
			"android.telecom.CallRedirectionService",
			"()V"
		) {}
	
	// Methods
	inline void CallRedirectionService::cancelCall() const
	{
		callMethod<void>(
			"cancelCall",
			"()V"
		);
	}
	inline JObject CallRedirectionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void CallRedirectionService::onPlaceCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onPlaceCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean CallRedirectionService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline void CallRedirectionService::placeCallUnmodified() const
	{
		callMethod<void>(
			"placeCallUnmodified",
			"()V"
		);
	}
	inline void CallRedirectionService::redirectCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2) const
	{
		callMethod<void>(
			"redirectCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::telecom

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

