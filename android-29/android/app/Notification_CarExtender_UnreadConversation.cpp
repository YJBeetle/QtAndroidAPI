#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "./Notification_CarExtender_UnreadConversation.hpp"

namespace android::app
{
	// Fields
	
	Notification_CarExtender_UnreadConversation::Notification_CarExtender_UnreadConversation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong Notification_CarExtender_UnreadConversation::getLatestTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getLatestTimestamp",
			"()J"
		);
	}
	jarray Notification_CarExtender_UnreadConversation::getMessages()
	{
		return __thiz.callObjectMethod(
			"getMessages",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring Notification_CarExtender_UnreadConversation::getParticipant()
	{
		return __thiz.callObjectMethod(
			"getParticipant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Notification_CarExtender_UnreadConversation::getParticipants()
	{
		return __thiz.callObjectMethod(
			"getParticipants",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getReadPendingIntent()
	{
		return __thiz.callObjectMethod(
			"getReadPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getRemoteInput()
	{
		return __thiz.callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	QAndroidJniObject Notification_CarExtender_UnreadConversation::getReplyPendingIntent()
	{
		return __thiz.callObjectMethod(
			"getReplyPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
} // namespace android::app

