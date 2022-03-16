#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../../JString.hpp"
#include "./VrListenerService.hpp"

namespace android::service::vr
{
	// Fields
	JString VrListenerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.vr.VrListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
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
	JObject VrListenerService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void VrListenerService::onCurrentVrActivityChanged(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"onCurrentVrActivityChanged",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
} // namespace android::service::vr

