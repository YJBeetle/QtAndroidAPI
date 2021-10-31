#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortcutManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutManager(QAndroidJniObject obj);
		
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
		jboolean isRateLimitingActive();
		jboolean isRequestPinShortcutSupported();
		void removeAllDynamicShortcuts();
		void removeDynamicShortcuts(__JniBaseClass arg0);
		void reportShortcutUsed(jstring arg0);
		jboolean requestPinShortcut(android::content::pm::ShortcutInfo arg0, android::content::IntentSender arg1);
		jboolean setDynamicShortcuts(__JniBaseClass arg0);
		jboolean updateShortcuts(__JniBaseClass arg0);
	};
} // namespace android::content::pm

