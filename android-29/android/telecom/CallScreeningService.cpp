#include "../content/Intent.hpp"
#include "./Call_Details.hpp"
#include "./CallScreeningService_CallResponse.hpp"
#include "./CallScreeningService.hpp"

namespace android::telecom
{
	// Fields
	jstring CallScreeningService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.CallScreeningService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	CallScreeningService::CallScreeningService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CallScreeningService::CallScreeningService()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallScreeningService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CallScreeningService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void CallScreeningService::onScreenCall(android::telecom::Call_Details arg0)
	{
		__thiz.callMethod<void>(
			"onScreenCall",
			"(Landroid/telecom/Call$Details;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean CallScreeningService::onUnbind(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void CallScreeningService::respondToCall(android::telecom::Call_Details arg0, android::telecom::CallScreeningService_CallResponse arg1)
	{
		__thiz.callMethod<void>(
			"respondToCall",
			"(Landroid/telecom/Call$Details;Landroid/telecom/CallScreeningService$CallResponse;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::telecom

