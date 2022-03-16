#include "../content/Intent.hpp"
#include "../../JString.hpp"
#include "./CompanionDeviceService.hpp"

namespace android::companion
{
	// Fields
	JString CompanionDeviceService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.companion.CompanionDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	CompanionDeviceService::CompanionDeviceService()
		: android::app::Service(
			"android.companion.CompanionDeviceService",
			"()V"
		) {}
	
	// Methods
	JObject CompanionDeviceService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CompanionDeviceService::onDeviceAppeared(JString arg0) const
	{
		callMethod<void>(
			"onDeviceAppeared",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void CompanionDeviceService::onDeviceDisappeared(JString arg0) const
	{
		callMethod<void>(
			"onDeviceDisappeared",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::companion

