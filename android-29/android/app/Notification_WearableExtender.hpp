#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification;
}
namespace android::app
{
	class Notification_Action;
}
namespace android::app
{
	class Notification_Builder;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::graphics
{
	class Bitmap;
}

namespace android::app
{
	class Notification_WearableExtender : public __JniBaseClass
	{
	public:
		// Fields
		static jint SCREEN_TIMEOUT_LONG();
		static jint SCREEN_TIMEOUT_SHORT();
		static jint SIZE_DEFAULT();
		static jint SIZE_FULL_SCREEN();
		static jint SIZE_LARGE();
		static jint SIZE_MEDIUM();
		static jint SIZE_SMALL();
		static jint SIZE_XSMALL();
		static jint UNSET_ACTION_INDEX();
		
		Notification_WearableExtender(QAndroidJniObject obj);
		// Constructors
		Notification_WearableExtender();
		Notification_WearableExtender(android::app::Notification arg0);
		
		// Methods
		QAndroidJniObject addAction(android::app::Notification_Action arg0);
		QAndroidJniObject addActions(__JniBaseClass arg0);
		QAndroidJniObject addPage(android::app::Notification arg0);
		QAndroidJniObject addPages(__JniBaseClass arg0);
		QAndroidJniObject clearActions();
		QAndroidJniObject clearPages();
		QAndroidJniObject clone();
		QAndroidJniObject extend(android::app::Notification_Builder arg0);
		QAndroidJniObject getActions();
		QAndroidJniObject getBackground();
		jstring getBridgeTag();
		jint getContentAction();
		jint getContentIcon();
		jint getContentIconGravity();
		jboolean getContentIntentAvailableOffline();
		jint getCustomContentHeight();
		jint getCustomSizePreset();
		jstring getDismissalId();
		QAndroidJniObject getDisplayIntent();
		jint getGravity();
		jboolean getHintAmbientBigPicture();
		jboolean getHintAvoidBackgroundClipping();
		jboolean getHintContentIntentLaunchesActivity();
		jboolean getHintHideIcon();
		jint getHintScreenTimeout();
		jboolean getHintShowBackgroundOnly();
		QAndroidJniObject getPages();
		jboolean getStartScrollBottom();
		QAndroidJniObject setBackground(android::graphics::Bitmap arg0);
		QAndroidJniObject setBridgeTag(jstring arg0);
		QAndroidJniObject setContentAction(jint arg0);
		QAndroidJniObject setContentIcon(jint arg0);
		QAndroidJniObject setContentIconGravity(jint arg0);
		QAndroidJniObject setContentIntentAvailableOffline(jboolean arg0);
		QAndroidJniObject setCustomContentHeight(jint arg0);
		QAndroidJniObject setCustomSizePreset(jint arg0);
		QAndroidJniObject setDismissalId(jstring arg0);
		QAndroidJniObject setDisplayIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setGravity(jint arg0);
		QAndroidJniObject setHintAmbientBigPicture(jboolean arg0);
		QAndroidJniObject setHintAvoidBackgroundClipping(jboolean arg0);
		QAndroidJniObject setHintContentIntentLaunchesActivity(jboolean arg0);
		QAndroidJniObject setHintHideIcon(jboolean arg0);
		QAndroidJniObject setHintScreenTimeout(jint arg0);
		QAndroidJniObject setHintShowBackgroundOnly(jboolean arg0);
		QAndroidJniObject setStartScrollBottom(jboolean arg0);
	};
} // namespace android::app

