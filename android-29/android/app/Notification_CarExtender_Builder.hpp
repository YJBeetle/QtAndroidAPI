#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Notification_CarExtender_UnreadConversation;
}
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
	class Notification_CarExtender_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_CarExtender_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CarExtender_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Notification_CarExtender_Builder(JString arg0);
		
		// Methods
		android::app::Notification_CarExtender_Builder addMessage(JString arg0) const;
		android::app::Notification_CarExtender_UnreadConversation build() const;
		android::app::Notification_CarExtender_Builder setLatestTimestamp(jlong arg0) const;
		android::app::Notification_CarExtender_Builder setReadPendingIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_CarExtender_Builder setReplyAction(android::app::PendingIntent arg0, android::app::RemoteInput arg1) const;
	};
} // namespace android::app

