#pragma once

#include "../ComponentName.def.hpp"
#include "../Context.def.hpp"
#include "../Intent.def.hpp"
#include "../IntentSender.def.hpp"
#include "./ApplicationInfo.def.hpp"
#include "./LauncherActivityInfo.def.hpp"
#include "./LauncherApps_Callback.def.hpp"
#include "./LauncherApps_PinItemRequest.def.hpp"
#include "./LauncherApps_ShortcutQuery.def.hpp"
#include "./ShortcutInfo.def.hpp"
#include "../../graphics/Rect.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "./LauncherApps.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JString LauncherApps::ACTION_CONFIRM_PIN_APPWIDGET()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_APPWIDGET",
			"Ljava/lang/String;"
		);
	}
	inline JString LauncherApps::ACTION_CONFIRM_PIN_SHORTCUT()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_SHORTCUT",
			"Ljava/lang/String;"
		);
	}
	inline JString LauncherApps::EXTRA_PIN_ITEM_REQUEST()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherApps",
			"EXTRA_PIN_ITEM_REQUEST",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject LauncherApps::getActivityList(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::content::pm::ApplicationInfo LauncherApps::getApplicationInfo(JString arg0, jint arg1, android::os::UserHandle arg2) const
	{
		return callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;ILandroid/os/UserHandle;)Landroid/content/pm/ApplicationInfo;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline android::content::pm::LauncherApps_PinItemRequest LauncherApps::getPinItemRequest(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"getPinItemRequest",
			"(Landroid/content/Intent;)Landroid/content/pm/LauncherApps$PinItemRequest;",
			arg0.object()
		);
	}
	inline JObject LauncherApps::getProfiles() const
	{
		return callObjectMethod(
			"getProfiles",
			"()Ljava/util/List;"
		);
	}
	inline android::graphics::drawable::Drawable LauncherApps::getShortcutBadgedIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1) const
	{
		return callObjectMethod(
			"getShortcutBadgedIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	inline android::content::IntentSender LauncherApps::getShortcutConfigActivityIntent(android::content::pm::LauncherActivityInfo arg0) const
	{
		return callObjectMethod(
			"getShortcutConfigActivityIntent",
			"(Landroid/content/pm/LauncherActivityInfo;)Landroid/content/IntentSender;",
			arg0.object()
		);
	}
	inline JObject LauncherApps::getShortcutConfigActivityList(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getShortcutConfigActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::graphics::drawable::Drawable LauncherApps::getShortcutIconDrawable(android::content::pm::ShortcutInfo arg0, jint arg1) const
	{
		return callObjectMethod(
			"getShortcutIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	inline JObject LauncherApps::getShortcuts(android::content::pm::LauncherApps_ShortcutQuery arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getShortcuts",
			"(Landroid/content/pm/LauncherApps$ShortcutQuery;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::Bundle LauncherApps::getSuspendedPackageLauncherExtras(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getSuspendedPackageLauncherExtras",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean LauncherApps::hasShortcutHostPermission() const
	{
		return callMethod<jboolean>(
			"hasShortcutHostPermission",
			"()Z"
		);
	}
	inline jboolean LauncherApps::isActivityEnabled(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jboolean>(
			"isActivityEnabled",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LauncherApps::isPackageEnabled(JString arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jboolean>(
			"isPackageEnabled",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void LauncherApps::pinShortcuts(JString arg0, JObject arg1, android::os::UserHandle arg2) const
	{
		callMethod<void>(
			"pinShortcuts",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void LauncherApps::registerCallback(android::content::pm::LauncherApps_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.object()
		);
	}
	inline void LauncherApps::registerCallback(android::content::pm::LauncherApps_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::pm::LauncherActivityInfo LauncherApps::resolveActivity(android::content::Intent arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"resolveActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)Landroid/content/pm/LauncherActivityInfo;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LauncherApps::startAppDetailsActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3) const
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
	inline void LauncherApps::startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1, android::graphics::Rect arg2, android::os::Bundle arg3) const
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
	inline void LauncherApps::startShortcut(android::content::pm::ShortcutInfo arg0, android::graphics::Rect arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"startShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void LauncherApps::startShortcut(JString arg0, JString arg1, android::graphics::Rect arg2, android::os::Bundle arg3, android::os::UserHandle arg4) const
	{
		callMethod<void>(
			"startShortcut",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Rect;Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void LauncherApps::unregisterCallback(android::content::pm::LauncherApps_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::content::pm

// Base class headers

