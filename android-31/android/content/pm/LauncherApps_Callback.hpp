#pragma once

#include "../../../JArray.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "./LauncherApps_Callback.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline LauncherApps_Callback::LauncherApps_Callback()
		: JObject(
			"android.content.pm.LauncherApps$Callback",
			"()V"
		) {}
	
	// Methods
	inline void LauncherApps_Callback::onPackageAdded(JString arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackageAdded",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void LauncherApps_Callback::onPackageChanged(JString arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackageChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void LauncherApps_Callback::onPackageLoadingProgressChanged(JString arg0, android::os::UserHandle arg1, jfloat arg2) const
	{
		callMethod<void>(
			"onPackageLoadingProgressChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;F)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline void LauncherApps_Callback::onPackageRemoved(JString arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackageRemoved",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void LauncherApps_Callback::onPackagesAvailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onPackagesAvailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2
		);
	}
	inline void LauncherApps_Callback::onPackagesSuspended(JArray arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void LauncherApps_Callback::onPackagesSuspended(JArray arg0, android::os::UserHandle arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void LauncherApps_Callback::onPackagesUnavailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onPackagesUnavailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2
		);
	}
	inline void LauncherApps_Callback::onPackagesUnsuspended(JArray arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackagesUnsuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void LauncherApps_Callback::onShortcutsChanged(JString arg0, JObject arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"onShortcutsChanged",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
