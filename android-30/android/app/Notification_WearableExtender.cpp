#include "./Notification.hpp"
#include "./Notification_Action.hpp"
#include "./Notification_Builder.hpp"
#include "./PendingIntent.hpp"
#include "../graphics/Bitmap.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Notification_WearableExtender.hpp"

namespace android::app
{
	// Fields
	jint Notification_WearableExtender::SCREEN_TIMEOUT_LONG()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SCREEN_TIMEOUT_LONG"
		);
	}
	jint Notification_WearableExtender::SCREEN_TIMEOUT_SHORT()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SCREEN_TIMEOUT_SHORT"
		);
	}
	jint Notification_WearableExtender::SIZE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_DEFAULT"
		);
	}
	jint Notification_WearableExtender::SIZE_FULL_SCREEN()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_FULL_SCREEN"
		);
	}
	jint Notification_WearableExtender::SIZE_LARGE()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_LARGE"
		);
	}
	jint Notification_WearableExtender::SIZE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_MEDIUM"
		);
	}
	jint Notification_WearableExtender::SIZE_SMALL()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_SMALL"
		);
	}
	jint Notification_WearableExtender::SIZE_XSMALL()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_XSMALL"
		);
	}
	jint Notification_WearableExtender::UNSET_ACTION_INDEX()
	{
		return getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"UNSET_ACTION_INDEX"
		);
	}
	
	// QAndroidJniObject forward
	Notification_WearableExtender::Notification_WearableExtender(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_WearableExtender::Notification_WearableExtender()
		: JObject(
			"android.app.Notification$WearableExtender",
			"()V"
		) {}
	Notification_WearableExtender::Notification_WearableExtender(android::app::Notification arg0)
		: JObject(
			"android.app.Notification$WearableExtender",
			"(Landroid/app/Notification;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::Notification_WearableExtender Notification_WearableExtender::addAction(android::app::Notification_Action arg0) const
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/app/Notification$Action;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::addActions(JObject arg0) const
	{
		return callObjectMethod(
			"addActions",
			"(Ljava/util/List;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::addPage(android::app::Notification arg0) const
	{
		return callObjectMethod(
			"addPage",
			"(Landroid/app/Notification;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::addPages(JObject arg0) const
	{
		return callObjectMethod(
			"addPages",
			"(Ljava/util/List;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::clearActions() const
	{
		return callObjectMethod(
			"clearActions",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::clearPages() const
	{
		return callObjectMethod(
			"clearPages",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	android::app::Notification_Builder Notification_WearableExtender::extend(android::app::Notification_Builder arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	JObject Notification_WearableExtender::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	android::graphics::Bitmap Notification_WearableExtender::getBackground() const
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/Bitmap;"
		);
	}
	JString Notification_WearableExtender::getBridgeTag() const
	{
		return callObjectMethod(
			"getBridgeTag",
			"()Ljava/lang/String;"
		);
	}
	jint Notification_WearableExtender::getContentAction() const
	{
		return callMethod<jint>(
			"getContentAction",
			"()I"
		);
	}
	jint Notification_WearableExtender::getContentIcon() const
	{
		return callMethod<jint>(
			"getContentIcon",
			"()I"
		);
	}
	jint Notification_WearableExtender::getContentIconGravity() const
	{
		return callMethod<jint>(
			"getContentIconGravity",
			"()I"
		);
	}
	jboolean Notification_WearableExtender::getContentIntentAvailableOffline() const
	{
		return callMethod<jboolean>(
			"getContentIntentAvailableOffline",
			"()Z"
		);
	}
	jint Notification_WearableExtender::getCustomContentHeight() const
	{
		return callMethod<jint>(
			"getCustomContentHeight",
			"()I"
		);
	}
	jint Notification_WearableExtender::getCustomSizePreset() const
	{
		return callMethod<jint>(
			"getCustomSizePreset",
			"()I"
		);
	}
	JString Notification_WearableExtender::getDismissalId() const
	{
		return callObjectMethod(
			"getDismissalId",
			"()Ljava/lang/String;"
		);
	}
	android::app::PendingIntent Notification_WearableExtender::getDisplayIntent() const
	{
		return callObjectMethod(
			"getDisplayIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jint Notification_WearableExtender::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jboolean Notification_WearableExtender::getHintAmbientBigPicture() const
	{
		return callMethod<jboolean>(
			"getHintAmbientBigPicture",
			"()Z"
		);
	}
	jboolean Notification_WearableExtender::getHintAvoidBackgroundClipping() const
	{
		return callMethod<jboolean>(
			"getHintAvoidBackgroundClipping",
			"()Z"
		);
	}
	jboolean Notification_WearableExtender::getHintContentIntentLaunchesActivity() const
	{
		return callMethod<jboolean>(
			"getHintContentIntentLaunchesActivity",
			"()Z"
		);
	}
	jboolean Notification_WearableExtender::getHintHideIcon() const
	{
		return callMethod<jboolean>(
			"getHintHideIcon",
			"()Z"
		);
	}
	jint Notification_WearableExtender::getHintScreenTimeout() const
	{
		return callMethod<jint>(
			"getHintScreenTimeout",
			"()I"
		);
	}
	jboolean Notification_WearableExtender::getHintShowBackgroundOnly() const
	{
		return callMethod<jboolean>(
			"getHintShowBackgroundOnly",
			"()Z"
		);
	}
	JObject Notification_WearableExtender::getPages() const
	{
		return callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	jboolean Notification_WearableExtender::getStartScrollBottom() const
	{
		return callMethod<jboolean>(
			"getStartScrollBottom",
			"()Z"
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setBackground(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setBackground",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setBridgeTag(JString arg0) const
	{
		return callObjectMethod(
			"setBridgeTag",
			"(Ljava/lang/String;)Landroid/app/Notification$WearableExtender;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentAction(jint arg0) const
	{
		return callObjectMethod(
			"setContentAction",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentIcon(jint arg0) const
	{
		return callObjectMethod(
			"setContentIcon",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentIconGravity(jint arg0) const
	{
		return callObjectMethod(
			"setContentIconGravity",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentIntentAvailableOffline(jboolean arg0) const
	{
		return callObjectMethod(
			"setContentIntentAvailableOffline",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setCustomContentHeight(jint arg0) const
	{
		return callObjectMethod(
			"setCustomContentHeight",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setCustomSizePreset(jint arg0) const
	{
		return callObjectMethod(
			"setCustomSizePreset",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setDismissalId(JString arg0) const
	{
		return callObjectMethod(
			"setDismissalId",
			"(Ljava/lang/String;)Landroid/app/Notification$WearableExtender;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setDisplayIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setDisplayIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setGravity(jint arg0) const
	{
		return callObjectMethod(
			"setGravity",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintAmbientBigPicture(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintAmbientBigPicture",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintAvoidBackgroundClipping(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintAvoidBackgroundClipping",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintContentIntentLaunchesActivity(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintContentIntentLaunchesActivity",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintHideIcon(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintHideIcon",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintScreenTimeout(jint arg0) const
	{
		return callObjectMethod(
			"setHintScreenTimeout",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintShowBackgroundOnly(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintShowBackgroundOnly",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setStartScrollBottom(jboolean arg0) const
	{
		return callObjectMethod(
			"setStartScrollBottom",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
} // namespace android::app

