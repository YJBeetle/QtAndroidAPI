#pragma once

#ifndef ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE_RANKING
#define ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE_RANKING

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class NotificationChannel;
}

namespace __jni_impl::android::service::notification
{
	class NotificationListenerService_Ranking : public __JniBaseClass
	{
	public:
		// Fields
		static jint USER_SENTIMENT_NEGATIVE();
		static jint USER_SENTIMENT_NEUTRAL();
		static jint USER_SENTIMENT_POSITIVE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getKey();
		QAndroidJniObject getChannel();
		jint getRank();
		jboolean isAmbient();
		jint getSuppressedVisualEffects();
		jboolean matchesInterruptionFilter();
		jstring getImportanceExplanation();
		jint getUserSentiment();
		QAndroidJniObject getSmartActions();
		QAndroidJniObject getSmartReplies();
		jboolean isSuspended();
		jlong getLastAudiblyAlertedMillis();
		jstring getOverrideGroupKey();
		jint getImportance();
		jboolean canShowBadge();
		jboolean canBubble();
	};
} // namespace __jni_impl::android::service::notification

#include "../../app/NotificationChannel.hpp"

namespace __jni_impl::android::service::notification
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
	
	// Constructors
	void NotificationListenerService_Ranking::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.NotificationListenerService$Ranking",
			"()V");
	}
	
	// Methods
	jboolean NotificationListenerService_Ranking::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NotificationListenerService_Ranking::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NotificationListenerService_Ranking::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Landroid/app/NotificationChannel;"
		);
	}
	jint NotificationListenerService_Ranking::getRank()
	{
		return __thiz.callMethod<jint>(
			"getRank",
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
	jint NotificationListenerService_Ranking::getSuppressedVisualEffects()
	{
		return __thiz.callMethod<jint>(
			"getSuppressedVisualEffects",
			"()I"
		);
	}
	jboolean NotificationListenerService_Ranking::matchesInterruptionFilter()
	{
		return __thiz.callMethod<jboolean>(
			"matchesInterruptionFilter",
			"()Z"
		);
	}
	jstring NotificationListenerService_Ranking::getImportanceExplanation()
	{
		return __thiz.callObjectMethod(
			"getImportanceExplanation",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint NotificationListenerService_Ranking::getUserSentiment()
	{
		return __thiz.callMethod<jint>(
			"getUserSentiment",
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
	jboolean NotificationListenerService_Ranking::isSuspended()
	{
		return __thiz.callMethod<jboolean>(
			"isSuspended",
			"()Z"
		);
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
	jint NotificationListenerService_Ranking::getImportance()
	{
		return __thiz.callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jboolean NotificationListenerService_Ranking::canShowBadge()
	{
		return __thiz.callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::canBubble()
	{
		return __thiz.callMethod<jboolean>(
			"canBubble",
			"()Z"
		);
	}
} // namespace __jni_impl::android::service::notification

namespace android::service::notification
{
	class NotificationListenerService_Ranking : public __jni_impl::android::service::notification::NotificationListenerService_Ranking
	{
	public:
		NotificationListenerService_Ranking(QAndroidJniObject obj) { __thiz = obj; }
		NotificationListenerService_Ranking()
		{
			__constructor();
		}
	};
} // namespace android::service::notification

#endif // ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE_RANKING

