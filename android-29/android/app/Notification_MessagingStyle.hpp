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
		QAndroidJniObject addHistoricMessage(android::app::Notification_MessagingStyle_Message arg0);
		QAndroidJniObject addMessage(android::app::Notification_MessagingStyle_Message arg0);
		QAndroidJniObject addMessage(jstring arg0, jlong arg1, android::app::Person arg2);
		QAndroidJniObject addMessage(jstring arg0, jlong arg1, jstring arg2);
		jstring getConversationTitle();
		QAndroidJniObject getHistoricMessages();
		QAndroidJniObject getMessages();
		QAndroidJniObject getUser();
		jstring getUserDisplayName();
		jboolean isGroupConversation();
		QAndroidJniObject setConversationTitle(jstring arg0);
		QAndroidJniObject setGroupConversation(jboolean arg0);
	};
} // namespace android::app

