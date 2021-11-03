#include "../../JArray.hpp"
#include "./Person.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Notification_MessagingStyle_Message.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_MessagingStyle_Message::Notification_MessagingStyle_Message(QJniObject obj) : JObject(obj) {}
	
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
	JObject Notification_MessagingStyle_Message::getMessagesFromBundleArray(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.app.Notification$MessagingStyle$Message",
			"getMessagesFromBundleArray",
			"([Landroid/os/Parcelable;)Ljava/util/List;",
			arg0.object<jarray>()
		);
	}
	JString Notification_MessagingStyle_Message::getDataMimeType() const
	{
		return callObjectMethod(
			"getDataMimeType",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri Notification_MessagingStyle_Message::getDataUri() const
	{
		return callObjectMethod(
			"getDataUri",
			"()Landroid/net/Uri;"
		);
	}
	android::os::Bundle Notification_MessagingStyle_Message::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString Notification_MessagingStyle_Message::getSender() const
	{
		return callObjectMethod(
			"getSender",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::Person Notification_MessagingStyle_Message::getSenderPerson() const
	{
		return callObjectMethod(
			"getSenderPerson",
			"()Landroid/app/Person;"
		);
	}
	JString Notification_MessagingStyle_Message::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jlong Notification_MessagingStyle_Message::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	android::app::Notification_MessagingStyle_Message Notification_MessagingStyle_Message::setData(JString arg0, android::net::Uri arg1) const
	{
		return callObjectMethod(
			"setData",
			"(Ljava/lang/String;Landroid/net/Uri;)Landroid/app/Notification$MessagingStyle$Message;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::app

