#pragma once

#include "../../../JObject.hpp"

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
	class ShortcutManager : public JObject
	{
	public:
		// Fields
		static jint FLAG_MATCH_CACHED();
		static jint FLAG_MATCH_DYNAMIC();
		static jint FLAG_MATCH_MANIFEST();
		static jint FLAG_MATCH_PINNED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortcutManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean addDynamicShortcuts(JObject arg0);
		android::content::Intent createShortcutResultIntent(android::content::pm::ShortcutInfo arg0);
		void disableShortcuts(JObject arg0);
		void disableShortcuts(JObject arg0, jstring arg1);
		void enableShortcuts(JObject arg0);
		JObject getDynamicShortcuts();
		jint getIconMaxHeight();
		jint getIconMaxWidth();
		JObject getManifestShortcuts();
		jint getMaxShortcutCountPerActivity();
		JObject getPinnedShortcuts();
		JObject getShortcuts(jint arg0);
		jboolean isRateLimitingActive();
		jboolean isRequestPinShortcutSupported();
		void pushDynamicShortcut(android::content::pm::ShortcutInfo arg0);
		void removeAllDynamicShortcuts();
		void removeDynamicShortcuts(JObject arg0);
		void removeLongLivedShortcuts(JObject arg0);
		void reportShortcutUsed(jstring arg0);
		jboolean requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1);
		jboolean setDynamicShortcuts(JObject arg0);
		jboolean updateShortcuts(JObject arg0);
	};
} // namespace android::content::pm

