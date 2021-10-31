#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}

namespace android::content::pm
{
	class LauncherApps_ShortcutQuery : public __JniBaseClass
	{
	public:
		// Fields
		static jint FLAG_GET_KEY_FIELDS_ONLY();
		static jint FLAG_MATCH_CACHED();
		static jint FLAG_MATCH_DYNAMIC();
		static jint FLAG_MATCH_MANIFEST();
		static jint FLAG_MATCH_PINNED();
		static jint FLAG_MATCH_PINNED_BY_ANY_LAUNCHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherApps_ShortcutQuery(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps_ShortcutQuery(QJniObject obj);
		
		// Constructors
		LauncherApps_ShortcutQuery();
		
		// Methods
		android::content::pm::LauncherApps_ShortcutQuery setActivity(android::content::ComponentName arg0);
		android::content::pm::LauncherApps_ShortcutQuery setChangedSince(jlong arg0);
		android::content::pm::LauncherApps_ShortcutQuery setLocusIds(__JniBaseClass arg0);
		android::content::pm::LauncherApps_ShortcutQuery setPackage(jstring arg0);
		android::content::pm::LauncherApps_ShortcutQuery setQueryFlags(jint arg0);
		android::content::pm::LauncherApps_ShortcutQuery setShortcutIds(__JniBaseClass arg0);
	};
} // namespace android::content::pm

