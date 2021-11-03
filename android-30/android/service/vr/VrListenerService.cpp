#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./VrListenerService.hpp"

namespace android::service::vr
{
	// Fields
	jstring VrListenerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.vr.VrListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	VrListenerService::VrListenerService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VrListenerService::VrListenerService()
		: android::app::Service(
			"android.service.vr.VrListenerService",
			"()V"
		) {}
	
	// Methods
	jboolean VrListenerService::isVrModePackageEnabled(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return callStaticMethod<jboolean>(
			"android.service.vr.VrListenerService",
			"isVrModePackageEnabled",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	JObject VrListenerService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void VrListenerService::onCurrentVrActivityChanged(android::content::ComponentName arg0)
	{
		callMethod<void>(
			"onCurrentVrActivityChanged",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
} // namespace android::service::vr

