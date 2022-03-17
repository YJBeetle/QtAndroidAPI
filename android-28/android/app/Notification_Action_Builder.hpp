#pragma once

#include "./Notification_Action.def.hpp"
#include "./PendingIntent.def.hpp"
#include "./RemoteInput.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./Notification_Action_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_Action_Builder::Notification_Action_Builder(android::app::Notification_Action arg0)
		: JObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/app/Notification$Action;)V",
			arg0.object()
		) {}
	inline Notification_Action_Builder::Notification_Action_Builder(android::graphics::drawable::Icon arg0, JString arg1, android::app::PendingIntent arg2)
		: JObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline Notification_Action_Builder::Notification_Action_Builder(jint arg0, JString arg1, android::app::PendingIntent arg2)
		: JObject(
			"android.app.Notification$Action$Builder",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::app::Notification_Action_Builder Notification_Action_Builder::addExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	inline android::app::Notification_Action_Builder Notification_Action_Builder::addRemoteInput(android::app::RemoteInput arg0) const
	{
		return callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	inline android::app::Notification_Action Notification_Action_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$Action;"
		);
	}
	inline android::app::Notification_Action_Builder Notification_Action_Builder::extend(JObject arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Extender;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	inline android::os::Bundle Notification_Action_Builder::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::app::Notification_Action_Builder Notification_Action_Builder::setAllowGeneratedReplies(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowGeneratedReplies",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
	inline android::app::Notification_Action_Builder Notification_Action_Builder::setSemanticAction(jint arg0) const
	{
		return callObjectMethod(
			"setSemanticAction",
			"(I)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
