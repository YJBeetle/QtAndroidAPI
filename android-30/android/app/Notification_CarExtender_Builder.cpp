#include "./Notification_CarExtender_UnreadConversation.hpp"
#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "../../JString.hpp"
#include "./Notification_CarExtender_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_CarExtender_Builder::Notification_CarExtender_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_CarExtender_Builder::Notification_CarExtender_Builder(JString arg0)
		: JObject(
			"android.app.Notification$CarExtender$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::addMessage(JString arg0) const
	{
		return callObjectMethod(
			"addMessage",
			"(Ljava/lang/String;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_CarExtender_UnreadConversation Notification_CarExtender_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setLatestTimestamp(jlong arg0) const
	{
		return callObjectMethod(
			"setLatestTimestamp",
			"(J)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setReadPendingIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setReadPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setReplyAction(android::app::PendingIntent arg0, android::app::RemoteInput arg1) const
	{
		return callObjectMethod(
			"setReplyAction",
			"(Landroid/app/PendingIntent;Landroid/app/RemoteInput;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app

