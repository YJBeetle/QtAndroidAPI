#include "../../content/Intent.hpp"
#include "./DeviceAdminService.hpp"

namespace android::app::admin
{
	// Fields
	
	DeviceAdminService::DeviceAdminService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DeviceAdminService::DeviceAdminService()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DeviceAdminService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DeviceAdminService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app::admin

