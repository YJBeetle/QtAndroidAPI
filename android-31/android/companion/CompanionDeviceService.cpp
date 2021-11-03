#include "../content/Intent.hpp"
#include "./CompanionDeviceService.hpp"

namespace android::companion
{
	// Fields
	jstring CompanionDeviceService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.companion.CompanionDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	CompanionDeviceService::CompanionDeviceService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CompanionDeviceService::CompanionDeviceService()
		: android::app::Service(
			"android.companion.CompanionDeviceService",
			"()V"
		) {}
	
	// Methods
	JObject CompanionDeviceService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CompanionDeviceService::onDeviceAppeared(jstring arg0)
	{
		callMethod<void>(
			"onDeviceAppeared",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CompanionDeviceService::onDeviceDisappeared(jstring arg0)
	{
		callMethod<void>(
			"onDeviceDisappeared",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::companion

