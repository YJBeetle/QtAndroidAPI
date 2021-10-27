#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class NotificationChannel;
}

namespace android::service::notification
{
	class NotificationListenerService_Ranking : public __JniBaseClass
	{
	public:
		// Fields
		static jint USER_SENTIMENT_NEGATIVE();
		static jint USER_SENTIMENT_NEUTRAL();
		static jint USER_SENTIMENT_POSITIVE();
		
		NotificationListenerService_Ranking(QAndroidJniObject obj);
		// Constructors
		NotificationListenerService_Ranking();
		
		// Methods
		jboolean canBubble();
		jboolean canShowBadge();
		jboolean equals(jobject arg0);
		QAndroidJniObject getChannel();
		jint getImportance();
		jstring getImportanceExplanation();
		jstring getKey();
		jlong getLastAudiblyAlertedMillis();
		jstring getOverrideGroupKey();
		jint getRank();
		QAndroidJniObject getSmartActions();
		QAndroidJniObject getSmartReplies();
		jint getSuppressedVisualEffects();
		jint getUserSentiment();
		jboolean isAmbient();
		jboolean isSuspended();
		jboolean matchesInterruptionFilter();
	};
} // namespace android::service::notification

