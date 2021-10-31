#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Person;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class Notification_MessagingStyle_Message : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_MessagingStyle_Message(QAndroidJniObject obj);
		// Constructors
		Notification_MessagingStyle_Message(jstring arg0, jlong arg1, android::app::Person arg2);
		Notification_MessagingStyle_Message(jstring arg0, jlong arg1, jstring arg2);
		Notification_MessagingStyle_Message() = default;
		
		// Methods
		jstring getDataMimeType();
		QAndroidJniObject getDataUri();
		QAndroidJniObject getExtras();
		jstring getSender();
		QAndroidJniObject getSenderPerson();
		jstring getText();
		jlong getTimestamp();
		QAndroidJniObject setData(jstring arg0, android::net::Uri arg1);
	};
} // namespace android::app

