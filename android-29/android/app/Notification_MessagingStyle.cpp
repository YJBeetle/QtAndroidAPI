#include "./Notification_MessagingStyle_Message.hpp"
#include "./Person.hpp"
#include "./Notification_MessagingStyle.hpp"

namespace android::app
{
	// Fields
	jint Notification_MessagingStyle::MAXIMUM_RETAINED_MESSAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$MessagingStyle",
			"MAXIMUM_RETAINED_MESSAGES"
		);
	}
	
	Notification_MessagingStyle::Notification_MessagingStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_MessagingStyle::Notification_MessagingStyle(android::app::Person arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle",
			"(Landroid/app/Person;)V",
			arg0.__jniObject().object()
		);
	}
	Notification_MessagingStyle::Notification_MessagingStyle(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject Notification_MessagingStyle::addHistoricMessage(android::app::Notification_MessagingStyle_Message arg0)
	{
		return __thiz.callObjectMethod(
			"addHistoricMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_MessagingStyle::addMessage(android::app::Notification_MessagingStyle_Message arg0)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_MessagingStyle::addMessage(jstring arg0, jlong arg1, android::app::Person arg2)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)Landroid/app/Notification$MessagingStyle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_MessagingStyle::addMessage(jstring arg0, jlong arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0,
			arg1,
			arg2
		);
	}
	jstring Notification_MessagingStyle::getConversationTitle()
	{
		return __thiz.callObjectMethod(
			"getConversationTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle::getHistoricMessages()
	{
		return __thiz.callObjectMethod(
			"getHistoricMessages",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Notification_MessagingStyle::getMessages()
	{
		return __thiz.callObjectMethod(
			"getMessages",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Notification_MessagingStyle::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/app/Person;"
		);
	}
	jstring Notification_MessagingStyle::getUserDisplayName()
	{
		return __thiz.callObjectMethod(
			"getUserDisplayName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Notification_MessagingStyle::isGroupConversation()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupConversation",
			"()Z"
		);
	}
	QAndroidJniObject Notification_MessagingStyle::setConversationTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setConversationTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_MessagingStyle::setGroupConversation(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setGroupConversation",
			"(Z)Landroid/app/Notification$MessagingStyle;",
			arg0
		);
	}
} // namespace android::app

