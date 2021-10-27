#include "../content/Intent.hpp"
#include "../net/Uri.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./CallRedirectionService.hpp"

namespace android::telecom
{
	// Fields
	jstring CallRedirectionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.CallRedirectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	CallRedirectionService::CallRedirectionService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CallRedirectionService::CallRedirectionService()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallRedirectionService",
			"()V"
		);
	}
	
	// Methods
	void CallRedirectionService::cancelCall()
	{
		__thiz.callMethod<void>(
			"cancelCall",
			"()V"
		);
	}
	QAndroidJniObject CallRedirectionService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void CallRedirectionService::onPlaceCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onPlaceCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean CallRedirectionService::onUnbind(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void CallRedirectionService::placeCallUnmodified()
	{
		__thiz.callMethod<void>(
			"placeCallUnmodified",
			"()V"
		);
	}
	void CallRedirectionService::redirectCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"redirectCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::telecom

