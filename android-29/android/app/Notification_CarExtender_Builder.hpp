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
		
		Notification_CarExtender_Builder(QAndroidJniObject obj);
		// Constructors
		Notification_CarExtender_Builder(jstring &arg0);
		Notification_CarExtender_Builder(const QString &arg0);
		Notification_CarExtender_Builder() = default;
		
		// Methods
		QAndroidJniObject addMessage(jstring arg0);
		QAndroidJniObject addMessage(const QString &arg0);
		QAndroidJniObject build();
		QAndroidJniObject setLatestTimestamp(jlong arg0);
		QAndroidJniObject setReadPendingIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setReplyAction(android::app::PendingIntent arg0, android::app::RemoteInput arg1);
	};
} // namespace android::app

