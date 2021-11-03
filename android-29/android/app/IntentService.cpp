#include "../content/Intent.hpp"
#include "../../JString.hpp"
#include "./IntentService.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	IntentService::IntentService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	IntentService::IntentService(JString arg0)
		: android::app::Service(
			"android.app.IntentService",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JObject IntentService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void IntentService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void IntentService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void IntentService::onStart(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	jint IntentService::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void IntentService::setIntentRedelivery(jboolean arg0) const
	{
		callMethod<void>(
			"setIntentRedelivery",
			"(Z)V",
			arg0
		);
	}
} // namespace android::app

