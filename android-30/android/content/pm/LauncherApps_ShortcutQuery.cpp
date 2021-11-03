#include "../ComponentName.hpp"
#include "../../../JString.hpp"
#include "./LauncherApps_ShortcutQuery.hpp"

namespace android::content::pm
{
	// Fields
	jint LauncherApps_ShortcutQuery::FLAG_GET_KEY_FIELDS_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_GET_KEY_FIELDS_ONLY"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_CACHED()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_CACHED"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_DYNAMIC"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_MANIFEST()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_MANIFEST"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED_BY_ANY_LAUNCHER()
	{
		return getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED_BY_ANY_LAUNCHER"
		);
	}
	
	// QJniObject forward
	LauncherApps_ShortcutQuery::LauncherApps_ShortcutQuery(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LauncherApps_ShortcutQuery::LauncherApps_ShortcutQuery()
		: JObject(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"()V"
		) {}
	
	// Methods
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setActivity(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object()
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setChangedSince(jlong arg0) const
	{
		return callObjectMethod(
			"setChangedSince",
			"(J)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setLocusIds(JObject arg0) const
	{
		return callObjectMethod(
			"setLocusIds",
			"(Ljava/util/List;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object()
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setPackage(JString arg0) const
	{
		return callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object<jstring>()
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setQueryFlags(jint arg0) const
	{
		return callObjectMethod(
			"setQueryFlags",
			"(I)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setShortcutIds(JObject arg0) const
	{
		return callObjectMethod(
			"setShortcutIds",
			"(Ljava/util/List;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object()
		);
	}
} // namespace android::content::pm

