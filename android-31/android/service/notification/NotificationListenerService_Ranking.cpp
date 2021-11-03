#include "../../app/NotificationChannel.hpp"
#include "../../content/pm/ShortcutInfo.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NotificationListenerService_Ranking.hpp"

namespace android::service::notification
{
	// Fields
	jint NotificationListenerService_Ranking::USER_SENTIMENT_NEGATIVE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEGATIVE"
		);
	}
	jint NotificationListenerService_Ranking::USER_SENTIMENT_NEUTRAL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEUTRAL"
		);
	}
	jint NotificationListenerService_Ranking::USER_SENTIMENT_POSITIVE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_POSITIVE"
		);
	}
	jint NotificationListenerService_Ranking::VISIBILITY_NO_OVERRIDE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"VISIBILITY_NO_OVERRIDE"
		);
	}
	
	// QJniObject forward
	NotificationListenerService_Ranking::NotificationListenerService_Ranking(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NotificationListenerService_Ranking::NotificationListenerService_Ranking()
		: JObject(
			"android.service.notification.NotificationListenerService$Ranking",
			"()V"
		) {}
	
	// Methods
	jboolean NotificationListenerService_Ranking::canBubble() const
	{
		return callMethod<jboolean>(
			"canBubble",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::canShowBadge() const
	{
		return callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::app::NotificationChannel NotificationListenerService_Ranking::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Landroid/app/NotificationChannel;"
		);
	}
	android::content::pm::ShortcutInfo NotificationListenerService_Ranking::getConversationShortcutInfo() const
	{
		return callObjectMethod(
			"getConversationShortcutInfo",
			"()Landroid/content/pm/ShortcutInfo;"
		);
	}
	jint NotificationListenerService_Ranking::getImportance() const
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	JString NotificationListenerService_Ranking::getImportanceExplanation() const
	{
		return callObjectMethod(
			"getImportanceExplanation",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString NotificationListenerService_Ranking::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	jlong NotificationListenerService_Ranking::getLastAudiblyAlertedMillis() const
	{
		return callMethod<jlong>(
			"getLastAudiblyAlertedMillis",
			"()J"
		);
	}
	jint NotificationListenerService_Ranking::getLockscreenVisibilityOverride() const
	{
		return callMethod<jint>(
			"getLockscreenVisibilityOverride",
			"()I"
		);
	}
	JString NotificationListenerService_Ranking::getOverrideGroupKey() const
	{
		return callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		);
	}
	jint NotificationListenerService_Ranking::getRank() const
	{
		return callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	JObject NotificationListenerService_Ranking::getSmartActions() const
	{
		return callObjectMethod(
			"getSmartActions",
			"()Ljava/util/List;"
		);
	}
	JObject NotificationListenerService_Ranking::getSmartReplies() const
	{
		return callObjectMethod(
			"getSmartReplies",
			"()Ljava/util/List;"
		);
	}
	jint NotificationListenerService_Ranking::getSuppressedVisualEffects() const
	{
		return callMethod<jint>(
			"getSuppressedVisualEffects",
			"()I"
		);
	}
	jint NotificationListenerService_Ranking::getUserSentiment() const
	{
		return callMethod<jint>(
			"getUserSentiment",
			"()I"
		);
	}
	jboolean NotificationListenerService_Ranking::isAmbient() const
	{
		return callMethod<jboolean>(
			"isAmbient",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::isConversation() const
	{
		return callMethod<jboolean>(
			"isConversation",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::isSuspended() const
	{
		return callMethod<jboolean>(
			"isSuspended",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::matchesInterruptionFilter() const
	{
		return callMethod<jboolean>(
			"matchesInterruptionFilter",
			"()Z"
		);
	}
} // namespace android::service::notification

