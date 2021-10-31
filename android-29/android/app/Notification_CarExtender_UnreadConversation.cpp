#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "./Notification_CarExtender_UnreadConversation.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_CarExtender_UnreadConversation::Notification_CarExtender_UnreadConversation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jlong Notification_CarExtender_UnreadConversation::getLatestTimestamp()
	{
		return callMethod<jlong>(
			"getLatestTimestamp",
			"()J"
		);
	}
	jarray Notification_CarExtender_UnreadConversation::getMessages()
	{
		return callObjectMethod(
			"getMessages",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Notification_CarExtender_UnreadConversation::getParticipant()
	{
		return callObjectMethod(
			"getParticipant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Notification_CarExtender_UnreadConversation::getParticipants()
	{
		return callObjectMethod(
			"getParticipants",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getReadPendingIntent()
	{
		return callObjectMethod(
			"getReadPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getRemoteInput()
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getReplyPendingIntent()
	{
		return callObjectMethod(
			"getReplyPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
} // namespace android::app

