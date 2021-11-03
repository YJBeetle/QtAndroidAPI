#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class ComponentName;
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
	class LauncherApps : public JObject
	{
	public:
		// Fields
		static jstring ACTION_CONFIRM_PIN_APPWIDGET();
		static jstring ACTION_CONFIRM_PIN_SHORTCUT();
		static jstring EXTRA_PIN_ITEM_REQUEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherApps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getActivityList(jstring arg0, android::os::UserHandle arg1);
		JObject getAllPackageInstallerSessions();
		android::content::pm::ApplicationInfo getApplicationInfo(jstring arg0, jint arg1, android::os::UserHandle arg2);
		android::content::pm::LauncherApps_PinItemRequest getPinItemRequest(android::content::Intent arg0);
		JObject getProfiles();
		android::graphics::drawable::Drawable getShortcutBadgedIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1);
		android::content::IntentSender getShortcutConfigActivityIntent(android::content::pm::LauncherActivityInfo arg0);
		JObject getShortcutConfigActivityList(jstring arg0, android::os::UserHandle arg1);
		android::graphics::drawable::Drawable getShortcutIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1);
		android::app::PendingIntent getShortcutIntent(jstring arg0, jstring arg1, android::os::Bundle arg2, android::os::UserHandle arg3);
		JObject getShortcuts(android::content::pm::LauncherApps_ShortcutQuery arg0, android::os::UserHandle arg1);
		android::os::Bundle getSuspendedPackageLauncherExtras(jstring arg0, android::os::UserHandle arg1);
		jboolean hasShortcutHostPermission();
		jboolean isActivityEnabled(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jboolean isPackageEnabled(jstring arg0, android::os::UserHandle arg1);
		void pinShortcuts(jstring arg0, JObject arg1, android::os::UserHandle arg2);
		void registerCallback(android::content::pm::LauncherApps_Callback arg0);
		void registerCallback(android::content::pm::LauncherApps_Callback arg0, android::os::Handler arg1);
		void registerPackageInstallerSessionCallback(JObject arg0, android::content::pm::PackageInstaller_SessionCallback arg1);
		android::content::pm::LauncherActivityInfo resolveActivity(android::content::Intent arg0, android::os::UserHandle arg1);
		jboolean shouldHideFromSuggestions(jstring arg0, android::os::UserHandle arg1);
		void startAppDetailsActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3);
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3);
		void startPackageInstallerSessionDetailsActivity(android::content::pm::PackageInstaller_SessionInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2);
		void startShortcut(android::content::pm::ShortcutInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2);
		void startShortcut(jstring arg0, jstring arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4);
		void unregisterCallback(android::content::pm::LauncherApps_Callback arg0);
		void unregisterPackageInstallerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0);
	};
} // namespace android::content::pm

