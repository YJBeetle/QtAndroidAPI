#pragma once

#ifndef ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY
#define ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::content::pm
{
	class LauncherApps_ShortcutQuery : public __JniBaseClass
	{
	public:
		// Fields
		static jint FLAG_GET_KEY_FIELDS_ONLY();
		static jint FLAG_MATCH_DYNAMIC();
		static jint FLAG_MATCH_MANIFEST();
		static jint FLAG_MATCH_PINNED();
		static jint FLAG_MATCH_PINNED_BY_ANY_LAUNCHER();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject setPackage(jstring arg0);
		QAndroidJniObject setChangedSince(jlong arg0);
		QAndroidJniObject setShortcutIds(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setQueryFlags(jint arg0);
		QAndroidJniObject setActivity(__jni_impl::android::content::ComponentName arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../ComponentName.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	jint LauncherApps_ShortcutQuery::FLAG_GET_KEY_FIELDS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_GET_KEY_FIELDS_ONLY");
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_DYNAMIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_DYNAMIC");
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_MANIFEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_MANIFEST");
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED");
	}
	jint LauncherApps_ShortcutQuery::FLAG_MATCH_PINNED_BY_ANY_LAUNCHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"FLAG_MATCH_PINNED_BY_ANY_LAUNCHER");
	}
	
	// Constructors
	void LauncherApps_ShortcutQuery::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LauncherApps$ShortcutQuery",
			"()V");
	}
	
	// Methods
	QAndroidJniObject LauncherApps_ShortcutQuery::setPackage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0);
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setChangedSince(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setChangedSince",
			"(J)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0);
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setShortcutIds(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setShortcutIds",
			"(Ljava/util/List;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setQueryFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setQueryFlags",
			"(I)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0);
	}
	QAndroidJniObject LauncherApps_ShortcutQuery::setActivity(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/LauncherApps$ShortcutQuery;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class LauncherApps_ShortcutQuery : public __jni_impl::android::content::pm::LauncherApps_ShortcutQuery
	{
	public:
		LauncherApps_ShortcutQuery(QAndroidJniObject obj) { __thiz = obj; }
		LauncherApps_ShortcutQuery()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_LAUNCHERAPPS_SHORTCUTQUERY

