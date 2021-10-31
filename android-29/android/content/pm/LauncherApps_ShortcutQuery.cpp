#include "../ComponentName.hpp"
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
	LauncherApps_ShortcutQuery::LauncherApps_ShortcutQuery(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LauncherApps_ShortcutQuery::LauncherApps_ShortcutQuery()
		: __JniBaseClass(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"()V"
		) {}
	
	// Methods
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setActivity(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object()
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setChangedSince(jlong arg0)
	{
		return callObjectMethod(
			"setChangedSince",
			"(J)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setPackage(jstring arg0)
	{
		return callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setQueryFlags(jint arg0)
	{
		return callObjectMethod(
			"setQueryFlags",
			"(I)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	android::content::pm::LauncherApps_ShortcutQuery LauncherApps_ShortcutQuery::setShortcutIds(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setShortcutIds",
			"(Ljava/util/List;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.object()
		);
	}
} // namespace android::content::pm

