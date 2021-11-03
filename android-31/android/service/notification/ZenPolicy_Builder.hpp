#pragma once

#include "../../../JObject.hpp"

namespace android::service::notification
{
	class ZenPolicy;
}

namespace android::service::notification
{
	class ZenPolicy_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZenPolicy_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZenPolicy_Builder(QAndroidJniObject obj);
		
		// Constructors
		ZenPolicy_Builder();
		
		// Methods
		android::service::notification::ZenPolicy_Builder allowAlarms(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder allowAllSounds() const;
		android::service::notification::ZenPolicy_Builder allowCalls(jint arg0) const;
		android::service::notification::ZenPolicy_Builder allowConversations(jint arg0) const;
		android::service::notification::ZenPolicy_Builder allowEvents(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder allowMedia(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder allowMessages(jint arg0) const;
		android::service::notification::ZenPolicy_Builder allowReminders(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder allowRepeatCallers(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder allowSystem(jboolean arg0) const;
		android::service::notification::ZenPolicy build() const;
		android::service::notification::ZenPolicy_Builder disallowAllSounds() const;
		android::service::notification::ZenPolicy_Builder hideAllVisualEffects() const;
		android::service::notification::ZenPolicy_Builder showAllVisualEffects() const;
		android::service::notification::ZenPolicy_Builder showBadges(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder showFullScreenIntent(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder showInAmbientDisplay(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder showInNotificationList(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder showLights(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder showPeeking(jboolean arg0) const;
		android::service::notification::ZenPolicy_Builder showStatusBarIcons(jboolean arg0) const;
	};
} // namespace android::service::notification

