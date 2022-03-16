#pragma once

#include "./Notification_CarExtender_UnreadConversation.def.hpp"
#include "./PendingIntent.def.hpp"
#include "./RemoteInput.def.hpp"
#include "../../JString.hpp"
#include "./Notification_CarExtender_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_CarExtender_Builder::Notification_CarExtender_Builder(JString arg0)
		: JObject(
			"android.app.Notification$CarExtender$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::addMessage(JString arg0) const
	{
		return callObjectMethod(
			"addMessage",
			"(Ljava/lang/String;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_CarExtender_UnreadConversation Notification_CarExtender_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	inline android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setLatestTimestamp(jlong arg0) const
	{
		return callObjectMethod(
			"setLatestTimestamp",
			"(J)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
	inline android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setReadPendingIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setReadPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object()
		);
	}
	inline android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setReplyAction(android::app::PendingIntent arg0, android::app::RemoteInput arg1) const
	{
		return callObjectMethod(
			"setReplyAction",
			"(Landroid/app/PendingIntent;Landroid/app/RemoteInput;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app

// Base class headers

