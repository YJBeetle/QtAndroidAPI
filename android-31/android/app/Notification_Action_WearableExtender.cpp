#include "./Notification_Action.hpp"
#include "./Notification_Action_Builder.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./Notification_Action_WearableExtender.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_Action_WearableExtender::Notification_Action_WearableExtender(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_Action_WearableExtender::Notification_Action_WearableExtender()
		: JObject(
			"android.app.Notification$Action$WearableExtender",
			"()V"
		) {}
	Notification_Action_WearableExtender::Notification_Action_WearableExtender(android::app::Notification_Action arg0)
		: JObject(
			"android.app.Notification$Action$WearableExtender",
			"(Landroid/app/Notification$Action;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action$WearableExtender;"
		);
	}
	android::app::Notification_Action_Builder Notification_Action_WearableExtender::extend(android::app::Notification_Action_Builder arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Builder;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	JString Notification_Action_WearableExtender::getCancelLabel() const
	{
		return callObjectMethod(
			"getCancelLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Notification_Action_WearableExtender::getConfirmLabel() const
	{
		return callObjectMethod(
			"getConfirmLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean Notification_Action_WearableExtender::getHintDisplayActionInline() const
	{
		return callMethod<jboolean>(
			"getHintDisplayActionInline",
			"()Z"
		);
	}
	jboolean Notification_Action_WearableExtender::getHintLaunchesActivity() const
	{
		return callMethod<jboolean>(
			"getHintLaunchesActivity",
			"()Z"
		);
	}
	JString Notification_Action_WearableExtender::getInProgressLabel() const
	{
		return callObjectMethod(
			"getInProgressLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean Notification_Action_WearableExtender::isAvailableOffline() const
	{
		return callMethod<jboolean>(
			"isAvailableOffline",
			"()Z"
		);
	}
	android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setAvailableOffline(jboolean arg0) const
	{
		return callObjectMethod(
			"setAvailableOffline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setCancelLabel(JString arg0) const
	{
		return callObjectMethod(
			"setCancelLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setConfirmLabel(JString arg0) const
	{
		return callObjectMethod(
			"setConfirmLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setHintDisplayActionInline(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintDisplayActionInline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setHintLaunchesActivity(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintLaunchesActivity",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setInProgressLabel(JString arg0) const
	{
		return callObjectMethod(
			"setInProgressLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

