#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::service::notification
{
	class ZenPolicy;
}

namespace android::service::notification
{
	class ZenPolicy_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ZenPolicy_Builder(QAndroidJniObject obj);
		// Constructors
		ZenPolicy_Builder();
		
		// Methods
		QAndroidJniObject allowAlarms(jboolean arg0);
		QAndroidJniObject allowAllSounds();
		QAndroidJniObject allowCalls(jint arg0);
		QAndroidJniObject allowEvents(jboolean arg0);
		QAndroidJniObject allowMedia(jboolean arg0);
		QAndroidJniObject allowMessages(jint arg0);
		QAndroidJniObject allowReminders(jboolean arg0);
		QAndroidJniObject allowRepeatCallers(jboolean arg0);
		QAndroidJniObject allowSystem(jboolean arg0);
		QAndroidJniObject build();
		QAndroidJniObject disallowAllSounds();
		QAndroidJniObject hideAllVisualEffects();
		QAndroidJniObject showAllVisualEffects();
		QAndroidJniObject showBadges(jboolean arg0);
		QAndroidJniObject showFullScreenIntent(jboolean arg0);
		QAndroidJniObject showInAmbientDisplay(jboolean arg0);
		QAndroidJniObject showInNotificationList(jboolean arg0);
		QAndroidJniObject showLights(jboolean arg0);
		QAndroidJniObject showPeeking(jboolean arg0);
		QAndroidJniObject showStatusBarIcons(jboolean arg0);
	};
} // namespace android::service::notification

