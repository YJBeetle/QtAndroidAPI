#include "../content/Intent.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "./VisualVoicemailService_VisualVoicemailTask.hpp"
#include "./VisualVoicemailSms.hpp"
#include "./VisualVoicemailService.hpp"

namespace android::telephony
{
	// Fields
	jstring VisualVoicemailService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.VisualVoicemailService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	VisualVoicemailService::VisualVoicemailService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VisualVoicemailService::VisualVoicemailService()
		: android::app::Service(
			"android.telephony.VisualVoicemailService",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject VisualVoicemailService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void VisualVoicemailService::onCellServiceConnected(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1)
	{
		callMethod<void>(
			"onCellServiceConnected",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VisualVoicemailService::onSimRemoved(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1)
	{
		callMethod<void>(
			"onSimRemoved",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VisualVoicemailService::onSmsReceived(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telephony::VisualVoicemailSms arg1)
	{
		callMethod<void>(
			"onSmsReceived",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telephony/VisualVoicemailSms;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VisualVoicemailService::onStopped(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0)
	{
		callMethod<void>(
			"onStopped",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

