#pragma once

#include "../content/Intent.def.hpp"
#include "../telecom/PhoneAccountHandle.def.hpp"
#include "./VisualVoicemailService_VisualVoicemailTask.def.hpp"
#include "./VisualVoicemailSms.def.hpp"
#include "../../JString.hpp"
#include "./VisualVoicemailService.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString VisualVoicemailService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telephony.VisualVoicemailService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline VisualVoicemailService::VisualVoicemailService()
		: android::app::Service(
			"android.telephony.VisualVoicemailService",
			"()V"
		) {}
	
	// Methods
	inline JObject VisualVoicemailService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void VisualVoicemailService::onCellServiceConnected(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1) const
	{
		callMethod<void>(
			"onCellServiceConnected",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void VisualVoicemailService::onSimRemoved(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1) const
	{
		callMethod<void>(
			"onSimRemoved",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void VisualVoicemailService::onSmsReceived(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telephony::VisualVoicemailSms arg1) const
	{
		callMethod<void>(
			"onSmsReceived",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telephony/VisualVoicemailSms;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void VisualVoicemailService::onStopped(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0) const
	{
		callMethod<void>(
			"onStopped",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
