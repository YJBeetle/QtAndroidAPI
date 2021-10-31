#include "./Notification_CarExtender_UnreadConversation.hpp"
#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "./Notification_CarExtender_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_CarExtender_Builder::Notification_CarExtender_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_CarExtender_Builder::Notification_CarExtender_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.Notification$CarExtender$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::addMessage(jstring arg0)
	{
		return callObjectMethod(
			"addMessage",
			"(Ljava/lang/String;)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
	android::app::Notification_CarExtender_UnreadConversation Notification_CarExtender_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setLatestTimestamp(jlong arg0)
	{
		return callObjectMethod(
			"setLatestTimestamp",
			"(J)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setReadPendingIntent(android::app::PendingIntent arg0)
	{
		return callObjectMethod(
			"setReadPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_CarExtender_Builder Notification_CarExtender_Builder::setReplyAction(android::app::PendingIntent arg0, android::app::RemoteInput arg1)
	{
		return callObjectMethod(
			"setReplyAction",
			"(Landroid/app/PendingIntent;Landroid/app/RemoteInput;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app

