#pragma once

#include "../../JArray.hpp"
#include "./AutomaticZenRule.def.hpp"
#include "./Notification.def.hpp"
#include "./NotificationChannel.def.hpp"
#include "./NotificationChannelGroup.def.hpp"
#include "./NotificationManager_Policy.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../service/notification/Condition.def.hpp"
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
	inline JString NotificationManager::ACTION_AUTOMATIC_ZEN_RULE()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_AUTOMATIC_ZEN_RULE",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::ACTION_AUTOMATIC_ZEN_RULE_STATUS_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_AUTOMATIC_ZEN_RULE_STATUS_CHANGED",
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
	inline jint NotificationManager::AUTOMATIC_RULE_STATUS_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_DISABLED"
		);
	}
	inline jint NotificationManager::AUTOMATIC_RULE_STATUS_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_ENABLED"
		);
	}
	inline jint NotificationManager::AUTOMATIC_RULE_STATUS_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_REMOVED"
		);
	}
	inline jint NotificationManager::AUTOMATIC_RULE_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"AUTOMATIC_RULE_STATUS_UNKNOWN"
		);
	}
	inline jint NotificationManager::BUBBLE_PREFERENCE_ALL()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"BUBBLE_PREFERENCE_ALL"
		);
	}
	inline jint NotificationManager::BUBBLE_PREFERENCE_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"BUBBLE_PREFERENCE_NONE"
		);
	}
	inline jint NotificationManager::BUBBLE_PREFERENCE_SELECTED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"BUBBLE_PREFERENCE_SELECTED"
		);
	}
	inline JString NotificationManager::EXTRA_AUTOMATIC_RULE_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_RULE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::EXTRA_AUTOMATIC_ZEN_RULE_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_ZEN_RULE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::EXTRA_AUTOMATIC_ZEN_RULE_STATUS()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_ZEN_RULE_STATUS",
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
	inline JString NotificationManager::META_DATA_AUTOMATIC_RULE_TYPE()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_AUTOMATIC_RULE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString NotificationManager::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;"
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
	inline jboolean NotificationManager::areBubblesAllowed() const
	{
		return callMethod<jboolean>(
			"areBubblesAllowed",
			"()Z"
		);
	}
	inline jboolean NotificationManager::areBubblesEnabled() const
	{
		return callMethod<jboolean>(
			"areBubblesEnabled",
			"()Z"
		);
	}
	inline jboolean NotificationManager::areNotificationsEnabled() const
	{
		return callMethod<jboolean>(
			"areNotificationsEnabled",
			"()Z"
		);
	}
	inline jboolean NotificationManager::areNotificationsPaused() const
	{
		return callMethod<jboolean>(
			"areNotificationsPaused",
			"()Z"
		);
	}
	inline jboolean NotificationManager::canNotifyAsPackage(JString arg0) const
	{
		return callMethod<jboolean>(
			"canNotifyAsPackage",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
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
	inline void NotificationManager::cancelAsPackage(JString arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"cancelAsPackage",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
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
	inline jint NotificationManager::getBubblePreference() const
	{
		return callMethod<jint>(
			"getBubblePreference",
			"()I"
		);
	}
	inline android::app::NotificationManager_Policy NotificationManager::getConsolidatedNotificationPolicy() const
	{
		return callObjectMethod(
			"getConsolidatedNotificationPolicy",
			"()Landroid/app/NotificationManager$Policy;"
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
	inline android::app::NotificationChannel NotificationManager::getNotificationChannel(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getNotificationChannel",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/app/NotificationChannel;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
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
	inline JString NotificationManager::getNotificationDelegate() const
	{
		return callObjectMethod(
			"getNotificationDelegate",
			"()Ljava/lang/String;"
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
	inline void NotificationManager::notifyAsPackage(JString arg0, JString arg1, jint arg2, android::app::Notification arg3) const
	{
		callMethod<void>(
			"notifyAsPackage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/app/Notification;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
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
	inline void NotificationManager::setAutomaticZenRuleState(JString arg0, android::service::notification::Condition arg1) const
	{
		callMethod<void>(
			"setAutomaticZenRuleState",
			"(Ljava/lang/String;Landroid/service/notification/Condition;)V",
			arg0.object<jstring>(),
			arg1.object()
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
	inline void NotificationManager::setNotificationDelegate(JString arg0) const
	{
		callMethod<void>(
			"setNotificationDelegate",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	inline jboolean NotificationManager::shouldHideSilentStatusBarIcons() const
	{
		return callMethod<jboolean>(
			"shouldHideSilentStatusBarIcons",
			"()Z"
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
