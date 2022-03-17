#pragma once

#include "./Notification_Action.def.hpp"
#include "./Notification_Action_Builder.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./Notification_Action_WearableExtender.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_Action_WearableExtender::Notification_Action_WearableExtender()
		: JObject(
			"android.app.Notification$Action$WearableExtender",
			"()V"
		) {}
	inline Notification_Action_WearableExtender::Notification_Action_WearableExtender(android::app::Notification_Action arg0)
		: JObject(
			"android.app.Notification$Action$WearableExtender",
			"(Landroid/app/Notification$Action;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action$WearableExtender;"
		);
	}
	inline android::app::Notification_Action_Builder Notification_Action_WearableExtender::extend(android::app::Notification_Action_Builder arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Builder;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	inline JString Notification_Action_WearableExtender::getCancelLabel() const
	{
		return callObjectMethod(
			"getCancelLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Notification_Action_WearableExtender::getConfirmLabel() const
	{
		return callObjectMethod(
			"getConfirmLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean Notification_Action_WearableExtender::getHintDisplayActionInline() const
	{
		return callMethod<jboolean>(
			"getHintDisplayActionInline",
			"()Z"
		);
	}
	inline jboolean Notification_Action_WearableExtender::getHintLaunchesActivity() const
	{
		return callMethod<jboolean>(
			"getHintLaunchesActivity",
			"()Z"
		);
	}
	inline JString Notification_Action_WearableExtender::getInProgressLabel() const
	{
		return callObjectMethod(
			"getInProgressLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean Notification_Action_WearableExtender::isAvailableOffline() const
	{
		return callMethod<jboolean>(
			"isAvailableOffline",
			"()Z"
		);
	}
	inline android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setAvailableOffline(jboolean arg0) const
	{
		return callObjectMethod(
			"setAvailableOffline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	inline android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setCancelLabel(JString arg0) const
	{
		return callObjectMethod(
			"setCancelLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setConfirmLabel(JString arg0) const
	{
		return callObjectMethod(
			"setConfirmLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setHintDisplayActionInline(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintDisplayActionInline",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	inline android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setHintLaunchesActivity(jboolean arg0) const
	{
		return callObjectMethod(
			"setHintLaunchesActivity",
			"(Z)Landroid/app/Notification$Action$WearableExtender;",
			arg0
		);
	}
	inline android::app::Notification_Action_WearableExtender Notification_Action_WearableExtender::setInProgressLabel(JString arg0) const
	{
		return callObjectMethod(
			"setInProgressLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Action$WearableExtender;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers

