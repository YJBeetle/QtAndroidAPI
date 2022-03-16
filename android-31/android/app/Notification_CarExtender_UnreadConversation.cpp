#include "../../JArray.hpp"
#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "../../JString.hpp"
#include "./Notification_CarExtender_UnreadConversation.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	jlong Notification_CarExtender_UnreadConversation::getLatestTimestamp() const
	{
		return callMethod<jlong>(
			"getLatestTimestamp",
			"()J"
		);
	}
	JArray Notification_CarExtender_UnreadConversation::getMessages() const
	{
		return callObjectMethod(
			"getMessages",
			"()[Ljava/lang/String;"
		);
	}
	JString Notification_CarExtender_UnreadConversation::getParticipant() const
	{
		return callObjectMethod(
			"getParticipant",
			"()Ljava/lang/String;"
		);
	}
	JArray Notification_CarExtender_UnreadConversation::getParticipants() const
	{
		return callObjectMethod(
			"getParticipants",
			"()[Ljava/lang/String;"
		);
	}
	android::app::PendingIntent Notification_CarExtender_UnreadConversation::getReadPendingIntent() const
	{
		return callObjectMethod(
			"getReadPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	android::app::RemoteInput Notification_CarExtender_UnreadConversation::getRemoteInput() const
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	android::app::PendingIntent Notification_CarExtender_UnreadConversation::getReplyPendingIntent() const
	{
		return callObjectMethod(
			"getReplyPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
} // namespace android::app

