#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class RemoteInput;
}

namespace android::app
{
	class Notification_CarExtender_UnreadConversation : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_CarExtender_UnreadConversation(QAndroidJniObject obj);
		// Constructors
		Notification_CarExtender_UnreadConversation() = default;
		
		// Methods
		jlong getLatestTimestamp();
		jarray getMessages();
		jstring getParticipant();
		jarray getParticipants();
		QAndroidJniObject getReadPendingIntent();
		QAndroidJniObject getRemoteInput();
		QAndroidJniObject getReplyPendingIntent();
	};
} // namespace android::app

