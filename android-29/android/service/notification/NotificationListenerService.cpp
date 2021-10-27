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
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_CALL_EFFECTS"
		);
	}
	jint NotificationListenerService::HINT_HOST_DISABLE_EFFECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_EFFECTS"
		);
	}
	jint NotificationListenerService::HINT_HOST_DISABLE_NOTIFICATION_EFFECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_NOTIFICATION_EFFECTS"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_ALARMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_ADDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_ADDED"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_DELETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_DELETED"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_UPDATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_UPDATED"
		);
	}
	jint NotificationListenerService::REASON_APP_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_APP_CANCEL_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_CANCEL_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_CHANNEL_BANNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CHANNEL_BANNED"
		);
	}
	jint NotificationListenerService::REASON_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CLICK"
		);
	}
	jint NotificationListenerService::REASON_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_ERROR"
		);
	}
	jint NotificationListenerService::REASON_GROUP_OPTIMIZATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_OPTIMIZATION"
		);
	}
	jint NotificationListenerService::REASON_GROUP_SUMMARY_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_SUMMARY_CANCELED"
		);
	}
	jint NotificationListenerService::REASON_LISTENER_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_LISTENER_CANCEL_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_BANNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_BANNED"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_CHANGED"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_SUSPENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_SUSPENDED"
		);
	}
	jint NotificationListenerService::REASON_PROFILE_TURNED_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PROFILE_TURNED_OFF"
		);
	}
	jint NotificationListenerService::REASON_SNOOZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_SNOOZED"
		);
	}
	jint NotificationListenerService::REASON_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_TIMEOUT"
		);
	}
	jint NotificationListenerService::REASON_UNAUTOBUNDLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_UNAUTOBUNDLED"
		);
	}
	jint NotificationListenerService::REASON_USER_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_USER_STOPPED"
		);
	}
	jstring NotificationListenerService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.NotificationListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_OFF"
		);
	}
	jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_ON"
		);
	}
	
	NotificationListenerService::NotificationListenerService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotificationListenerService::NotificationListenerService()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.NotificationListenerService",
			"()V"
		);
	}
	
	// Methods
	void NotificationListenerService::requestRebind(android::content::ComponentName arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.service.notification.NotificationListenerService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::cancelAllNotifications()
	{
		__thiz.callMethod<void>(
			"cancelAllNotifications",
			"()V"
		);
	}
	void NotificationListenerService::cancelNotification(jstring arg0)
	{
		__thiz.callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::cancelNotification(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void NotificationListenerService::cancelNotification(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NotificationListenerService::cancelNotification(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void NotificationListenerService::cancelNotifications(jarray arg0)
	{
		__thiz.callMethod<void>(
			"cancelNotifications",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::clearRequestedListenerHints()
	{
		__thiz.callMethod<void>(
			"clearRequestedListenerHints",
			"()V"
		);
	}
	jarray NotificationListenerService::getActiveNotifications()
	{
		return __thiz.callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	jarray NotificationListenerService::getActiveNotifications(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveNotifications",
			"([Ljava/lang/String;)[Landroid/service/notification/StatusBarNotification;",
			arg0
		).object<jarray>();
	}
	jint NotificationListenerService::getCurrentInterruptionFilter()
	{
		return __thiz.callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I"
		);
	}
	jint NotificationListenerService::getCurrentListenerHints()
	{
		return __thiz.callMethod<jint>(
			"getCurrentListenerHints",
			"()I"
		);
	}
	QAndroidJniObject NotificationListenerService::getCurrentRanking()
	{
		return __thiz.callObjectMethod(
			"getCurrentRanking",
			"()Landroid/service/notification/NotificationListenerService$RankingMap;"
		);
	}
	QAndroidJniObject NotificationListenerService::getNotificationChannelGroups(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannelGroups",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NotificationListenerService::getNotificationChannelGroups(const QString &arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannelGroups",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NotificationListenerService::getNotificationChannels(jstring arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannels",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NotificationListenerService::getNotificationChannels(const QString &arg0, android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannels",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jarray NotificationListenerService::getSnoozedNotifications()
	{
		return __thiz.callObjectMethod(
			"getSnoozedNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	QAndroidJniObject NotificationListenerService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void NotificationListenerService::onInterruptionFilterChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onInterruptionFilterChanged",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::onListenerConnected()
	{
		__thiz.callMethod<void>(
			"onListenerConnected",
			"()V"
		);
	}
	void NotificationListenerService::onListenerDisconnected()
	{
		__thiz.callMethod<void>(
			"onListenerDisconnected",
			"()V"
		);
	}
	void NotificationListenerService::onListenerHintsChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onListenerHintsChanged",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::onNotificationChannelGroupModified(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannelGroup arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNotificationChannelGroupModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannelGroup;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void NotificationListenerService::onNotificationChannelGroupModified(const QString &arg0, android::os::UserHandle arg1, android::app::NotificationChannelGroup arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNotificationChannelGroupModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannelGroup;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void NotificationListenerService::onNotificationChannelModified(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNotificationChannelModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void NotificationListenerService::onNotificationChannelModified(const QString &arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNotificationChannelModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void NotificationListenerService::onNotificationPosted(android::service::notification::StatusBarNotification arg0)
	{
		__thiz.callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationPosted(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1)
	{
		__thiz.callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationRankingUpdate(android::service::notification::NotificationListenerService_RankingMap arg0)
	{
		__thiz.callMethod<void>(
			"onNotificationRankingUpdate",
			"(Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0)
	{
		__thiz.callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1)
	{
		__thiz.callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void NotificationListenerService::onSilentStatusBarIconsVisibilityChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onSilentStatusBarIconsVisibilityChanged",
			"(Z)V",
			arg0
		);
	}
	void NotificationListenerService::requestInterruptionFilter(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::requestListenerHints(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestListenerHints",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::requestUnbind()
	{
		__thiz.callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
	void NotificationListenerService::setNotificationsShown(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setNotificationsShown",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::snoozeNotification(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"snoozeNotification",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void NotificationListenerService::snoozeNotification(const QString &arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"snoozeNotification",
			"(Ljava/lang/String;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void NotificationListenerService::updateNotificationChannel(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2)
	{
		__thiz.callMethod<void>(
			"updateNotificationChannel",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void NotificationListenerService::updateNotificationChannel(const QString &arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2)
	{
		__thiz.callMethod<void>(
			"updateNotificationChannel",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::service::notification

