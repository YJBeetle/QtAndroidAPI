#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebMessage.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebMessage::WebMessage(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebMessage::WebMessage(JString arg0)
		: JObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	WebMessage::WebMessage(JString arg0, JArray arg1)
		: JObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;[Landroid/webkit/WebMessagePort;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	JString WebMessage::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		);
	}
	JArray WebMessage::getPorts() const
	{
		return callObjectMethod(
			"getPorts",
			"()[Landroid/webkit/WebMessagePort;"
		);
	}
} // namespace android::webkit

