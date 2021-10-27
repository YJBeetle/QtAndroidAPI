#include "../../app/NotificationChannel.hpp"
#include "./NotificationListenerService_Ranking.hpp"

namespace android::service::notification
{
	// Fields
	jint NotificationListenerService_Ranking::USER_SENTIMENT_NEGATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEGATIVE"
		);
	}
	jint NotificationListenerService_Ranking::USER_SENTIMENT_NEUTRAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEUTRAL"
		);
	}
	jint NotificationListenerService_Ranking::USER_SENTIMENT_POSITIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_POSITIVE"
		);
	}
	
	NotificationListenerService_Ranking::NotificationListenerService_Ranking(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotificationListenerService_Ranking::NotificationListenerService_Ranking()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.NotificationListenerService$Ranking",
			"()V"
		);
	}
	
	// Methods
	jboolean NotificationListenerService_Ranking::canBubble()
	{
		return __thiz.callMethod<jboolean>(
			"canBubble",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::canShowBadge()
	{
		return __thiz.callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject NotificationListenerService_Ranking::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Landroid/app/NotificationChannel;"
		);
	}
	jint NotificationListenerService_Ranking::getImportance()
	{
		return __thiz.callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jstring NotificationListenerService_Ranking::getImportanceExplanation()
	{
		return __thiz.callObjectMethod(
			"getImportanceExplanation",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring NotificationListenerService_Ranking::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong NotificationListenerService_Ranking::getLastAudiblyAlertedMillis()
	{
		return __thiz.callMethod<jlong>(
			"getLastAudiblyAlertedMillis",
			"()J"
		);
	}
	jstring NotificationListenerService_Ranking::getOverrideGroupKey()
	{
		return __thiz.callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationListenerService_Ranking::getRank()
	{
		return __thiz.callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	QAndroidJniObject NotificationListenerService_Ranking::getSmartActions()
	{
		return __thiz.callObjectMethod(
			"getSmartActions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject NotificationListenerService_Ranking::getSmartReplies()
	{
		return __thiz.callObjectMethod(
			"getSmartReplies",
			"()Ljava/util/List;"
		);
	}
	jint NotificationListenerService_Ranking::getSuppressedVisualEffects()
	{
		return __thiz.callMethod<jint>(
			"getSuppressedVisualEffects",
			"()I"
		);
	}
	jint NotificationListenerService_Ranking::getUserSentiment()
	{
		return __thiz.callMethod<jint>(
			"getUserSentiment",
			"()I"
		);
	}
	jboolean NotificationListenerService_Ranking::isAmbient()
	{
		return __thiz.callMethod<jboolean>(
			"isAmbient",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::isSuspended()
	{
		return __thiz.callMethod<jboolean>(
			"isSuspended",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::matchesInterruptionFilter()
	{
		return __thiz.callMethod<jboolean>(
			"matchesInterruptionFilter",
			"()Z"
		);
	}
} // namespace android::service::notification

