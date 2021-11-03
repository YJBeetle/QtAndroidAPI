#include "./ConsoleMessage_MessageLevel.hpp"
#include "../../JString.hpp"
#include "./ConsoleMessage.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	ConsoleMessage::ConsoleMessage(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConsoleMessage::ConsoleMessage(JString arg0, JString arg1, jint arg2, android::webkit::ConsoleMessage_MessageLevel arg3)
		: JObject(
			"android.webkit.ConsoleMessage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		) {}
	
	// Methods
	jint ConsoleMessage::lineNumber()
	{
		return callMethod<jint>(
			"lineNumber",
			"()I"
		);
	}
	JString ConsoleMessage::message()
	{
		return callObjectMethod(
			"message",
			"()Ljava/lang/String;"
		);
	}
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage::messageLevel()
	{
		return callObjectMethod(
			"messageLevel",
			"()Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	JString ConsoleMessage::sourceId()
	{
		return callObjectMethod(
			"sourceId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::webkit

