#include "../../content/Intent.hpp"
#include "./DeviceAdminService.hpp"

namespace android::app::admin
{
	// Fields
	
	// QJniObject forward
	DeviceAdminService::DeviceAdminService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	DeviceAdminService::DeviceAdminService()
		: android::app::Service(
			"android.app.admin.DeviceAdminService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass DeviceAdminService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::app::admin

