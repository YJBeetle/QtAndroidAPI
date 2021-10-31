#include "./AutomaticZenRule.hpp"
#include "./Notification.hpp"
#include "./NotificationChannel.hpp"
#include "./NotificationChannelGroup.hpp"
#include "./NotificationManager_Policy.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "../service/notification/Condition.hpp"
#include "./NotificationManager.hpp"

namespace android::app
{
	// Fields
	jstring NotificationManager::ACTION_APP_BLOCK_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_APP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_AUTOMATIC_ZEN_RULE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_AUTOMATIC_ZEN_RULE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_INTERRUPTION_FILTER_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_INTERRUPTION_FILTER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_POLICY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_AUTOMATIC_RULE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_RULE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_BLOCKED_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_BLOCKED_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_NOTIFICATION_CHANNEL_GROUP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_GROUP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_NOTIFICATION_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationManager::IMPORTANCE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_DEFAULT"
		);
	}
	jint NotificationManager::IMPORTANCE_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_HIGH"
		);
	}
	jint NotificationManager::IMPORTANCE_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_LOW"
		);
	}
	jint NotificationManager::IMPORTANCE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MAX"
		);
	}
	jint NotificationManager::IMPORTANCE_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MIN"
		);
	}
	jint NotificationManager::IMPORTANCE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_NONE"
		);
	}
	jint NotificationManager::IMPORTANCE_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_UNSPECIFIED"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALARMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	jstring NotificationManager::META_DATA_AUTOMATIC_RULE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_AUTOMATIC_RULE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	NotificationManager::NotificationManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	void NotificationManager::createNotificationChannelGroups(__JniBaseClass arg0)
	{
		callMethod<void>(
			"createNotificationChannelGroups",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void NotificationManager::createNotificationChannels(__JniBaseClass arg0)
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
	QAndroidJniObject NotificationManager::getAutomaticZenRule(jstring arg0)
	{
		return callObjectMethod(
			"getAutomaticZenRule",
			"(Ljava/lang/String;)Landroid/app/AutomaticZenRule;",
			arg0
		);
	}
	QAndroidJniObject NotificationManager::getAutomaticZenRules()
	{
		return callObjectMethod(
			"getAutomaticZenRules",
			"()Ljava/util/Map;"
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
	QAndroidJniObject NotificationManager::getNotificationChannel(jstring arg0)
	{
		return callObjectMethod(
			"getNotificationChannel",
			"(Ljava/lang/String;)Landroid/app/NotificationChannel;",
			arg0
		);
	}
	QAndroidJniObject NotificationManager::getNotificationChannelGroup(jstring arg0)
	{
		return callObjectMethod(
			"getNotificationChannelGroup",
			"(Ljava/lang/String;)Landroid/app/NotificationChannelGroup;",
			arg0
		);
	}
	QAndroidJniObject NotificationManager::getNotificationChannelGroups()
	{
		return callObjectMethod(
			"getNotificationChannelGroups",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject NotificationManager::getNotificationChannels()
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
	QAndroidJniObject NotificationManager::getNotificationPolicy()
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

