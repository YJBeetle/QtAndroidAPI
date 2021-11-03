#pragma once

#include "../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_MessagingStyle_Message(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_MessagingStyle_Message(QJniObject obj);
		
		// Constructors
		Notification_MessagingStyle_Message(JString arg0, jlong arg1, android::app::Person arg2);
		Notification_MessagingStyle_Message(JString arg0, jlong arg1, JString arg2);
		
		// Methods
		JString getDataMimeType() const;
		android::net::Uri getDataUri() const;
		android::os::Bundle getExtras() const;
		JString getSender() const;
		android::app::Person getSenderPerson() const;
		JString getText() const;
		jlong getTimestamp() const;
		android::app::Notification_MessagingStyle_Message setData(JString arg0, android::net::Uri arg1) const;
	};
} // namespace android::app

