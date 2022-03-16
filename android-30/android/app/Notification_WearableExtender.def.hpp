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
class JObject;
class JString;

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_WearableExtender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_WearableExtender(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Notification_WearableExtender();
		Notification_WearableExtender(android::app::Notification arg0);
		
		// Methods
		android::app::Notification_WearableExtender addAction(android::app::Notification_Action arg0) const;
		android::app::Notification_WearableExtender addActions(JObject arg0) const;
		android::app::Notification_WearableExtender addPage(android::app::Notification arg0) const;
		android::app::Notification_WearableExtender addPages(JObject arg0) const;
		android::app::Notification_WearableExtender clearActions() const;
		android::app::Notification_WearableExtender clearPages() const;
		android::app::Notification_WearableExtender clone() const;
		android::app::Notification_Builder extend(android::app::Notification_Builder arg0) const;
		JObject getActions() const;
		android::graphics::Bitmap getBackground() const;
		JString getBridgeTag() const;
		jint getContentAction() const;
		jint getContentIcon() const;
		jint getContentIconGravity() const;
		jboolean getContentIntentAvailableOffline() const;
		jint getCustomContentHeight() const;
		jint getCustomSizePreset() const;
		JString getDismissalId() const;
		android::app::PendingIntent getDisplayIntent() const;
		jint getGravity() const;
		jboolean getHintAmbientBigPicture() const;
		jboolean getHintAvoidBackgroundClipping() const;
		jboolean getHintContentIntentLaunchesActivity() const;
		jboolean getHintHideIcon() const;
		jint getHintScreenTimeout() const;
		jboolean getHintShowBackgroundOnly() const;
		JObject getPages() const;
		jboolean getStartScrollBottom() const;
		android::app::Notification_WearableExtender setBackground(android::graphics::Bitmap arg0) const;
		android::app::Notification_WearableExtender setBridgeTag(JString arg0) const;
		android::app::Notification_WearableExtender setContentAction(jint arg0) const;
		android::app::Notification_WearableExtender setContentIcon(jint arg0) const;
		android::app::Notification_WearableExtender setContentIconGravity(jint arg0) const;
		android::app::Notification_WearableExtender setContentIntentAvailableOffline(jboolean arg0) const;
		android::app::Notification_WearableExtender setCustomContentHeight(jint arg0) const;
		android::app::Notification_WearableExtender setCustomSizePreset(jint arg0) const;
		android::app::Notification_WearableExtender setDismissalId(JString arg0) const;
		android::app::Notification_WearableExtender setDisplayIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_WearableExtender setGravity(jint arg0) const;
		android::app::Notification_WearableExtender setHintAmbientBigPicture(jboolean arg0) const;
		android::app::Notification_WearableExtender setHintAvoidBackgroundClipping(jboolean arg0) const;
		android::app::Notification_WearableExtender setHintContentIntentLaunchesActivity(jboolean arg0) const;
		android::app::Notification_WearableExtender setHintHideIcon(jboolean arg0) const;
		android::app::Notification_WearableExtender setHintScreenTimeout(jint arg0) const;
		android::app::Notification_WearableExtender setHintShowBackgroundOnly(jboolean arg0) const;
		android::app::Notification_WearableExtender setStartScrollBottom(jboolean arg0) const;
	};
} // namespace android::app

