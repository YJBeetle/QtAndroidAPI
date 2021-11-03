#include "../../../JArray.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JString.hpp"
#include "./LauncherApps_Callback.hpp"

namespace android::content::pm
{
	// Fields
	
	// QAndroidJniObject forward
	LauncherApps_Callback::LauncherApps_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LauncherApps_Callback::LauncherApps_Callback()
		: JObject(
			"android.content.pm.LauncherApps$Callback",
			"()V"
		) {}
	
	// Methods
	void LauncherApps_Callback::onPackageAdded(JString arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackageAdded",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackageChanged(JString arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackageChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackageRemoved(JString arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackageRemoved",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackagesAvailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onPackagesAvailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(JArray arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(JArray arg0, android::os::UserHandle arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object()
		);
	}
	void LauncherApps_Callback::onPackagesUnavailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onPackagesUnavailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesUnsuspended(JArray arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"onPackagesUnsuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void LauncherApps_Callback::onShortcutsChanged(JString arg0, JObject arg1, android::os::UserHandle arg2) const
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

