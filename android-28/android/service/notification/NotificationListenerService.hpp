#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../app/NotificationChannel.def.hpp"
#include "../../app/NotificationChannelGroup.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "./NotificationListenerService_RankingMap.def.hpp"
#include "./StatusBarNotification.def.hpp"
#include "../../../JString.hpp"
#include "./NotificationListenerService.def.hpp"

namespace android::service::notification
{
	// Fields
	inline jint NotificationListenerService::HINT_HOST_DISABLE_CALL_EFFECTS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_CALL_EFFECTS"
		);
	}
	inline jint NotificationListenerService::HINT_HOST_DISABLE_EFFECTS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_EFFECTS"
		);
	}
	inline jint NotificationListenerService::HINT_HOST_DISABLE_NOTIFICATION_EFFECTS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_NOTIFICATION_EFFECTS"
		);
	}
	inline jint NotificationListenerService::INTERRUPTION_FILTER_ALARMS()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	inline jint NotificationListenerService::INTERRUPTION_FILTER_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	inline jint NotificationListenerService::INTERRUPTION_FILTER_NONE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	inline jint NotificationListenerService::INTERRUPTION_FILTER_PRIORITY()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	inline jint NotificationListenerService::INTERRUPTION_FILTER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	inline jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_ADDED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_ADDED"
		);
	}
	inline jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_DELETED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_DELETED"
		);
	}
	inline jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_UPDATED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_UPDATED"
		);
	}
	inline jint NotificationListenerService::REASON_APP_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL"
		);
	}
	inline jint NotificationListenerService::REASON_APP_CANCEL_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL_ALL"
		);
	}
	inline jint NotificationListenerService::REASON_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL"
		);
	}
	inline jint NotificationListenerService::REASON_CANCEL_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL_ALL"
		);
	}
	inline jint NotificationListenerService::REASON_CHANNEL_BANNED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CHANNEL_BANNED"
		);
	}
	inline jint NotificationListenerService::REASON_CLICK()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CLICK"
		);
	}
	inline jint NotificationListenerService::REASON_ERROR()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_ERROR"
		);
	}
	inline jint NotificationListenerService::REASON_GROUP_OPTIMIZATION()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_OPTIMIZATION"
		);
	}
	inline jint NotificationListenerService::REASON_GROUP_SUMMARY_CANCELED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_SUMMARY_CANCELED"
		);
	}
	inline jint NotificationListenerService::REASON_LISTENER_CANCEL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL"
		);
	}
	inline jint NotificationListenerService::REASON_LISTENER_CANCEL_ALL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL_ALL"
		);
	}
	inline jint NotificationListenerService::REASON_PACKAGE_BANNED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_BANNED"
		);
	}
	inline jint NotificationListenerService::REASON_PACKAGE_CHANGED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_CHANGED"
		);
	}
	inline jint NotificationListenerService::REASON_PACKAGE_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_SUSPENDED"
		);
	}
	inline jint NotificationListenerService::REASON_PROFILE_TURNED_OFF()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PROFILE_TURNED_OFF"
		);
	}
	inline jint NotificationListenerService::REASON_SNOOZED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_SNOOZED"
		);
	}
	inline jint NotificationListenerService::REASON_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_TIMEOUT"
		);
	}
	inline jint NotificationListenerService::REASON_UNAUTOBUNDLED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_UNAUTOBUNDLED"
		);
	}
	inline jint NotificationListenerService::REASON_USER_STOPPED()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_USER_STOPPED"
		);
	}
	inline JString NotificationListenerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.notification.NotificationListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_OFF"
		);
	}
	inline jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_ON"
		);
	}
	
	// Constructors
	inline NotificationListenerService::NotificationListenerService()
		: android::app::Service(
			"android.service.notification.NotificationListenerService",
			"()V"
		) {}
	
	// Methods
	inline void NotificationListenerService::requestRebind(android::content::ComponentName arg0)
	{
		callStaticMethod<void>(
			"android.service.notification.NotificationListenerService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void NotificationListenerService::cancelAllNotifications() const
	{
		callMethod<void>(
			"cancelAllNotifications",
			"()V"
		);
	}
	inline void NotificationListenerService::cancelNotification(JString arg0) const
	{
		callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void NotificationListenerService::cancelNotification(JString arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void NotificationListenerService::cancelNotifications(JArray arg0) const
	{
		callMethod<void>(
			"cancelNotifications",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline JArray NotificationListenerService::getActiveNotifications() const
	{
		return callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		);
	}
	inline JArray NotificationListenerService::getActiveNotifications(JArray arg0) const
	{
		return callObjectMethod(
			"getActiveNotifications",
			"([Ljava/lang/String;)[Landroid/service/notification/StatusBarNotification;",
			arg0.object<jarray>()
		);
	}
	inline jint NotificationListenerService::getCurrentInterruptionFilter() const
	{
		return callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I"
		);
	}
	inline jint NotificationListenerService::getCurrentListenerHints() const
	{
		return callMethod<jint>(
			"getCurrentListenerHints",
			"()I"
		);
	}
	inline android::service::notification::NotificationListenerService_RankingMap NotificationListenerService::getCurrentRanking() const
	{
		return callObjectMethod(
			"getCurrentRanking",
			"()Landroid/service/notification/NotificationListenerService$RankingMap;"
		);
	}
	inline JObject NotificationListenerService::getNotificationChannelGroups(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getNotificationChannelGroups",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject NotificationListenerService::getNotificationChannels(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getNotificationChannels",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JArray NotificationListenerService::getSnoozedNotifications() const
	{
		return callObjectMethod(
			"getSnoozedNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		);
	}
	inline JObject NotificationListenerService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void NotificationListenerService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void NotificationListenerService::onInterruptionFilterChanged(jint arg0) const
	{
		callMethod<void>(
			"onInterruptionFilterChanged",
			"(I)V",
			arg0
		);
	}
	inline void NotificationListenerService::onListenerConnected() const
	{
		callMethod<void>(
			"onListenerConnected",
			"()V"
		);
	}
	inline void NotificationListenerService::onListenerDisconnected() const
	{
		callMethod<void>(
			"onListenerDisconnected",
			"()V"
		);
	}
	inline void NotificationListenerService::onListenerHintsChanged(jint arg0) const
	{
		callMethod<void>(
			"onListenerHintsChanged",
			"(I)V",
			arg0
		);
	}
	inline void NotificationListenerService::onNotificationChannelGroupModified(JString arg0, android::os::UserHandle arg1, android::app::NotificationChannelGroup arg2, jint arg3) const
	{
		callMethod<void>(
			"onNotificationChannelGroupModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannelGroup;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline void NotificationListenerService::onNotificationChannelModified(JString arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2, jint arg3) const
	{
		callMethod<void>(
			"onNotificationChannelModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline void NotificationListenerService::onNotificationPosted(android::service::notification::StatusBarNotification arg0) const
	{
		callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.object()
		);
	}
	inline void NotificationListenerService::onNotificationPosted(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1) const
	{
		callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NotificationListenerService::onNotificationRankingUpdate(android::service::notification::NotificationListenerService_RankingMap arg0) const
	{
		callMethod<void>(
			"onNotificationRankingUpdate",
			"(Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.object()
		);
	}
	inline void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0) const
	{
		callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.object()
		);
	}
	inline void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1) const
	{
		callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NotificationListenerService::onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1, jint arg2) const
	{
		callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void NotificationListenerService::requestInterruptionFilter(jint arg0) const
	{
		callMethod<void>(
			"requestInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	inline void NotificationListenerService::requestListenerHints(jint arg0) const
	{
		callMethod<void>(
			"requestListenerHints",
			"(I)V",
			arg0
		);
	}
	inline void NotificationListenerService::requestUnbind() const
	{
		callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
	inline void NotificationListenerService::setNotificationsShown(JArray arg0) const
	{
		callMethod<void>(
			"setNotificationsShown",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void NotificationListenerService::snoozeNotification(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"snoozeNotification",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void NotificationListenerService::updateNotificationChannel(JString arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2) const
	{
		callMethod<void>(
			"updateNotificationChannel",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::service::notification

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

