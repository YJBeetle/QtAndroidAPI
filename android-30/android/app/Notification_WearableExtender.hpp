#pragma once

#include "../../JObject.hpp"

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
	class Notification_WearableExtender : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_WearableExtender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_WearableExtender(QAndroidJniObject obj);
		
		// Constructors
		Notification_WearableExtender();
		Notification_WearableExtender(android::app::Notification arg0);
		
		// Methods
		android::app::Notification_WearableExtender addAction(android::app::Notification_Action arg0);
		android::app::Notification_WearableExtender addActions(JObject arg0);
		android::app::Notification_WearableExtender addPage(android::app::Notification arg0);
		android::app::Notification_WearableExtender addPages(JObject arg0);
		android::app::Notification_WearableExtender clearActions();
		android::app::Notification_WearableExtender clearPages();
		android::app::Notification_WearableExtender clone();
		android::app::Notification_Builder extend(android::app::Notification_Builder arg0);
		JObject getActions();
		android::graphics::Bitmap getBackground();
		jstring getBridgeTag();
		jint getContentAction();
		jint getContentIcon();
		jint getContentIconGravity();
		jboolean getContentIntentAvailableOffline();
		jint getCustomContentHeight();
		jint getCustomSizePreset();
		jstring getDismissalId();
		android::app::PendingIntent getDisplayIntent();
		jint getGravity();
		jboolean getHintAmbientBigPicture();
		jboolean getHintAvoidBackgroundClipping();
		jboolean getHintContentIntentLaunchesActivity();
		jboolean getHintHideIcon();
		jint getHintScreenTimeout();
		jboolean getHintShowBackgroundOnly();
		JObject getPages();
		jboolean getStartScrollBottom();
		android::app::Notification_WearableExtender setBackground(android::graphics::Bitmap arg0);
		android::app::Notification_WearableExtender setBridgeTag(jstring arg0);
		android::app::Notification_WearableExtender setContentAction(jint arg0);
		android::app::Notification_WearableExtender setContentIcon(jint arg0);
		android::app::Notification_WearableExtender setContentIconGravity(jint arg0);
		android::app::Notification_WearableExtender setContentIntentAvailableOffline(jboolean arg0);
		android::app::Notification_WearableExtender setCustomContentHeight(jint arg0);
		android::app::Notification_WearableExtender setCustomSizePreset(jint arg0);
		android::app::Notification_WearableExtender setDismissalId(jstring arg0);
		android::app::Notification_WearableExtender setDisplayIntent(android::app::PendingIntent arg0);
		android::app::Notification_WearableExtender setGravity(jint arg0);
		android::app::Notification_WearableExtender setHintAmbientBigPicture(jboolean arg0);
		android::app::Notification_WearableExtender setHintAvoidBackgroundClipping(jboolean arg0);
		android::app::Notification_WearableExtender setHintContentIntentLaunchesActivity(jboolean arg0);
		android::app::Notification_WearableExtender setHintHideIcon(jboolean arg0);
		android::app::Notification_WearableExtender setHintScreenTimeout(jint arg0);
		android::app::Notification_WearableExtender setHintShowBackgroundOnly(jboolean arg0);
		android::app::Notification_WearableExtender setStartScrollBottom(jboolean arg0);
	};
} // namespace android::app

