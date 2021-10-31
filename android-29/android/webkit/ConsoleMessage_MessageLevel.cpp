#include "./ConsoleMessage_MessageLevel.hpp"

namespace android::webkit
{
	// Fields
	QAndroidJniObject ConsoleMessage_MessageLevel::DEBUG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"DEBUG",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"ERROR",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"LOG",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::TIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"TIP",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	QAndroidJniObject ConsoleMessage_MessageLevel::WARNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"WARNING",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	
	ConsoleMessage_MessageLevel::ConsoleMessage_MessageLevel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ConsoleMessage_MessageLevel::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/ConsoleMessage$MessageLevel;",
			arg0
		);
	}
	jarray ConsoleMessage_MessageLevel::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"values",
			"()[Landroid/webkit/ConsoleMessage$MessageLevel;"
		).object<jarray>();
	}
} // namespace android::webkit

