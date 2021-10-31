#include "../ComponentName.hpp"
#include "./LauncherApps_ShortcutQuery.hpp"

namespace android::content::pm
{
	// Fields
	jint LauncherApps_ShortcutQuery::FLAG_GET_KEY_FIELDS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_GET_KEY_FIELDS_ONLY"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_DYNAMIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_DYNAMIC"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_MANIFEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_MANIFEST"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED"
		);
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED_BY_ANY_LAUNCHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED_BY_ANY_LAUNCHER"
		);
	}
	
	LauncherApps_ShortcutQuery::LauncherApps_ShortcutQuery(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LauncherApps_ShortcutQuery::LauncherApps_ShortcutQuery()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject LauncherApps_ShortcutQuery::setActivity(android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setChangedSince(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setChangedSince",
			"(J)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setPackage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setQueryFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setQueryFlags",
			"(I)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0
		);
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setShortcutIds(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setShortcutIds",
			"(Ljava/util/List;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content::pm

