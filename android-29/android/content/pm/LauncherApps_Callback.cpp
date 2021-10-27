#include "../../os/Bundle.hpp"
#include "../../os/UserHandle.hpp"
#include "./LauncherApps_Callback.hpp"

namespace android::content::pm
{
	// Fields
	
	LauncherApps_Callback::LauncherApps_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LauncherApps_Callback::LauncherApps_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LauncherApps$Callback",
			"()V"
		);
	}
	
	// Methods
	void LauncherApps_Callback::onPackageAdded(jstring arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageAdded",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageAdded(const QString &arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageAdded",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageChanged(jstring arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageChanged(const QString &arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageRemoved(jstring arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageRemoved",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageRemoved(const QString &arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageRemoved",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackagesAvailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onPackagesAvailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(jarray arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(jarray arg0, android::os::UserHandle arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackagesUnavailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onPackagesUnavailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesUnsuspended(jarray arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackagesUnsuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onShortcutsChanged(jstring arg0, __JniBaseClass arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onShortcutsChanged",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onShortcutsChanged(const QString &arg0, __JniBaseClass arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onShortcutsChanged",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::content::pm

