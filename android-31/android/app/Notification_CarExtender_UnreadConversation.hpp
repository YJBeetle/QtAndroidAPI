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
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_CarExtender_UnreadConversation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CarExtender_UnreadConversation(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getLatestTimestamp();
		jarray getMessages();
		jstring getParticipant();
		jarray getParticipants();
		android::app::PendingIntent getReadPendingIntent();
		android::app::RemoteInput getRemoteInput();
		android::app::PendingIntent getReplyPendingIntent();
	};
} // namespace android::app

