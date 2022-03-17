#pragma once

#include "../../app/NotificationChannel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NotificationListenerService_Ranking.def.hpp"

namespace android::service::notification
{
	// Fields
	inline jint NotificationListenerService_Ranking::USER_SENTIMENT_NEGATIVE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEGATIVE"
		);
	}
	inline jint NotificationListenerService_Ranking::USER_SENTIMENT_NEUTRAL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEUTRAL"
		);
	}
	inline jint NotificationListenerService_Ranking::USER_SENTIMENT_POSITIVE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_POSITIVE"
		);
	}
	
	// Constructors
	inline NotificationListenerService_Ranking::NotificationListenerService_Ranking()
		: JObject(
			"android.service.notification.NotificationListenerService$Ranking",
			"()V"
		) {}
	
	// Methods
	inline jboolean NotificationListenerService_Ranking::canBubble() const
	{
		return callMethod<jboolean>(
			"canBubble",
			"()Z"
		);
	}
	inline jboolean NotificationListenerService_Ranking::canShowBadge() const
	{
		return callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	inline jboolean NotificationListenerService_Ranking::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::app::NotificationChannel NotificationListenerService_Ranking::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Landroid/app/NotificationChannel;"
		);
	}
	inline jint NotificationListenerService_Ranking::getImportance() const
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	inline JString NotificationListenerService_Ranking::getImportanceExplanation() const
	{
		return callObjectMethod(
			"getImportanceExplanation",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString NotificationListenerService_Ranking::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline jlong NotificationListenerService_Ranking::getLastAudiblyAlertedMillis() const
	{
		return callMethod<jlong>(
			"getLastAudiblyAlertedMillis",
			"()J"
		);
	}
	inline JString NotificationListenerService_Ranking::getOverrideGroupKey() const
	{
		return callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint NotificationListenerService_Ranking::getRank() const
	{
		return callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	inline JObject NotificationListenerService_Ranking::getSmartActions() const
	{
		return callObjectMethod(
			"getSmartActions",
			"()Ljava/util/List;"
		);
	}
	inline JObject NotificationListenerService_Ranking::getSmartReplies() const
	{
		return callObjectMethod(
			"getSmartReplies",
			"()Ljava/util/List;"
		);
	}
	inline jint NotificationListenerService_Ranking::getSuppressedVisualEffects() const
	{
		return callMethod<jint>(
			"getSuppressedVisualEffects",
			"()I"
		);
	}
	inline jint NotificationListenerService_Ranking::getUserSentiment() const
	{
		return callMethod<jint>(
			"getUserSentiment",
			"()I"
		);
	}
	inline jboolean NotificationListenerService_Ranking::isAmbient() const
	{
		return callMethod<jboolean>(
			"isAmbient",
			"()Z"
		);
	}
	inline jboolean NotificationListenerService_Ranking::isSuspended() const
	{
		return callMethod<jboolean>(
			"isSuspended",
			"()Z"
		);
	}
	inline jboolean NotificationListenerService_Ranking::matchesInterruptionFilter() const
	{
		return callMethod<jboolean>(
			"matchesInterruptionFilter",
			"()Z"
		);
	}
} // namespace android::service::notification

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::notification;
#endif
