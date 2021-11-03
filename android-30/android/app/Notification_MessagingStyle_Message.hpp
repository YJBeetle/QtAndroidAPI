#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;
class JString;

namespace android::app
{
	class Notification_MessagingStyle_Message : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_MessagingStyle_Message(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_MessagingStyle_Message(QAndroidJniObject obj);
		
		// Constructors
		Notification_MessagingStyle_Message(JString arg0, jlong arg1, android::app::Person arg2);
		Notification_MessagingStyle_Message(JString arg0, jlong arg1, JString arg2);
		
		// Methods
		static JObject getMessagesFromBundleArray(JArray arg0);
		JString getDataMimeType();
		android::net::Uri getDataUri();
		android::os::Bundle getExtras();
		JString getSender();
		android::app::Person getSenderPerson();
		JString getText();
		jlong getTimestamp();
		android::app::Notification_MessagingStyle_Message setData(JString arg0, android::net::Uri arg1);
	};
} // namespace android::app

