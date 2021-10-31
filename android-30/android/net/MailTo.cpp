#include "./MailTo.hpp"

namespace android::net
{
	// Fields
	jstring MailTo::MAILTO_SCHEME()
	{
		return getStaticObjectField(
			"android.net.MailTo",
			"MAILTO_SCHEME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	MailTo::MailTo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MailTo::isMailTo(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.MailTo",
			"isMailTo",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	android::net::MailTo MailTo::parse(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.net.MailTo",
			"parse",
			"(Ljava/lang/String;)Landroid/net/MailTo;",
			arg0
		);
	}
	jstring MailTo::getBody()
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::getCc()
	{
		return callObjectMethod(
			"getCc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass MailTo::getHeaders()
	{
		return callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
	jstring MailTo::getSubject()
	{
		return callObjectMethod(
			"getSubject",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::getTo()
	{
		return callObjectMethod(
			"getTo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

