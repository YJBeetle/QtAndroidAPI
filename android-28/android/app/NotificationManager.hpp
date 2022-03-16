#pragma once

#include "../../JArray.hpp"
#include "./AutomaticZenRule.def.hpp"
#include "./Notification.def.hpp"
#include "./NotificationChannel.def.hpp"
#include "./NotificationChannelGroup.def.hpp"
#include "./NotificationManager_Policy.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./NotificationManager.def.hpp"

namespace android::app
{
	// Fields
	inline JString NotificationManager::ACTION_APP_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_APP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::ACTION_INTERRUPTION_FILTER_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_INTERRUPTION_FILTER_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::ACTION_NOTIFICATION_POLICY_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::EXTRA_BLOCKED_STATE()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_BLOCKED_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::EXTRA_NOTIFICATION_CHANNEL_GROUP_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_GROUP_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::EXTRA_NOTIFICATION_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	inline jint NotificationManager::IMPORTANCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_DEFAULT"
		);
	}
	inline jint NotificationManager::IMPORTANCE_HIGH()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_HIGH"
		);
	}
	inline jint NotificationManager::IMPORTANCE_LOW()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_LOW"
		);
	}
	inline jint NotificationManager::IMPORTANCE_MAX()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MAX"
		);
	}
	inline jint NotificationManager::IMPORTANCE_MIN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MIN"
		);
	}
	inline jint NotificationManager::IMPORTANCE_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_NONE"
		);
	}
	inline jint NotificationManager::IMPORTANCE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_UNSPECIFIED"
		);
	}
	inline jint NotificationManager::INTERRUPTION_FILTER_ALARMS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	inline jint NotificationManager::INTERRUPTION_FILTER_ALL()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	inline jint NotificationManager::INTERRUPTION_FILTER_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	inline jint NotificationManager::INTERRUPTION_FILTER_PRIORITY()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	inline jint NotificationManager::INTERRUPTION_FILTER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString NotificationManager::addAutomaticZenRule(android::app::AutomaticZenRule arg0) const
	{
		return callObjectMethod(
			"addAutomaticZenRule",
			"(Landroid/app/AutomaticZenRule;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean NotificationManager::areNotificationsEnabled() const
	{
		return callMethod<jboolean>(
			"areNotificationsEnabled",
			"()Z"
		);
	}
	inline void NotificationManager::cancel(jint arg0) const
	{
		callMethod<void>(
			"cancel",
			"(I)V",
			arg0
		);
	}
	inline void NotificationManager::cancel(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"cancel",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void NotificationManager::cancelAll() const
	{
		callMethod<void>(
			"cancelAll",
			"()V"
		);
	}
	inline void NotificationManager::createNotificationChannel(android::app::NotificationChannel arg0) const
	{
		callMethod<void>(
			"createNotificationChannel",
			"(Landroid/app/NotificationChannel;)V",
			arg0.object()
		);
	}
	inline void NotificationManager::createNotificationChannelGroup(android::app::NotificationChannelGroup arg0) const
	{
		callMethod<void>(
			"createNotificationChannelGroup",
			"(Landroid/app/NotificationChannelGroup;)V",
			arg0.object()
		);
	}
	inline void NotificationManager::createNotificationChannelGroups(JObject arg0) const
	{
		callMethod<void>(
			"createNotificationChannelGroups",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void NotificationManager::createNotificationChannels(JObject arg0) const
	{
		callMethod<void>(
			"createNotificationChannels",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void NotificationManager::deleteNotificationChannel(JString arg0) const
	{
		callMethod<void>(
			"deleteNotificationChannel",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void NotificationManager::deleteNotificationChannelGroup(JString arg0) const
	{
		callMethod<void>(
			"deleteNotificationChannelGroup",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JArray NotificationManager::getActiveNotifications() const
	{
		return callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		);
	}
	inline android::app::AutomaticZenRule NotificationManager::getAutomaticZenRule(JString arg0) const
	{
		return callObjectMethod(
			"getAutomaticZenRule",
			"(Ljava/lang/String;)Landroid/app/AutomaticZenRule;",
			arg0.object<jstring>()
		);
	}
	inline JObject NotificationManager::getAutomaticZenRules() const
	{
		return callObjectMethod(
			"getAutomaticZenRules",
			"()Ljava/util/Map;"
		);
	}
	inline jint NotificationManager::getCurrentInterruptionFilter() const
	{
		return callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I"
		);
	}
	inline jint NotificationManager::getImportance() const
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	inline android::app::NotificationChannel NotificationManager::getNotificationChannel(JString arg0) const
	{
		return callObjectMethod(
			"getNotificationChannel",
			"(Ljava/lang/String;)Landroid/app/NotificationChannel;",
			arg0.object<jstring>()
		);
	}
	inline android::app::NotificationChannelGroup NotificationManager::getNotificationChannelGroup(JString arg0) const
	{
		return callObjectMethod(
			"getNotificationChannelGroup",
			"(Ljava/lang/String;)Landroid/app/NotificationChannelGroup;",
			arg0.object<jstring>()
		);
	}
	inline JObject NotificationManager::getNotificationChannelGroups() const
	{
		return callObjectMethod(
			"getNotificationChannelGroups",
			"()Ljava/util/List;"
		);
	}
	inline JObject NotificationManager::getNotificationChannels() const
	{
		return callObjectMethod(
			"getNotificationChannels",
			"()Ljava/util/List;"
		);
	}
	inline android::app::NotificationManager_Policy NotificationManager::getNotificationPolicy() const
	{
		return callObjectMethod(
			"getNotificationPolicy",
			"()Landroid/app/NotificationManager$Policy;"
		);
	}
	inline jboolean NotificationManager::isNotificationListenerAccessGranted(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isNotificationListenerAccessGranted",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline jboolean NotificationManager::isNotificationPolicyAccessGranted() const
	{
		return callMethod<jboolean>(
			"isNotificationPolicyAccessGranted",
			"()Z"
		);
	}
	inline void NotificationManager::notify(jint arg0, android::app::Notification arg1) const
	{
		callMethod<void>(
			"notify",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		);
	}
	inline void NotificationManager::notify(JString arg0, jint arg1, android::app::Notification arg2) const
	{
		callMethod<void>(
			"notify",
			"(Ljava/lang/String;ILandroid/app/Notification;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean NotificationManager::removeAutomaticZenRule(JString arg0) const
	{
		return callMethod<jboolean>(
			"removeAutomaticZenRule",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void NotificationManager::setInterruptionFilter(jint arg0) const
	{
		callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	inline void NotificationManager::setNotificationPolicy(android::app::NotificationManager_Policy arg0) const
	{
		callMethod<void>(
			"setNotificationPolicy",
			"(Landroid/app/NotificationManager$Policy;)V",
			arg0.object()
		);
	}
	inline jboolean NotificationManager::updateAutomaticZenRule(JString arg0, android::app::AutomaticZenRule arg1) const
	{
		return callMethod<jboolean>(
			"updateAutomaticZenRule",
			"(Ljava/lang/String;Landroid/app/AutomaticZenRule;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::app

// Base class headers

