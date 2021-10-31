#include "./ConsoleMessage_MessageLevel.hpp"
#include "./ConsoleMessage.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	ConsoleMessage::ConsoleMessage(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConsoleMessage::ConsoleMessage(jstring arg0, jstring arg1, jint arg2, android::webkit::ConsoleMessage_MessageLevel arg3)
		: __JniBaseClass(
			"android.webkit.ConsoleMessage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V",
			arg0,
			arg1,
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
	jstring ConsoleMessage::message()
	{
		return callObjectMethod(
			"message",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage::messageLevel()
	{
		return callObjectMethod(
			"messageLevel",
			"()Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	jstring ConsoleMessage::sourceId()
	{
		return callObjectMethod(
			"sourceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::webkit

