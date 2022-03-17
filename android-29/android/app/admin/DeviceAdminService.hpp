#pragma once

#include "../../content/Intent.def.hpp"
#include "./DeviceAdminService.def.hpp"

namespace android::app::admin
{
	// Fields
	
	// Constructors
	inline DeviceAdminService::DeviceAdminService()
		: android::app::Service(
			"android.app.admin.DeviceAdminService",
			"()V"
		) {}
	
	// Methods
	inline JObject DeviceAdminService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::app::admin

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
