#include "../../app/NotificationChannel.hpp"
#include "../../app/NotificationChannelGroup.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../os/UserHandle.hpp"
#include "./NotificationListenerService_RankingMap.hpp"
#include "./StatusBarNotification.hpp"
#include "./NotificationListenerService.hpp"

namespace android::service::notification
{
	// Fields
	jint NotificationListenerService::HINT_HOST_DISABLE_CALL_EFFECTS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_CALL_EFFECTS"
		);
	}
	jint NotificationListenerService::HINT_HOST_DISABLE_EFFECTS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_EFFECTS"
		);
	}
	jint NotificationListenerService::HINT_HOST_DISABLE_NOTIFICATION_EFFECTS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_NOTIFICATION_EFFECTS"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_ALARMS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_NONE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_PRIORITY()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_ADDED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_ADDED"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_DELETED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_DELETED"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_UPDATED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_UPDATED"
		);
	}
	jint NotificationListenerService::REASON_APP_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_APP_CANCEL_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_CANCEL_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_CHANNEL_BANNED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CHANNEL_BANNED"
		);
	}
	jint NotificationListenerService::REASON_CLICK()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CLICK"
		);
	}
	jint NotificationListenerService::REASON_ERROR()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_ERROR"
		);
	}
	jint NotificationListenerService::REASON_GROUP_OPTIMIZATION()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_OPTIMIZATION"
		);
	}
	jint NotificationListenerService::REASON_GROUP_SUMMARY_CANCELED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_SUMMARY_CANCELED"
		);
	}
	jint NotificationListenerService::REASON_LISTENER_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_LISTENER_CANCEL_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_BANNED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_BANNED"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_CHANGED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_CHANGED"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_SUSPENDED"
		);
	}
	jint NotificationListenerService::REASON_PROFILE_TURNED_OFF()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PROFILE_TURNED_OFF"
		);
	}
	jint NotificationListenerService::REASON_SNOOZED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_SNOOZED"
		);
	}
	jint NotificationListenerService::REASON_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_TIMEOUT"
		);
	}
	jint NotificationListenerService::REASON_UNAUTOBUNDLED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_UNAUTOBUNDLED"
		);
	}
	jint NotificationListenerService::REASON_USER_STOPPED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_USER_STOPPED"
		);
	}
	jstring NotificationListenerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.notification.NotificationListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_OFF"
		);
	}
	jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_ON"
		);
	}
	
	// QJniObject forward
	NotificationListenerService::NotificationListenerService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	NotificationListenerService::NotificationListenerService()
		: android::app::Service(
			"android.service.notification.NotificationListenerService",
			"()V"
		) {}
	
	// Methods
	void NotificationListenerService::requestRebind(android::content::ComponentName arg0)
	{
		callStaticMethod<void>(
			"android.service.notification.NotificationListenerService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void NotificationListenerService::cancelAllNotifications()
	{
		callMethod<void>(
			"cancelAllNotifications",
			"()V"
		);
	}
	void NotificationListenerService::cancelNotification(jstring arg0)
	{
		callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::cancelNotification(jstring arg0, jstring arg1, jint arg2)
	{
		callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NotificationListenerService::cancelNotifications(jarray arg0)
	{
		callMethod<void>(
			"cancelNotifications",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::clearRequestedListenerHints()
	{
		callMethod<void>(
			"clearRequestedListenerHints",
			"()V"
		);
	}
	jarray NotificationListenerService::getActiveNotifications()
	{
		return callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	jarray NotificationListenerService::getActiveNotifications(jarray arg0)
	{
		return callObjectMethod(
			"getActiveNotifications",
			"([Ljava/lang/String;)[Landroid/service/notification/StatusBarNotification;",
			arg0
		).object<jarray>();
	}
	jint NotificationListenerService::getCurrentInterruptionFilter()
	{
		return callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I"
		);
	}
	jint NotificationListenerService::getCurrentListenerHints()
	{
		return callMethod<jint>(
			"getCurrentListenerHints",
			"()I"
		);
	}
	android::service::notification::NotificationListenerService_RankingMap NotificationListenerService::getCurrentRanking()
	{
		return callObjectMethod(
			"getCurrentRanking",
			"()Landroid/service/notification/NotificationListenerService$RankingMap;"
		);
	}
	JObject NotificationListenerService::getNotificationChannelGroups(jstring arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getNotificationChannelGroups",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.object()
		);
	}
	JObject NotificationListenerService::getNotificationChannels(jstring arg0, android::os::UserHandle arg1)
	{
		return callObjectMethod(
			"getNotificationChannels",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.object()
		);
	}
	jarray NotificationListenerService::getSnoozedNotifications()
	{
		return callObjectMethod(
			"getSnoozedNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	JObject NotificationListenerService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void NotificationListenerService::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void NotificationListenerService::onInterruptionFilterChanged(jint arg0)
	{
		callMethod<void>(
			"onInterruptionFilterChanged",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::onListenerConnected()
	{
		callMethod<void>(
			"onListenerConnected",
			"()V"
		);
	}
	void NotificationListenerService::onListenerDisconnected()
	{
		callMethod<void>(
			"onListenerDisconnected",
			"()V"
		);
	}
	void NotificationListenerService::onListenerHintsChanged(jint arg0)
	{
		callMethod<void>(
			"onListenerHintsChanged",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::onNotificationChannelGroupModified(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannelGroup arg2, jint arg3)
	{
		callMethod<void>(
			"onNotificationChannelGroupModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannelGroup;I)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void NotificationListenerService::onNotificationChannelModified(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2, jint arg3)
	{
		callMethod<void>(
			"onNotificationChannelModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;I)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void NotificationListenerService::onNotificationPosted(android::service::notification::StatusBarNotification arg0)
	{
		callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.object()
		);
	}
	void NotificationListenerService::onNotificationPosted(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1)
	{
		callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NotificationListenerService::onNotificationRankingUpdate(android::service::notification::NotificationListenerService_RankingMap arg0)
	{
		callMethod<void>(
			"onNotificationRankingUpdate",
			"(Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0)
	{
		callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1)
	{
		callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1, jint arg2)
	{
		callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void NotificationListenerService::onSilentStatusBarIconsVisibilityChanged(jboolean arg0)
	{
		callMethod<void>(
			"onSilentStatusBarIconsVisibilityChanged",
			"(Z)V",
			arg0
		);
	}
	void NotificationListenerService::requestInterruptionFilter(jint arg0)
	{
		callMethod<void>(
			"requestInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::requestListenerHints(jint arg0)
	{
		callMethod<void>(
			"requestListenerHints",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::requestUnbind()
	{
		callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
	void NotificationListenerService::setNotificationsShown(jarray arg0)
	{
		callMethod<void>(
			"setNotificationsShown",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::snoozeNotification(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"snoozeNotification",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void NotificationListenerService::updateNotificationChannel(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2)
	{
		callMethod<void>(
			"updateNotificationChannel",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::service::notification

