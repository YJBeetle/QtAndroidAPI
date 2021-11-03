#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class RemoteInput;
}
class JString;

namespace android::app
{
	class Notification_CarExtender_UnreadConversation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_CarExtender_UnreadConversation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CarExtender_UnreadConversation(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getLatestTimestamp() const;
		JArray getMessages() const;
		JString getParticipant() const;
		JArray getParticipants() const;
		android::app::PendingIntent getReadPendingIntent() const;
		android::app::RemoteInput getRemoteInput() const;
		android::app::PendingIntent getReplyPendingIntent() const;
	};
} // namespace android::app

