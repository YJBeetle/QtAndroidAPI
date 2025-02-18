#pragma once

#include "./SurfacePackageToken.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "./OnDevicePersonalizationManager.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void OnDevicePersonalizationManager::execute(android::content::ComponentName arg0, android::os::PersistableBundle arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"execute",
			"(Landroid/content/ComponentName;Landroid/os/PersistableBundle;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void OnDevicePersonalizationManager::requestSurfacePackage(android::adservices::ondevicepersonalization::SurfacePackageToken arg0, JObject arg1, jint arg2, jint arg3, jint arg4, JObject arg5, JObject arg6) const
	{
		callMethod<void>(
			"requestSurfacePackage",
			"(Landroid/adservices/ondevicepersonalization/SurfacePackageToken;Landroid/os/IBinder;IIILjava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
