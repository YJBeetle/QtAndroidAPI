#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_MessagingStyle_Message;
}
namespace android::app
{
	class Person;
}

namespace android::app
{
	class Notification_MessagingStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		static jint MAXIMUM_RETAINED_MESSAGES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_MessagingStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_MessagingStyle(QAndroidJniObject obj);
		
		// Constructors
		Notification_MessagingStyle(android::app::Person arg0);
		Notification_MessagingStyle(jstring arg0);
		
		// Methods
		android::app::Notification_MessagingStyle addHistoricMessage(android::app::Notification_MessagingStyle_Message arg0);
		android::app::Notification_MessagingStyle addMessage(android::app::Notification_MessagingStyle_Message arg0);
		android::app::Notification_MessagingStyle addMessage(jstring arg0, jlong arg1, android::app::Person arg2);
		android::app::Notification_MessagingStyle addMessage(jstring arg0, jlong arg1, jstring arg2);
		jstring getConversationTitle();
		__JniBaseClass getHistoricMessages();
		__JniBaseClass getMessages();
		android::app::Person getUser();
		jstring getUserDisplayName();
		jboolean isGroupConversation();
		android::app::Notification_MessagingStyle setConversationTitle(jstring arg0);
		android::app::Notification_MessagingStyle setGroupConversation(jboolean arg0);
	};
} // namespace android::app

