#include "../ComponentName.hpp"
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
		return getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_APPWIDGET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LauncherApps::ACTION_CONFIRM_PIN_SHORTCUT()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LauncherApps::EXTRA_PIN_ITEM_REQUEST()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherApps",
			"EXTRA_PIN_ITEM_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	LauncherApps::LauncherApps(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject LauncherApps::getActivityList(jstring arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.object()
		);
	}
	JObject LauncherApps::getAllPackageInstallerSessions()
	{
		return callObjectMethod(
			"getAllPackageInstallerSessions",
			"()Ljava/util/List;"
		);
	}
	android::content::pm::ApplicationInfo LauncherApps::getApplicationInfo(jstring arg0, jint arg1, android::os::UserHandle arg2)
	{
		return callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;ILandroid/os/UserHandle;)Landroid/content/pm/ApplicationInfo;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::content::pm::LauncherApps_PinItemRequest LauncherApps::getPinItemRequest(android::content::Intent arg0)
	{
		return callObjectMethod(
			"getPinItemRequest",
			"(Landroid/content/Intent;)Landroid/content/pm/LauncherApps$PinItemRequest;",
			arg0.object()
		);
	}
	JObject LauncherApps::getProfiles()
	{
		return callObjectMethod(
			"getProfiles",
			"()Ljava/util/List;"
		);
	}
	android::graphics::drawable::Drawable LauncherApps::getShortcutBadgedIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1)
	{
		return callObjectMethod(
			"getShortcutBadgedIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	android::content::IntentSender LauncherApps::getShortcutConfigActivityIntent(android::content::pm::LauncherActivityInfo arg0)
	{
		return callObjectMethod(
			"getShortcutConfigActivityIntent",
			"(Landroid/content/pm/LauncherActivityInfo;)Landroid/content/IntentSender;",
			arg0.object()
		);
	}
	JObject LauncherApps::getShortcutConfigActivityList(jstring arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getShortcutConfigActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.object()
		);
	}
	android::graphics::drawable::Drawable LauncherApps::getShortcutIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1)
	{
		return callObjectMethod(
			"getShortcutIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	JObject LauncherApps::getShortcuts(android::content::pm::LauncherApps_ShortcutQuery arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getShortcuts",
			"(Landroid/content/pm/LauncherApps$ShortcutQuery;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle LauncherApps::getSuspendedPackageLauncherExtras(jstring arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getSuspendedPackageLauncherExtras",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Landroid/os/Bundle;",
			arg0,
			arg1.object()
		);
	}
	jboolean LauncherApps::hasShortcutHostPermission()
	{
		return callMethod<jboolean>(
			"hasShortcutHostPermission",
			"()Z"
		);
	}
	jboolean LauncherApps::isActivityEnabled(android::content::ComponentName arg0, android::os::UserHandle arg1)
	{
		return callMethod<jboolean>(
			"isActivityEnabled",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean LauncherApps::isPackageEnabled(jstring arg0, android::os::UserHandle arg1)
	{
		return callMethod<jboolean>(
			"isPackageEnabled",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			arg0,
			arg1.object()
		);
	}
	void LauncherApps::pinShortcuts(jstring arg0, JObject arg1, android::os::UserHandle arg2)
	{
		callMethod<void>(
			"pinShortcuts",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void LauncherApps::registerCallback(android::content::pm::LauncherApps_Callback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.object()
		);
	}
	void LauncherApps::registerCallback(android::content::pm::LauncherApps_Callback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LauncherApps::registerPackageInstallerSessionCallback(JObject arg0, android::content::pm::PackageInstaller_SessionCallback arg1)
	{
		callMethod<void>(
			"registerPackageInstallerSessionCallback",
			"(Ljava/util/concurrent/Executor;Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::pm::LauncherActivityInfo LauncherApps::resolveActivity(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"resolveActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)Landroid/content/pm/LauncherActivityInfo;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean LauncherApps::shouldHideFromSuggestions(jstring arg0, android::os::UserHandle arg1)
	{
		return callMethod<jboolean>(
			"shouldHideFromSuggestions",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			arg0,
			arg1.object()
		);
	}
	void LauncherApps::startAppDetailsActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3)
	{
		callMethod<void>(
			"startAppDetailsActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void LauncherApps::startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3)
	{
		callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void LauncherApps::startPackageInstallerSessionDetailsActivity(android::content::pm::PackageInstaller_SessionInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"startPackageInstallerSessionDetailsActivity",
			"(Landroid/content/pm/PackageInstaller$SessionInfo;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void LauncherApps::startShortcut(android::content::pm::ShortcutInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"startShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void LauncherApps::startShortcut(jstring arg0, jstring arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4)
	{
		callMethod<void>(
			"startShortcut",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Rect;Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void LauncherApps::unregisterCallback(android::content::pm::LauncherApps_Callback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.object()
		);
	}
	void LauncherApps::unregisterPackageInstallerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		callMethod<void>(
			"unregisterPackageInstallerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.object()
		);
	}
} // namespace android::content::pm

