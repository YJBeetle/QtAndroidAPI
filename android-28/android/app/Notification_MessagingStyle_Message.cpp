#include "./Person.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Notification_MessagingStyle_Message.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(JString arg0, jlong arg1, android::app::Person arg2)
		: JObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		) {}
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(JString arg0, jlong arg1, JString arg2)
		: JObject(
			"android.app.Notification$MessagingStyle$Message",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	JString Notification_MessagingStyle_Message::getDataMimeType()
	{
		return callObjectMethod(
			"getDataMimeType",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri Notification_MessagingStyle_Message::getDataUri()
	{
		return callObjectMethod(
			"getDataUri",
			"()Landroid/net/Uri;"
		);
	}
	android::os::Bundle Notification_MessagingStyle_Message::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString Notification_MessagingStyle_Message::getSender()
	{
		return callObjectMethod(
			"getSender",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::Person Notification_MessagingStyle_Message::getSenderPerson()
	{
		return callObjectMethod(
			"getSenderPerson",
			"()Landroid/app/Person;"
		);
	}
	JString Notification_MessagingStyle_Message::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jlong Notification_MessagingStyle_Message::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	android::app::Notification_MessagingStyle_Message Notification_MessagingStyle_Message::setData(JString arg0, android::net::Uri arg1)
	{
		return callObjectMethod(
			"setData",
			"(Ljava/lang/String;Landroid/net/Uri;)Landroid/app/Notification$MessagingStyle$Message;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::app

