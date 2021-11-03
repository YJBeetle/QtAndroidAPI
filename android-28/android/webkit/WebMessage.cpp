#include "./WebMessage.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebMessage::WebMessage(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebMessage::WebMessage(jstring arg0)
		: JObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	WebMessage::WebMessage(jstring arg0, jarray arg1)
		: JObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;[Landroid/webkit/WebMessagePort;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jstring WebMessage::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray WebMessage::getPorts()
	{
		return callObjectMethod(
			"getPorts",
			"()[Landroid/webkit/WebMessagePort;"
		).object<jarray>();
	}
} // namespace android::webkit

