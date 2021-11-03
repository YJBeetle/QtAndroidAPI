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
class JString;
class JString;

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ShortcutManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean addDynamicShortcuts(JObject arg0) const;
		android::content::Intent createShortcutResultIntent(android::content::pm::ShortcutInfo arg0) const;
		void disableShortcuts(JObject arg0) const;
		void disableShortcuts(JObject arg0, JString arg1) const;
		void enableShortcuts(JObject arg0) const;
		JObject getDynamicShortcuts() const;
		jint getIconMaxHeight() const;
		jint getIconMaxWidth() const;
		JObject getManifestShortcuts() const;
		jint getMaxShortcutCountPerActivity() const;
		JObject getPinnedShortcuts() const;
		JObject getShortcuts(jint arg0) const;
		jboolean isRateLimitingActive() const;
		jboolean isRequestPinShortcutSupported() const;
		void pushDynamicShortcut(android::content::pm::ShortcutInfo arg0) const;
		void removeAllDynamicShortcuts() const;
		void removeDynamicShortcuts(JObject arg0) const;
		void removeLongLivedShortcuts(JObject arg0) const;
		void reportShortcutUsed(JString arg0) const;
		jboolean requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1) const;
		jboolean setDynamicShortcuts(JObject arg0) const;
		jboolean updateShortcuts(JObject arg0) const;
	};
} // namespace android::content::pm

