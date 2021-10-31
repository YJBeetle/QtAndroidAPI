#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Handler;
}

namespace android::app
{
	class NotificationManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_APP_BLOCK_STATE_CHANGED();
		static jstring ACTION_INTERRUPTION_FILTER_CHANGED();
		static jstring ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED();
		static jstring ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED();
		static jstring ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED();
		static jstring ACTION_NOTIFICATION_POLICY_CHANGED();
		static jstring EXTRA_BLOCKED_STATE();
		static jstring EXTRA_NOTIFICATION_CHANNEL_GROUP_ID();
		static jstring EXTRA_NOTIFICATION_CHANNEL_ID();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NotificationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring addAutomaticZenRule(android::app::AutomaticZenRule arg0);
		jboolean areNotificationsEnabled();
		void cancel(jint arg0);
		void cancel(jstring arg0, jint arg1);
		void cancelAll();
		void createNotificationChannel(android::app::NotificationChannel arg0);
		void createNotificationChannelGroup(android::app::NotificationChannelGroup arg0);
		void createNotificationChannelGroups(__JniBaseClass arg0);
		void createNotificationChannels(__JniBaseClass arg0);
		void deleteNotificationChannel(jstring arg0);
		void deleteNotificationChannelGroup(jstring arg0);
		jarray getActiveNotifications();
		android::app::AutomaticZenRule getAutomaticZenRule(jstring arg0);
		__JniBaseClass getAutomaticZenRules();
		jint getCurrentInterruptionFilter();
		jint getImportance();
		android::app::NotificationChannel getNotificationChannel(jstring arg0);
		android::app::NotificationChannelGroup getNotificationChannelGroup(jstring arg0);
		__JniBaseClass getNotificationChannelGroups();
		__JniBaseClass getNotificationChannels();
		android::app::NotificationManager_Policy getNotificationPolicy();
		jboolean isNotificationListenerAccessGranted(android::content::ComponentName arg0);
		jboolean isNotificationPolicyAccessGranted();
		void notify(jint arg0, android::app::Notification arg1);
		void notify(jstring arg0, jint arg1, android::app::Notification arg2);
		jboolean removeAutomaticZenRule(jstring arg0);
		void setInterruptionFilter(jint arg0);
		void setNotificationPolicy(android::app::NotificationManager_Policy arg0);
		jboolean updateAutomaticZenRule(jstring arg0, android::app::AutomaticZenRule arg1);
	};
} // namespace android::app

