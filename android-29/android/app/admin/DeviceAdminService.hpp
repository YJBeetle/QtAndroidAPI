#pragma once

#ifndef ANDROID_APP_ADMIN_DEVICEADMINSERVICE
#define ANDROID_APP_ADMIN_DEVICEADMINSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::app::admin
{
	class DeviceAdminService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::app::admin

#include "../../content/Intent.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	
	// Constructors
	void DeviceAdminService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DeviceAdminService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject DeviceAdminService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class DeviceAdminService : public __jni_impl::android::app::admin::DeviceAdminService
	{
	public:
		DeviceAdminService(QAndroidJniObject obj) { __thiz = obj; }
		DeviceAdminService()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_DEVICEADMINSERVICE

