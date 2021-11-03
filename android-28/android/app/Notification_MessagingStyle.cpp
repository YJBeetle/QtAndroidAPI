#include "./Notification_MessagingStyle_Message.hpp"
#include "./Person.hpp"
#include "../../JString.hpp"
#include "./Notification_MessagingStyle.hpp"

namespace android::app
{
	// Fields
	jint Notification_MessagingStyle::MAXIMUM_RETAINED_MESSAGES()
	{
		return getStaticField<jint>(
			"android.app.Notification$MessagingStyle",
			"MAXIMUM_RETAINED_MESSAGES"
		);
	}
	
	// QAndroidJniObject forward
	Notification_MessagingStyle::Notification_MessagingStyle(QAndroidJniObject obj) : android::app::Notification_Style(obj) {}
	
	// Constructors
	Notification_MessagingStyle::Notification_MessagingStyle(android::app::Person arg0)
		: android::app::Notification_Style(
			"android.app.Notification$MessagingStyle",
			"(Landroid/app/Person;)V",
			arg0.object()
		) {}
	Notification_MessagingStyle::Notification_MessagingStyle(JString arg0)
		: android::app::Notification_Style(
			"android.app.Notification$MessagingStyle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::Notification_MessagingStyle Notification_MessagingStyle::addHistoricMessage(android::app::Notification_MessagingStyle_Message arg0)
	{
		return callObjectMethod(
			"addHistoricMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.object()
		);
	}
	android::app::Notification_MessagingStyle Notification_MessagingStyle::addMessage(android::app::Notification_MessagingStyle_Message arg0)
	{
		return callObjectMethod(
			"addMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.object()
		);
	}
	android::app::Notification_MessagingStyle Notification_MessagingStyle::addMessage(JString arg0, jlong arg1, android::app::Person arg2)
	{
		return callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)Landroid/app/Notification$MessagingStyle;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	android::app::Notification_MessagingStyle Notification_MessagingStyle::addMessage(JString arg0, jlong arg1, JString arg2)
	{
		return callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	JString Notification_MessagingStyle::getConversationTitle()
	{
		return callObjectMethod(
			"getConversationTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject Notification_MessagingStyle::getHistoricMessages()
	{
		return callObjectMethod(
			"getHistoricMessages",
			"()Ljava/util/List;"
		);
	}
	JObject Notification_MessagingStyle::getMessages()
	{
		return callObjectMethod(
			"getMessages",
			"()Ljava/util/List;"
		);
	}
	android::app::Person Notification_MessagingStyle::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/app/Person;"
		);
	}
	JString Notification_MessagingStyle::getUserDisplayName()
	{
		return callObjectMethod(
			"getUserDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean Notification_MessagingStyle::isGroupConversation()
	{
		return callMethod<jboolean>(
			"isGroupConversation",
			"()Z"
		);
	}
	android::app::Notification_MessagingStyle Notification_MessagingStyle::setConversationTitle(JString arg0)
	{
		return callObjectMethod(
			"setConversationTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_MessagingStyle Notification_MessagingStyle::setGroupConversation(jboolean arg0)
	{
		return callObjectMethod(
			"setGroupConversation",
			"(Z)Landroid/app/Notification$MessagingStyle;",
			arg0
		);
	}
} // namespace android::app

