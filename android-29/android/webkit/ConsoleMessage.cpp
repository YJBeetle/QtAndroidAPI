#include "./ConsoleMessage_MessageLevel.hpp"
#include "./ConsoleMessage.hpp"

namespace android::webkit
{
	// Fields
	
	ConsoleMessage::ConsoleMessage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConsoleMessage::ConsoleMessage(jstring &arg0, jstring &arg1, jint &arg2, android::webkit::ConsoleMessage_MessageLevel &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ConsoleMessage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	ConsoleMessage::ConsoleMessage(const QString &arg0, const QString &arg1, jint &arg2, android::webkit::ConsoleMessage_MessageLevel &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ConsoleMessage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jint ConsoleMessage::lineNumber()
	{
		return __thiz.callMethod<jint>(
			"lineNumber",
			"()I"
		);
	}
	jstring ConsoleMessage::message()
	{
		return __thiz.callObjectMethod(
			"message",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ConsoleMessage::messageLevel()
	{
		return __thiz.callObjectMethod(
			"messageLevel",
			"()Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	jstring ConsoleMessage::sourceId()
	{
		return __thiz.callObjectMethod(
			"sourceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::webkit

