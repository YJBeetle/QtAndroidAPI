#include "../../JString.hpp"
#include "./MailTo.hpp"

namespace android::net
{
	// Fields
	JString MailTo::MAILTO_SCHEME()
	{
		return getStaticObjectField(
			"android.net.MailTo",
			"MAILTO_SCHEME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	jboolean MailTo::isMailTo(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.MailTo",
			"isMailTo",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	android::net::MailTo MailTo::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.MailTo",
			"parse",
			"(Ljava/lang/String;)Landroid/net/MailTo;",
			arg0.object<jstring>()
		);
	}
	JString MailTo::getBody() const
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/lang/String;"
		);
	}
	JString MailTo::getCc() const
	{
		return callObjectMethod(
			"getCc",
			"()Ljava/lang/String;"
		);
	}
	JObject MailTo::getHeaders() const
	{
		return callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
	JString MailTo::getSubject() const
	{
		return callObjectMethod(
			"getSubject",
			"()Ljava/lang/String;"
		);
	}
	JString MailTo::getTo() const
	{
		return callObjectMethod(
			"getTo",
			"()Ljava/lang/String;"
		);
	}
	JString MailTo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

