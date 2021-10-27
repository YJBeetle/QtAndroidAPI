#include "../ComponentName.hpp"
#include "../Context.hpp"
#include "../Intent.hpp"
#include "../IntentSender.hpp"
#include "./ApplicationInfo.hpp"
#include "./LauncherActivityInfo.hpp"
#include "./LauncherApps_Callback.hpp"
#include "./LauncherApps_PinItemRequest.hpp"
#include "./LauncherApps_ShortcutQuery.hpp"
#include "./PackageInstaller_SessionCallback.hpp"
#include "./PackageInstaller_SessionInfo.hpp"
#include "./ShortcutInfo.hpp"
#include "../../graphics/Rect.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "../../os/UserHandle.hpp"
#include "./LauncherApps.hpp"

namespace android::content::pm
{
	// Fields
	jstring LauncherApps::ACTION_CONFIRM_PIN_APPWIDGET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_APPWIDGET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LauncherApps::ACTION_CONFIRM_PIN_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LauncherApps::EXTRA_PIN_ITEM_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps",
			"EXTRA_PIN_ITEM_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	LauncherApps::LauncherApps(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject LauncherApps::getActivityList(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getActivityList(const QString &arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getAllPackageInstallerSessions()
	{
		return __thiz.callObjectMethod(
			"getAllPackageInstallerSessions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject LauncherApps::getApplicationInfo(jstring arg0, jint arg1, android::os::UserHandle arg2)
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;ILandroid/os/UserHandle;)Landroid/content/pm/ApplicationInfo;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getApplicationInfo(const QString &arg0, jint arg1, android::os::UserHandle arg2)
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;ILandroid/os/UserHandle;)Landroid/content/pm/ApplicationInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getPinItemRequest(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"getPinItemRequest",
			"(Landroid/content/Intent;)Landroid/content/pm/LauncherApps$PinItemRequest;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getProfiles()
	{
		return __thiz.callObjectMethod(
			"getProfiles",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject LauncherApps::getShortcutBadgedIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcutBadgedIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject LauncherApps::getShortcutConfigActivityIntent(android::content::pm::LauncherActivityInfo arg0)
	{
		return __thiz.callObjectMethod(
			"getShortcutConfigActivityIntent",
			"(Landroid/content/pm/LauncherActivityInfo;)Landroid/content/IntentSender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getShortcutConfigActivityList(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcutConfigActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getShortcutConfigActivityList(const QString &arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcutConfigActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getShortcutIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcutIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject LauncherApps::getShortcuts(android::content::pm::LauncherApps_ShortcutQuery arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcuts",
			"(Landroid/content/pm/LauncherApps$ShortcutQuery;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getSuspendedPackageLauncherExtras(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getSuspendedPackageLauncherExtras",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Landroid/os/Bundle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::getSuspendedPackageLauncherExtras(const QString &arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getSuspendedPackageLauncherExtras",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean LauncherApps::hasShortcutHostPermission()
	{
		return __thiz.callMethod<jboolean>(
			"hasShortcutHostPermission",
			"()Z"
		);
	}
	jboolean LauncherApps::isActivityEnabled(android::content::ComponentName arg0, android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isActivityEnabled",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LauncherApps::isPackageEnabled(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isPackageEnabled",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean LauncherApps::isPackageEnabled(const QString &arg0, android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isPackageEnabled",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps::pinShortcuts(jstring arg0, __JniBaseClass arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"pinShortcuts",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps::pinShortcuts(const QString &arg0, __JniBaseClass arg1, android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"pinShortcuts",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps::registerCallback(android::content::pm::LauncherApps_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void LauncherApps::registerCallback(android::content::pm::LauncherApps_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps::registerPackageInstallerSessionCallback(__JniBaseClass arg0, android::content::pm::PackageInstaller_SessionCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerPackageInstallerSessionCallback",
			"(Ljava/util/concurrent/Executor;Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps::resolveActivity(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)Landroid/content/pm/LauncherActivityInfo;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LauncherApps::shouldHideFromSuggestions(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldHideFromSuggestions",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean LauncherApps::shouldHideFromSuggestions(const QString &arg0, android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldHideFromSuggestions",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps::startAppDetailsActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"startAppDetailsActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void LauncherApps::startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void LauncherApps::startPackageInstallerSessionDetailsActivity(android::content::pm::PackageInstaller_SessionInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startPackageInstallerSessionDetailsActivity",
			"(Landroid/content/pm/PackageInstaller$SessionInfo;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps::startShortcut(android::content::pm::ShortcutInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps::startShortcut(jstring arg0, jstring arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4)
	{
		__thiz.callMethod<void>(
			"startShortcut",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Rect;Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void LauncherApps::startShortcut(const QString &arg0, const QString &arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4)
	{
		__thiz.callMethod<void>(
			"startShortcut",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Rect;Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void LauncherApps::unregisterCallback(android::content::pm::LauncherApps_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void LauncherApps::unregisterPackageInstallerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterPackageInstallerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content::pm

