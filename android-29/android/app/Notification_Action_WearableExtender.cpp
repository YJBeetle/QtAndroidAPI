#include "./Notification_Action.hpp"
#include "./Notification_Action_Builder.hpp"
#include "./Notification_Action_WearableExtender.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_Action_WearableExtender::Notification_Action_WearableExtender(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_Action_WearableExtender::Notification_Action_WearableExtender()
		: __JniBaseClass(
			"android.app.Notification$Action$WearableExtender",
			"()V"
		) {}
	Notification_Action_WearableExtender::Notification_Action_WearableExtender(android::app::Notification_Action arg0)
		: __JniBaseClass(
			"android.app.Notification$Action$WearableExtender",
			"(Landroid/app/Notification$Action;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject Notification_Action_WearableExtender::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action$WearableExtender;"
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::extend(android::app::Notification_Action_Builder arg0)
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Builder;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	jstring Notification_Action_WearableExtender::getCancelLabel()
	{
		return callObjectMethod(
			"getCancelLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Notification_Action_WearableExtender::getConfirmLabel()
	{
		return callObjectMethod(
			"getConfirmLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Notification_Action_WearableExtender::getHintDisplayActionInline()
	{
		return callMethod<jboolean>(
			"getHintDisplayActionInline",
			"()Z"
		);
	}
	jboolean Notification_Action_WearableExtender::getHintLaunchesActivity()
	{
		return callMethod<jboolean>(
			"getHintLaunchesActivity",
			"()Z"
		);
	}
	jstring Notification_Action_WearableExtender::getInProgressLabel()
	{
		return callObjectMethod(
			"getInProgressLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Notification_Action_WearableExtender::isAvailableOffline()
	{
		return callMethod<jboolean>(
			"isAvailableOffline",
			"()Z"
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setAvailableOffline(jboolean arg0)
	{
		return callObjectMethod(
			"setAvailableOffline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setCancelLabel(jstring arg0)
	{
		return callObjectMethod(
			"setCancelLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setConfirmLabel(jstring arg0)
	{
		return callObjectMethod(
			"setConfirmLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setHintDisplayActionInline(jboolean arg0)
	{
		return callObjectMethod(
			"setHintDisplayActionInline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setHintLaunchesActivity(jboolean arg0)
	{
		return callObjectMethod(
			"setHintLaunchesActivity",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_WearableExtender::setInProgressLabel(jstring arg0)
	{
		return callObjectMethod(
			"setInProgressLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
} // namespace android::app

