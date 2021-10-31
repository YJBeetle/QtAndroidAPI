#include "./Notification.hpp"
#include "./Notification_Action.hpp"
#include "./Notification_Builder.hpp"
#include "./PendingIntent.hpp"
#include "../graphics/Bitmap.hpp"
#include "./Notification_WearableExtender.hpp"

namespace android::app
{
	// Fields
	jint Notification_WearableExtender::SCREEN_TIMEOUT_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SCREEN_TIMEOUT_LONG"
		);
	}
	jint Notification_WearableExtender::SCREEN_TIMEOUT_SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SCREEN_TIMEOUT_SHORT"
		);
	}
	jint Notification_WearableExtender::SIZE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_DEFAULT"
		);
	}
	jint Notification_WearableExtender::SIZE_FULL_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_FULL_SCREEN"
		);
	}
	jint Notification_WearableExtender::SIZE_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_LARGE"
		);
	}
	jint Notification_WearableExtender::SIZE_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_MEDIUM"
		);
	}
	jint Notification_WearableExtender::SIZE_SMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_SMALL"
		);
	}
	jint Notification_WearableExtender::SIZE_XSMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_XSMALL"
		);
	}
	jint Notification_WearableExtender::UNSET_ACTION_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"UNSET_ACTION_INDEX"
		);
	}
	
	// QAndroidJniObject forward
	Notification_WearableExtender::Notification_WearableExtender(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_WearableExtender::Notification_WearableExtender()
		: __JniBaseClass(
			"android.app.Notification$WearableExtender",
			"()V"
		) {}
	Notification_WearableExtender::Notification_WearableExtender(android::app::Notification arg0)
		: __JniBaseClass(
			"android.app.Notification$WearableExtender",
			"(Landroid/app/Notification;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::Notification_WearableExtender Notification_WearableExtender::addAction(android::app::Notification_Action arg0)
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/app/Notification$Action;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::addActions(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addActions",
			"(Ljava/util/List;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::addPage(android::app::Notification arg0)
	{
		return callObjectMethod(
			"addPage",
			"(Landroid/app/Notification;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::addPages(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addPages",
			"(Ljava/util/List;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::clearActions()
	{
		return callObjectMethod(
			"clearActions",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::clearPages()
	{
		return callObjectMethod(
			"clearPages",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	android::app::Notification_Builder Notification_WearableExtender::extend(android::app::Notification_Builder arg0)
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	__JniBaseClass Notification_WearableExtender::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	android::graphics::Bitmap Notification_WearableExtender::getBackground()
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jstring Notification_WearableExtender::getBridgeTag()
	{
		return callObjectMethod(
			"getBridgeTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification_WearableExtender::getContentAction()
	{
		return callMethod<jint>(
			"getContentAction",
			"()I"
		);
	}
	jint Notification_WearableExtender::getContentIcon()
	{
		return callMethod<jint>(
			"getContentIcon",
			"()I"
		);
	}
	jint Notification_WearableExtender::getContentIconGravity()
	{
		return callMethod<jint>(
			"getContentIconGravity",
			"()I"
		);
	}
	jboolean Notification_WearableExtender::getContentIntentAvailableOffline()
	{
		return callMethod<jboolean>(
			"getContentIntentAvailableOffline",
			"()Z"
		);
	}
	jint Notification_WearableExtender::getCustomContentHeight()
	{
		return callMethod<jint>(
			"getCustomContentHeight",
			"()I"
		);
	}
	jint Notification_WearableExtender::getCustomSizePreset()
	{
		return callMethod<jint>(
			"getCustomSizePreset",
			"()I"
		);
	}
	jstring Notification_WearableExtender::getDismissalId()
	{
		return callObjectMethod(
			"getDismissalId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::app::PendingIntent Notification_WearableExtender::getDisplayIntent()
	{
		return callObjectMethod(
			"getDisplayIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jint Notification_WearableExtender::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jboolean Notification_WearableExtender::getHintAmbientBigPicture()
	{
		return callMethod<jboolean>(
			"getHintAmbientBigPicture",
			"()Z"
		);
	}
	jboolean Notification_WearableExtender::getHintAvoidBackgroundClipping()
	{
		return callMethod<jboolean>(
			"getHintAvoidBackgroundClipping",
			"()Z"
		);
	}
	jboolean Notification_WearableExtender::getHintContentIntentLaunchesActivity()
	{
		return callMethod<jboolean>(
			"getHintContentIntentLaunchesActivity",
			"()Z"
		);
	}
	jboolean Notification_WearableExtender::getHintHideIcon()
	{
		return callMethod<jboolean>(
			"getHintHideIcon",
			"()Z"
		);
	}
	jint Notification_WearableExtender::getHintScreenTimeout()
	{
		return callMethod<jint>(
			"getHintScreenTimeout",
			"()I"
		);
	}
	jboolean Notification_WearableExtender::getHintShowBackgroundOnly()
	{
		return callMethod<jboolean>(
			"getHintShowBackgroundOnly",
			"()Z"
		);
	}
	__JniBaseClass Notification_WearableExtender::getPages()
	{
		return callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	jboolean Notification_WearableExtender::getStartScrollBottom()
	{
		return callMethod<jboolean>(
			"getStartScrollBottom",
			"()Z"
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setBackground(android::graphics::Bitmap arg0)
	{
		return callObjectMethod(
			"setBackground",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setBridgeTag(jstring arg0)
	{
		return callObjectMethod(
			"setBridgeTag",
			"(Ljava/lang/String;)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentAction(jint arg0)
	{
		return callObjectMethod(
			"setContentAction",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentIcon(jint arg0)
	{
		return callObjectMethod(
			"setContentIcon",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentIconGravity(jint arg0)
	{
		return callObjectMethod(
			"setContentIconGravity",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setContentIntentAvailableOffline(jboolean arg0)
	{
		return callObjectMethod(
			"setContentIntentAvailableOffline",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setCustomContentHeight(jint arg0)
	{
		return callObjectMethod(
			"setCustomContentHeight",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setCustomSizePreset(jint arg0)
	{
		return callObjectMethod(
			"setCustomSizePreset",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setDismissalId(jstring arg0)
	{
		return callObjectMethod(
			"setDismissalId",
			"(Ljava/lang/String;)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setDisplayIntent(android::app::PendingIntent arg0)
	{
		return callObjectMethod(
			"setDisplayIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$WearableExtender;",
			arg0.object()
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setGravity(jint arg0)
	{
		return callObjectMethod(
			"setGravity",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintAmbientBigPicture(jboolean arg0)
	{
		return callObjectMethod(
			"setHintAmbientBigPicture",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintAvoidBackgroundClipping(jboolean arg0)
	{
		return callObjectMethod(
			"setHintAvoidBackgroundClipping",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintContentIntentLaunchesActivity(jboolean arg0)
	{
		return callObjectMethod(
			"setHintContentIntentLaunchesActivity",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintHideIcon(jboolean arg0)
	{
		return callObjectMethod(
			"setHintHideIcon",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintScreenTimeout(jint arg0)
	{
		return callObjectMethod(
			"setHintScreenTimeout",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setHintShowBackgroundOnly(jboolean arg0)
	{
		return callObjectMethod(
			"setHintShowBackgroundOnly",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_WearableExtender Notification_WearableExtender::setStartScrollBottom(jboolean arg0)
	{
		return callObjectMethod(
			"setStartScrollBottom",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
} // namespace android::app

