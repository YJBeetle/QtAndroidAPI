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
	
	// QAndroidJniObject forward
	CallRedirectionService::CallRedirectionService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CallRedirectionService::CallRedirectionService()
		: android::app::Service(
			"android.telecom.CallRedirectionService",
			"()V"
		) {}
	
	// Methods
	void CallRedirectionService::cancelCall()
	{
		callMethod<void>(
			"cancelCall",
			"()V"
		);
	}
	QAndroidJniObject CallRedirectionService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CallRedirectionService::onPlaceCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2)
	{
		callMethod<void>(
			"onPlaceCall",
			"(Landroid/net/Uri;Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean CallRedirectionService::onUnbind(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void CallRedirectionService::placeCallUnmodified()
	{
		callMethod<void>(
			"placeCallUnmodified",
			"()V"
		);
	}
	void CallRedirectionService::redirectCall(android::net::Uri arg0, android::telecom::PhoneAccountHandle arg1, jboolean arg2)
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

