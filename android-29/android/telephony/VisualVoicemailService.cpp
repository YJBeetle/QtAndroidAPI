#include "../content/Intent.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "./VisualVoicemailService_VisualVoicemailTask.hpp"
#include "./VisualVoicemailSms.hpp"
#include "../../JString.hpp"
#include "./VisualVoicemailService.hpp"

namespace android::telephony
{
	// Fields
	JString VisualVoicemailService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telephony.VisualVoicemailService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	VisualVoicemailService::VisualVoicemailService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VisualVoicemailService::VisualVoicemailService()
		: android::app::Service(
			"android.telephony.VisualVoicemailService",
			"()V"
		) {}
	
	// Methods
	JObject VisualVoicemailService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void VisualVoicemailService::onCellServiceConnected(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1) const
	{
		callMethod<void>(
			"onCellServiceConnected",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VisualVoicemailService::onSimRemoved(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1) const
	{
		callMethod<void>(
			"onSimRemoved",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VisualVoicemailService::onSmsReceived(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telephony::VisualVoicemailSms arg1) const
	{
		callMethod<void>(
			"onSmsReceived",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telephony/VisualVoicemailSms;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VisualVoicemailService::onStopped(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0) const
	{
		callMethod<void>(
			"onStopped",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

