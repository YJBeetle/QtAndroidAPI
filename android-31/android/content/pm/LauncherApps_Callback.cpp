#include "../../os/Bundle.hpp"
#include "../../os/UserHandle.hpp"
#include "./LauncherApps_Callback.hpp"

namespace android::content::pm
{
	// Fields
	
	// QAndroidJniObject forward
	LauncherApps_Callback::LauncherApps_Callback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LauncherApps_Callback::LauncherApps_Callback()
		: __JniBaseClass(
			"android.content.pm.LauncherApps$Callback",
			"()V"
		) {}
	
	// Methods
	void LauncherApps_Callback::onPackageAdded(jstring arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"onPackageAdded",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackageChanged(jstring arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"onPackageChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackageLoadingProgressChanged(jstring arg0, android::os::UserHandle arg1, jfloat arg2)
	{
		callMethod<void>(
			"onPackageLoadingProgressChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;F)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackageRemoved(jstring arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"onPackageRemoved",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackagesAvailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2)
	{
		callMethod<void>(
			"onPackagesAvailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(jarray arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.object()
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(jarray arg0, android::os::UserHandle arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void LauncherApps_Callback::onPackagesUnavailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2)
	{
		callMethod<void>(
			"onPackagesUnavailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesUnsuspended(jarray arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"onPackagesUnsuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.object()
		);
	}
	void LauncherApps_Callback::onShortcutsChanged(jstring arg0, __JniBaseClass arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"onShortcutsChanged",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::content::pm

