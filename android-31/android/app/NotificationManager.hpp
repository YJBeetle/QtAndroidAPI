#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class AutomaticZenRule;
}
namespace android::app
{
	class Notification;
}
namespace android::app
{
	class NotificationChannel;
}
namespace android::app
{
	class NotificationChannelGroup;
}
namespace android::app
{
	class NotificationManager_Policy;
}
namespace android::content
{
	class ComponentName;
}
namespace android::service::notification
{
	class Condition;
}
class JString;

namespace android::app
{
	class NotificationManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_APP_BLOCK_STATE_CHANGED();
		static JString ACTION_AUTOMATIC_ZEN_RULE();
		static JString ACTION_AUTOMATIC_ZEN_RULE_STATUS_CHANGED();
		static JString ACTION_INTERRUPTION_FILTER_CHANGED();
		static JString ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED();
		static JString ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED();
		static JString ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED();
		static JString ACTION_NOTIFICATION_POLICY_CHANGED();
		static jint AUTOMATIC_RULE_STATUS_DISABLED();
		static jint AUTOMATIC_RULE_STATUS_ENABLED();
		static jint AUTOMATIC_RULE_STATUS_REMOVED();
		static jint AUTOMATIC_RULE_STATUS_UNKNOWN();
		static jint BUBBLE_PREFERENCE_ALL();
		static jint BUBBLE_PREFERENCE_NONE();
		static jint BUBBLE_PREFERENCE_SELECTED();
		static JString EXTRA_AUTOMATIC_RULE_ID();
		static JString EXTRA_AUTOMATIC_ZEN_RULE_ID();
		static JString EXTRA_AUTOMATIC_ZEN_RULE_STATUS();
		static JString EXTRA_BLOCKED_STATE();
		static JString EXTRA_NOTIFICATION_CHANNEL_GROUP_ID();
		static JString EXTRA_NOTIFICATION_CHANNEL_ID();
		static jint IMPORTANCE_DEFAULT();
		static jint IMPORTANCE_HIGH();
		static jint IMPORTANCE_LOW();
		static jint IMPORTANCE_MAX();
		static jint IMPORTANCE_MIN();
		static jint IMPORTANCE_NONE();
		static jint IMPORTANCE_UNSPECIFIED();
		static jint INTERRUPTION_FILTER_ALARMS();
		static jint INTERRUPTION_FILTER_ALL();
		static jint INTERRUPTION_FILTER_NONE();
		static jint INTERRUPTION_FILTER_PRIORITY();
		static jint INTERRUPTION_FILTER_UNKNOWN();
		static JString META_DATA_AUTOMATIC_RULE_TYPE();
		static JString META_DATA_RULE_INSTANCE_LIMIT();
		
		// QJniObject forward
		template<typename ...Ts> explicit NotificationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NotificationManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString addAutomaticZenRule(android::app::AutomaticZenRule arg0);
		jboolean areBubblesAllowed();
		jboolean areBubblesEnabled();
		jboolean areNotificationsEnabled();
		jboolean areNotificationsPaused();
		jboolean canNotifyAsPackage(JString arg0);
		void cancel(jint arg0);
		void cancel(JString arg0, jint arg1);
		void cancelAll();
		void cancelAsPackage(JString arg0, JString arg1, jint arg2);
		void createNotificationChannel(android::app::NotificationChannel arg0);
		void createNotificationChannelGroup(android::app::NotificationChannelGroup arg0);
		void createNotificationChannelGroups(JObject arg0);
		void createNotificationChannels(JObject arg0);
		void deleteNotificationChannel(JString arg0);
		void deleteNotificationChannelGroup(JString arg0);
		JArray getActiveNotifications();
		android::app::AutomaticZenRule getAutomaticZenRule(JString arg0);
		JObject getAutomaticZenRules();
		jint getBubblePreference();
		android::app::NotificationManager_Policy getConsolidatedNotificationPolicy();
		jint getCurrentInterruptionFilter();
		jint getImportance();
		android::app::NotificationChannel getNotificationChannel(JString arg0);
		android::app::NotificationChannel getNotificationChannel(JString arg0, JString arg1);
		android::app::NotificationChannelGroup getNotificationChannelGroup(JString arg0);
		JObject getNotificationChannelGroups();
		JObject getNotificationChannels();
		JString getNotificationDelegate();
		android::app::NotificationManager_Policy getNotificationPolicy();
		jboolean isNotificationListenerAccessGranted(android::content::ComponentName arg0);
		jboolean isNotificationPolicyAccessGranted();
		void notify(jint arg0, android::app::Notification arg1);
		void notify(JString arg0, jint arg1, android::app::Notification arg2);
		void notifyAsPackage(JString arg0, JString arg1, jint arg2, android::app::Notification arg3);
		jboolean removeAutomaticZenRule(JString arg0);
		void setAutomaticZenRuleState(JString arg0, android::service::notification::Condition arg1);
		void setInterruptionFilter(jint arg0);
		void setNotificationDelegate(JString arg0);
		void setNotificationPolicy(android::app::NotificationManager_Policy arg0);
		jboolean shouldHideSilentStatusBarIcons();
		jboolean updateAutomaticZenRule(JString arg0, android::app::AutomaticZenRule arg1);
	};
} // namespace android::app

