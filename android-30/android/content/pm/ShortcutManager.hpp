#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ShortcutInfo;
}

namespace android::content::pm
{
	class ShortcutManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint FLAG_MATCH_CACHED();
		static jint FLAG_MATCH_DYNAMIC();
		static jint FLAG_MATCH_MANIFEST();
		static jint FLAG_MATCH_PINNED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ShortcutManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean addDynamicShortcuts(__JniBaseClass arg0);
		android::content::Intent createShortcutResultIntent(android::content::pm::ShortcutInfo arg0);
		void disableShortcuts(__JniBaseClass arg0);
		void disableShortcuts(__JniBaseClass arg0, jstring arg1);
		void enableShortcuts(__JniBaseClass arg0);
		__JniBaseClass getDynamicShortcuts();
		jint getIconMaxHeight();
		jint getIconMaxWidth();
		__JniBaseClass getManifestShortcuts();
		jint getMaxShortcutCountPerActivity();
		__JniBaseClass getPinnedShortcuts();
		__JniBaseClass getShortcuts(jint arg0);
		jboolean isRateLimitingActive();
		jboolean isRequestPinShortcutSupported();
		void pushDynamicShortcut(android::content::pm::ShortcutInfo arg0);
		void removeAllDynamicShortcuts();
		void removeDynamicShortcuts(__JniBaseClass arg0);
		void removeLongLivedShortcuts(__JniBaseClass arg0);
		void reportShortcutUsed(jstring arg0);
		jboolean requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1);
		jboolean setDynamicShortcuts(__JniBaseClass arg0);
		jboolean updateShortcuts(__JniBaseClass arg0);
	};
} // namespace android::content::pm

