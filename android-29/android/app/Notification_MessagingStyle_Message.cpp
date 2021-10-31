#include "./Person.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./Notification_MessagingStyle_Message.hpp"

namespace android::app
{
	// Fields
	
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(jstring arg0, jlong arg1, android::app::Person arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(jstring arg0, jlong arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jstring Notification_MessagingStyle_Message::getDataMimeType()
	{
		return __thiz.callObjectMethod(
			"getDataMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getDataUri()
	{
		return __thiz.callObjectMethod(
			"getDataUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring Notification_MessagingStyle_Message::getSender()
	{
		return __thiz.callObjectMethod(
			"getSender",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_MessagingStyle_Message::getSenderPerson()
	{
		return __thiz.callObjectMethod(
			"getSenderPerson",
			"()Landroid/app/Person;"
		);
	}
	jstring Notification_MessagingStyle_Message::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong Notification_MessagingStyle_Message::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	QAndroidJniObject Notification_MessagingStyle_Message::setData(jstring arg0, android::net::Uri arg1)
	{
		return __thiz.callObjectMethod(
			"setData",
			"(Ljava/lang/String;Landroid/net/Uri;)Landroid/app/Notification$MessagingStyle$Message;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::app

