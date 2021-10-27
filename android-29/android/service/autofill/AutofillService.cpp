#include "../../content/Intent.hpp"
#include "../../os/CancellationSignal.hpp"
#include "./FillCallback.hpp"
#include "./FillEventHistory.hpp"
#include "./FillRequest.hpp"
#include "./SaveCallback.hpp"
#include "./SaveRequest.hpp"
#include "./AutofillService.hpp"

namespace android::service::autofill
{
	// Fields
	jstring AutofillService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AutofillService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	AutofillService::AutofillService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AutofillService::AutofillService()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.AutofillService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AutofillService::getFillEventHistory()
	{
		return __thiz.callObjectMethod(
			"getFillEventHistory",
			"()Landroid/service/autofill/FillEventHistory;"
		);
	}
	QAndroidJniObject AutofillService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void AutofillService::onConnected()
	{
		__thiz.callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void AutofillService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void AutofillService::onDisconnected()
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"()V"
		);
	}
	void AutofillService::onFillRequest(android::service::autofill::FillRequest arg0, android::os::CancellationSignal arg1, android::service::autofill::FillCallback arg2)
	{
		__thiz.callMethod<void>(
			"onFillRequest",
			"(Landroid/service/autofill/FillRequest;Landroid/os/CancellationSignal;Landroid/service/autofill/FillCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void AutofillService::onSaveRequest(android::service::autofill::SaveRequest arg0, android::service::autofill::SaveCallback arg1)
	{
		__thiz.callMethod<void>(
			"onSaveRequest",
			"(Landroid/service/autofill/SaveRequest;Landroid/service/autofill/SaveCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::service::autofill

