#pragma once

#include "../ComponentName.def.hpp"
#include "../../../JString.hpp"
#include "./LauncherApps_ShortcutQuery.def.hpp"

namespace android::content::pm
{
	// Fields
	inline jint LauncherApps_ShortcutQuery::FLAG_GET_KEY_FIELDS_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_GET_KEY_FIELDS_ONLY"
		);
	}
	inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_DYNAMIC"
		);
	}
	inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_MANIFEST()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_MANIFEST"
		);
	}
	inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED"
		);
	}
	inline jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED_BY_ANY_LAUNCHER()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED_BY_ANY_LAUNCHER"
		);
	}
	
	// Constructors
	inline LauncherApps_ShortcutQuery::LauncherApps_ShortcutQuery()
		: JObject(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"()V"
		) {}
	
	// Methods
	inline android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setActivity(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object()
		);
	}
	inline android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setChangedSince(jlong arg0) const
	{
		return callObjectMethod(
			"setChangedSince",
			"(J)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	inline android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setPackage(JString arg0) const
	{
		return callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object<jstring>()
		);
	}
	inline android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setQueryFlags(jint arg0) const
	{
		return callObjectMethod(
			"setQueryFlags",
			"(I)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	inline android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setShortcutIds(JObject arg0) const
	{
		return callObjectMethod(
			"setShortcutIds",
			"(Ljava/util/List;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object()
		);
	}
} // namespace android::content::pm

// Base class headers

