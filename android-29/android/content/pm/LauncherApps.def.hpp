#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::content::pm
{
	class LauncherApps : public JObject
	{
	public:
		// Fields
		static JString ACTION_CONFIRM_PIN_APPWIDGET();
		static JString ACTION_CONFIRM_PIN_SHORTCUT();
		static JString EXTRA_PIN_ITEM_REQUEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherApps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getActivityList(JString arg0, android::os::UserHandle arg1) const;
		JObject getAllPackageInstallerSessions() const;
		android::content::pm::ApplicationInfo getApplicationInfo(JString arg0, jint arg1, android::os::UserHandle arg2) const;
		android::content::pm::LauncherApps_PinItemRequest getPinItemRequest(android::content::Intent arg0) const;
		JObject getProfiles() const;
		android::graphics::drawable::Drawable getShortcutBadgedIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1) const;
		android::content::IntentSender getShortcutConfigActivityIntent(android::content::pm::LauncherActivityInfo arg0) const;
		JObject getShortcutConfigActivityList(JString arg0, android::os::UserHandle arg1) const;
		android::graphics::drawable::Drawable getShortcutIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1) const;
		JObject getShortcuts(android::content::pm::LauncherApps_ShortcutQuery arg0, android::os::UserHandle arg1) const;
		android::os::Bundle getSuspendedPackageLauncherExtras(JString arg0, android::os::UserHandle arg1) const;
		jboolean hasShortcutHostPermission() const;
		jboolean isActivityEnabled(android::content::ComponentName arg0, android::os::UserHandle arg1) const;
		jboolean isPackageEnabled(JString arg0, android::os::UserHandle arg1) const;
		void pinShortcuts(JString arg0, JObject arg1, android::os::UserHandle arg2) const;
		void registerCallback(android::content::pm::LauncherApps_Callback arg0) const;
		void registerCallback(android::content::pm::LauncherApps_Callback arg0, android::os::Handler arg1) const;
		void registerPackageInstallerSessionCallback(JObject arg0, android::content::pm::PackageInstaller_SessionCallback arg1) const;
		android::content::pm::LauncherActivityInfo resolveActivity(android::content::Intent arg0, android::os::UserHandle arg1) const;
		jboolean shouldHideFromSuggestions(JString arg0, android::os::UserHandle arg1) const;
		void startAppDetailsActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3) const;
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3) const;
		void startPackageInstallerSessionDetailsActivity(android::content::pm::PackageInstaller_SessionInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2) const;
		void startShortcut(android::content::pm::ShortcutInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2) const;
		void startShortcut(JString arg0, JString arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4) const;
		void unregisterCallback(android::content::pm::LauncherApps_Callback arg0) const;
		void unregisterPackageInstallerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0) const;
	};
} // namespace android::content::pm

