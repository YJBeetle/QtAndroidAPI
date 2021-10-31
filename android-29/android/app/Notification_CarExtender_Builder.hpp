#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::app
{
	class Notification_CarExtender_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_CarExtender_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CarExtender_Builder(QAndroidJniObject obj);
		
		// Constructors
		Notification_CarExtender_Builder(jstring arg0);
		
		// Methods
		QAndroidJniObject addMessage(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject setLatestTimestamp(jlong arg0);
		QAndroidJniObject setReadPendingIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setReplyAction(android::app::PendingIntent arg0, android::app::RemoteInput arg1);
	};
} // namespace android::app

