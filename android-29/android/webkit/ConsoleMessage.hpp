#pragma once

#ifndef ANDROID_WEBKIT_CONSOLEMESSAGE
#define ANDROID_WEBKIT_CONSOLEMESSAGE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class ConsoleMessage_MessageLevel;
}

namespace __jni_impl::android::webkit
{
	class ConsoleMessage : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2, __jni_impl::android::webkit::ConsoleMessage_MessageLevel arg3);
		
		// Methods
		jint lineNumber();
		jstring message();
		jstring sourceId();
		QAndroidJniObject messageLevel();
	};
} // namespace __jni_impl::android::webkit

#include "ConsoleMessage_MessageLevel.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void ConsoleMessage::__constructor(jstring arg0, jstring arg1, jint arg2, __jni_impl::android::webkit::ConsoleMessage_MessageLevel arg3)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ConsoleMessage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
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
	jstring ConsoleMessage::sourceId()
	{
		return __thiz.callObjectMethod(
			"sourceId",
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
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class ConsoleMessage : public __jni_impl::android::webkit::ConsoleMessage
	{
	public:
		ConsoleMessage(QAndroidJniObject obj) { __thiz = obj; }
		ConsoleMessage(jstring arg0, jstring arg1, jint arg2, __jni_impl::android::webkit::ConsoleMessage_MessageLevel arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_CONSOLEMESSAGE

