#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::service::notification
{
	class ZenPolicy;
}

namespace android::service::notification
{
	class ZenPolicy_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZenPolicy_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZenPolicy_Builder(QJniObject obj);
		
		// Constructors
		ZenPolicy_Builder();
		
		// Methods
		android::service::notification::ZenPolicy_Builder allowAlarms(jboolean arg0);
		android::service::notification::ZenPolicy_Builder allowAllSounds();
		android::service::notification::ZenPolicy_Builder allowCalls(jint arg0);
		android::service::notification::ZenPolicy_Builder allowConversations(jint arg0);
		android::service::notification::ZenPolicy_Builder allowEvents(jboolean arg0);
		android::service::notification::ZenPolicy_Builder allowMedia(jboolean arg0);
		android::service::notification::ZenPolicy_Builder allowMessages(jint arg0);
		android::service::notification::ZenPolicy_Builder allowReminders(jboolean arg0);
		android::service::notification::ZenPolicy_Builder allowRepeatCallers(jboolean arg0);
		android::service::notification::ZenPolicy_Builder allowSystem(jboolean arg0);
		android::service::notification::ZenPolicy build();
		android::service::notification::ZenPolicy_Builder disallowAllSounds();
		android::service::notification::ZenPolicy_Builder hideAllVisualEffects();
		android::service::notification::ZenPolicy_Builder showAllVisualEffects();
		android::service::notification::ZenPolicy_Builder showBadges(jboolean arg0);
		android::service::notification::ZenPolicy_Builder showFullScreenIntent(jboolean arg0);
		android::service::notification::ZenPolicy_Builder showInAmbientDisplay(jboolean arg0);
		android::service::notification::ZenPolicy_Builder showInNotificationList(jboolean arg0);
		android::service::notification::ZenPolicy_Builder showLights(jboolean arg0);
		android::service::notification::ZenPolicy_Builder showPeeking(jboolean arg0);
		android::service::notification::ZenPolicy_Builder showStatusBarIcons(jboolean arg0);
	};
} // namespace android::service::notification

