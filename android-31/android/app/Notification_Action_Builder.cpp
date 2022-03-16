#include "./Notification_Action.hpp"
#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./Notification_Action_Builder.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	Notification_Action_Builder::Notification_Action_Builder(android::app::Notification_Action arg0)
		: JObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/app/Notification$Action;)V",
			arg0.object()
		) {}
	Notification_Action_Builder::Notification_Action_Builder(android::graphics::drawable::Icon arg0, JString arg1, android::app::PendingIntent arg2)
		: JObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	Notification_Action_Builder::Notification_Action_Builder(jint arg0, JString arg1, android::app::PendingIntent arg2)
		: JObject(
			"android.app.Notification$Action$Builder",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	android::app::Notification_Action_Builder Notification_Action_Builder::addExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Action_Builder Notification_Action_Builder::addRemoteInput(android::app::RemoteInput arg0) const
	{
		return callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Action Notification_Action_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$Action;"
		);
	}
	android::app::Notification_Action_Builder Notification_Action_Builder::extend(JObject arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Extender;)Landroid/app/Notification$Action$Builder;",
			arg0.object()
		);
	}
	android::os::Bundle Notification_Action_Builder::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::app::Notification_Action_Builder Notification_Action_Builder::setAllowGeneratedReplies(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowGeneratedReplies",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
	android::app::Notification_Action_Builder Notification_Action_Builder::setAuthenticationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setAuthenticationRequired",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
	android::app::Notification_Action_Builder Notification_Action_Builder::setContextual(jboolean arg0) const
	{
		return callObjectMethod(
			"setContextual",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
	android::app::Notification_Action_Builder Notification_Action_Builder::setSemanticAction(jint arg0) const
	{
		return callObjectMethod(
			"setSemanticAction",
			"(I)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
} // namespace android::app

