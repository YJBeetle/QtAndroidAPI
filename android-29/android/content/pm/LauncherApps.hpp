#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentSender;
}
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::content::pm
{
	class LauncherActivityInfo;
}
namespace android::content::pm
{
	class LauncherApps_Callback;
}
namespace android::content::pm
{
	class LauncherApps_PinItemRequest;
}
namespace android::content::pm
{
	class LauncherApps_ShortcutQuery;
}
namespace android::content::pm
{
	class PackageInstaller_SessionCallback;
}
namespace android::content::pm
{
	class PackageInstaller_SessionInfo;
}
namespace android::content::pm
{
	class ShortcutInfo;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class UserHandle;
}

namespace android::content::pm
{
	class LauncherApps : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONFIRM_PIN_APPWIDGET();
		static jstring ACTION_CONFIRM_PIN_SHORTCUT();
		static jstring EXTRA_PIN_ITEM_REQUEST();
		
		LauncherApps(QAndroidJniObject obj);
		// Constructors
		LauncherApps() = default;
		
		// Methods
		QAndroidJniObject getActivityList(jstring arg0, android::os::UserHandle arg1);
		QAndroidJniObject getActivityList(const QString &arg0, android::os::UserHandle arg1);
		QAndroidJniObject getAllPackageInstallerSessions();
		QAndroidJniObject getApplicationInfo(jstring arg0, jint arg1, android::os::UserHandle arg2);
		QAndroidJniObject getApplicationInfo(const QString &arg0, jint arg1, android::os::UserHandle arg2);
		QAndroidJniObject getPinItemRequest(android::content::Intent arg0);
		QAndroidJniObject getProfiles();
		QAndroidJniObject getShortcutBadgedIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1);
		QAndroidJniObject getShortcutConfigActivityIntent(android::content::pm::LauncherActivityInfo arg0);
		QAndroidJniObject getShortcutConfigActivityList(jstring arg0, android::os::UserHandle arg1);
		QAndroidJniObject getShortcutConfigActivityList(const QString &arg0, android::os::UserHandle arg1);
		QAndroidJniObject getShortcutIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1);
		QAndroidJniObject getShortcuts(android::content::pm::LauncherApps_ShortcutQuery arg0, android::os::UserHandle arg1);
		QAndroidJniObject getSuspendedPackageLauncherExtras(jstring arg0, android::os::UserHandle arg1);
		QAndroidJniObject getSuspendedPackageLauncherExtras(const QString &arg0, android::os::UserHandle arg1);
		jboolean hasShortcutHostPermission();
		jboolean isActivityEnabled(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jboolean isPackageEnabled(jstring arg0, android::os::UserHandle arg1);
		jboolean isPackageEnabled(const QString &arg0, android::os::UserHandle arg1);
		void pinShortcuts(jstring arg0, __JniBaseClass arg1, android::os::UserHandle arg2);
		void pinShortcuts(const QString &arg0, __JniBaseClass arg1, android::os::UserHandle arg2);
		void registerCallback(android::content::pm::LauncherApps_Callback arg0);
		void registerCallback(android::content::pm::LauncherApps_Callback arg0, android::os::Handler arg1);
		void registerPackageInstallerSessionCallback(__JniBaseClass arg0, android::content::pm::PackageInstaller_SessionCallback arg1);
		QAndroidJniObject resolveActivity(android::content::Intent arg0, android::os::UserHandle arg1);
		jboolean shouldHideFromSuggestions(jstring arg0, android::os::UserHandle arg1);
		jboolean shouldHideFromSuggestions(const QString &arg0, android::os::UserHandle arg1);
		void startAppDetailsActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3);
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3);
		void startPackageInstallerSessionDetailsActivity(android::content::pm::PackageInstaller_SessionInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2);
		void startShortcut(android::content::pm::ShortcutInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2);
		void startShortcut(jstring arg0, jstring arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4);
		void startShortcut(const QString &arg0, const QString &arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4);
		void unregisterCallback(android::content::pm::LauncherApps_Callback arg0);
		void unregisterPackageInstallerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0);
	};
} // namespace android::content::pm

