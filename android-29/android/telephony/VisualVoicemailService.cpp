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
	
	VisualVoicemailService::VisualVoicemailService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VisualVoicemailService::VisualVoicemailService()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.VisualVoicemailService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject VisualVoicemailService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void VisualVoicemailService::onCellServiceConnected(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1)
	{
		__thiz.callMethod<void>(
			"onCellServiceConnected",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VisualVoicemailService::onSimRemoved(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telecom::PhoneAccountHandle arg1)
	{
		__thiz.callMethod<void>(
			"onSimRemoved",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telecom/PhoneAccountHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VisualVoicemailService::onSmsReceived(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0, android::telephony::VisualVoicemailSms arg1)
	{
		__thiz.callMethod<void>(
			"onSmsReceived",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;Landroid/telephony/VisualVoicemailSms;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VisualVoicemailService::onStopped(android::telephony::VisualVoicemailService_VisualVoicemailTask arg0)
	{
		__thiz.callMethod<void>(
			"onStopped",
			"(Landroid/telephony/VisualVoicemailService$VisualVoicemailTask;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telephony

