#include "./AutomaticZenRule.hpp"
#include "./Notification.hpp"
#include "./NotificationChannel.hpp"
#include "./NotificationChannelGroup.hpp"
#include "./NotificationManager_Policy.hpp"
#include "../content/ComponentName.hpp"
#include "../service/notification/Condition.hpp"
#include "./NotificationManager.hpp"

namespace android::app
{
	// Fields
	jstring NotificationManager::ACTION_APP_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_APP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_AUTOMATIC_ZEN_RULE()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_AUTOMATIC_ZEN_RULE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_AUTOMATIC_ZEN_RULE_STATUS_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_AUTOMATIC_ZEN_RULE_STATUS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_INTERRUPTION_FILTER_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_INTERRUPTION_FILTER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_POLICY_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationManager::AUTOMATIC_RULE_STATUS_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_DISABLED"
		);
	}
	jint NotificationManager::AUTOMATIC_RULE_STATUS_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_ENABLED"
		);
	}
	jint NotificationManager::AUTOMATIC_RULE_STATUS_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_REMOVED"
		);
	}
	jint NotificationManager::AUTOMATIC_RULE_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_UNKNOWN"
		);
	}
	jint NotificationManager::BUBBLE_PREFERENCE_ALL()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"BUBBLE_PREFERENCE_ALL"
		);
	}
	jint NotificationManager::BUBBLE_PREFERENCE_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"BUBBLE_PREFERENCE_NONE"
		);
	}
	jint NotificationManager::BUBBLE_PREFERENCE_SELECTED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"BUBBLE_PREFERENCE_SELECTED"
		);
	}
	jstring NotificationManager::EXTRA_AUTOMATIC_RULE_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_RULE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_AUTOMATIC_ZEN_RULE_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_ZEN_RULE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_AUTOMATIC_ZEN_RULE_STATUS()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_ZEN_RULE_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_BLOCKED_STATE()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_BLOCKED_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_NOTIFICATION_CHANNEL_GROUP_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_GROUP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_NOTIFICATION_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationManager::IMPORTANCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_DEFAULT"
		);
	}
	jint NotificationManager::IMPORTANCE_HIGH()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_HIGH"
		);
	}
	jint NotificationManager::IMPORTANCE_LOW()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_LOW"
		);
	}
	jint NotificationManager::IMPORTANCE_MAX()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MAX"
		);
	}
	jint NotificationManager::IMPORTANCE_MIN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MIN"
		);
	}
	jint NotificationManager::IMPORTANCE_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_NONE"
		);
	}
	jint NotificationManager::IMPORTANCE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_UNSPECIFIED"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALARMS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALL()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_PRIORITY()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	jstring NotificationManager::META_DATA_AUTOMATIC_RULE_TYPE()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_AUTOMATIC_RULE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	NotificationManager::NotificationManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring NotificationManager::addAutomaticZenRule(android::app::AutomaticZenRule arg0)
	{
		return callObjectMethod(
			"addAutomaticZenRule",
			"(Landroid/app/AutomaticZenRule;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean NotificationManager::areBubblesAllowed()
	{
		return callMethod<jboolean>(
			"areBubblesAllowed",
			"()Z"
		);
	}
	jboolean NotificationManager::areBubblesEnabled()
	{
		return callMethod<jboolean>(
			"areBubblesEnabled",
			"()Z"
		);
	}
	jboolean NotificationManager::areNotificationsEnabled()
	{
		return callMethod<jboolean>(
			"areNotificationsEnabled",
			"()Z"
		);
	}
	jboolean NotificationManager::areNotificationsPaused()
	{
		return callMethod<jboolean>(
			"areNotificationsPaused",
			"()Z"
		);
	}
	jboolean NotificationManager::canNotifyAsPackage(jstring arg0)
	{
		return callMethod<jboolean>(
			"canNotifyAsPackage",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void NotificationManager::cancel(jint arg0)
	{
		callMethod<void>(
			"cancel",
			"(I)V",
			arg0
		);
	}
	void NotificationManager::cancel(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"cancel",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void NotificationManager::cancelAll()
	{
		callMethod<void>(
			"cancelAll",
			"()V"
		);
	}
	void NotificationManager::cancelAsPackage(jstring arg0, jstring arg1, jint arg2)
	{
		callMethod<void>(
			"cancelAsPackage",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NotificationManager::createNotificationChannel(android::app::NotificationChannel arg0)
	{
		callMethod<void>(
			"createNotificationChannel",
			"(Landroid/app/NotificationChannel;)V",
			arg0.object()
		);
	}
	void NotificationManager::createNotificationChannelGroup(android::app::NotificationChannelGroup arg0)
	{
		callMethod<void>(
			"createNotificationChannelGroup",
			"(Landroid/app/NotificationChannelGroup;)V",
			arg0.object()
		);
	}
	void NotificationManager::createNotificationChannelGroups(JObject arg0)
	{
		callMethod<void>(
			"createNotificationChannelGroups",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void NotificationManager::createNotificationChannels(JObject arg0)
	{
		callMethod<void>(
			"createNotificationChannels",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void NotificationManager::deleteNotificationChannel(jstring arg0)
	{
		callMethod<void>(
			"deleteNotificationChannel",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationManager::deleteNotificationChannelGroup(jstring arg0)
	{
		callMethod<void>(
			"deleteNotificationChannelGroup",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jarray NotificationManager::getActiveNotifications()
	{
		return callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	android::app::AutomaticZenRule NotificationManager::getAutomaticZenRule(jstring arg0)
	{
		return callObjectMethod(
			"getAutomaticZenRule",
			"(Ljava/lang/String;)Landroid/app/AutomaticZenRule;",
			arg0
		);
	}
	JObject NotificationManager::getAutomaticZenRules()
	{
		return callObjectMethod(
			"getAutomaticZenRules",
			"()Ljava/util/Map;"
		);
	}
	jint NotificationManager::getBubblePreference()
	{
		return callMethod<jint>(
			"getBubblePreference",
			"()I"
		);
	}
	android::app::NotificationManager_Policy NotificationManager::getConsolidatedNotificationPolicy()
	{
		return callObjectMethod(
			"getConsolidatedNotificationPolicy",
			"()Landroid/app/NotificationManager$Policy;"
		);
	}
	jint NotificationManager::getCurrentInterruptionFilter()
	{
		return callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I"
		);
	}
	jint NotificationManager::getImportance()
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	android::app::NotificationChannel NotificationManager::getNotificationChannel(jstring arg0)
	{
		return callObjectMethod(
			"getNotificationChannel",
			"(Ljava/lang/String;)Landroid/app/NotificationChannel;",
			arg0
		);
	}
	android::app::NotificationChannel NotificationManager::getNotificationChannel(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getNotificationChannel",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/NotificationChannel;",
			arg0,
			arg1
		);
	}
	android::app::NotificationChannelGroup NotificationManager::getNotificationChannelGroup(jstring arg0)
	{
		return callObjectMethod(
			"getNotificationChannelGroup",
			"(Ljava/lang/String;)Landroid/app/NotificationChannelGroup;",
			arg0
		);
	}
	JObject NotificationManager::getNotificationChannelGroups()
	{
		return callObjectMethod(
			"getNotificationChannelGroups",
			"()Ljava/util/List;"
		);
	}
	JObject NotificationManager::getNotificationChannels()
	{
		return callObjectMethod(
			"getNotificationChannels",
			"()Ljava/util/List;"
		);
	}
	jstring NotificationManager::getNotificationDelegate()
	{
		return callObjectMethod(
			"getNotificationDelegate",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::app::NotificationManager_Policy NotificationManager::getNotificationPolicy()
	{
		return callObjectMethod(
			"getNotificationPolicy",
			"()Landroid/app/NotificationManager$Policy;"
		);
	}
	jboolean NotificationManager::isNotificationListenerAccessGranted(android::content::ComponentName arg0)
	{
		return callMethod<jboolean>(
			"isNotificationListenerAccessGranted",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean NotificationManager::isNotificationPolicyAccessGranted()
	{
		return callMethod<jboolean>(
			"isNotificationPolicyAccessGranted",
			"()Z"
		);
	}
	void NotificationManager::notify(jint arg0, android::app::Notification arg1)
	{
		callMethod<void>(
			"notify",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		);
	}
	void NotificationManager::notify(jstring arg0, jint arg1, android::app::Notification arg2)
	{
		callMethod<void>(
			"notify",
			"(Ljava/lang/String;ILandroid/app/Notification;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void NotificationManager::notifyAsPackage(jstring arg0, jstring arg1, jint arg2, android::app::Notification arg3)
	{
		callMethod<void>(
			"notifyAsPackage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/app/Notification;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	jboolean NotificationManager::removeAutomaticZenRule(jstring arg0)
	{
		return callMethod<jboolean>(
			"removeAutomaticZenRule",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void NotificationManager::setAutomaticZenRuleState(jstring arg0, android::service::notification::Condition arg1)
	{
		callMethod<void>(
			"setAutomaticZenRuleState",
			"(Ljava/lang/String;Landroid/service/notification/Condition;)V",
			arg0,
			arg1.object()
		);
	}
	void NotificationManager::setInterruptionFilter(jint arg0)
	{
		callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	void NotificationManager::setNotificationDelegate(jstring arg0)
	{
		callMethod<void>(
			"setNotificationDelegate",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationManager::setNotificationPolicy(android::app::NotificationManager_Policy arg0)
	{
		callMethod<void>(
			"setNotificationPolicy",
			"(Landroid/app/NotificationManager$Policy;)V",
			arg0.object()
		);
	}
	jboolean NotificationManager::shouldHideSilentStatusBarIcons()
	{
		return callMethod<jboolean>(
			"shouldHideSilentStatusBarIcons",
			"()Z"
		);
	}
	jboolean NotificationManager::updateAutomaticZenRule(jstring arg0, android::app::AutomaticZenRule arg1)
	{
		return callMethod<jboolean>(
			"updateAutomaticZenRule",
			"(Ljava/lang/String;Landroid/app/AutomaticZenRule;)Z",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

