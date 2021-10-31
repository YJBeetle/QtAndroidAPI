#include "./ConsoleMessage_MessageLevel.hpp"

namespace android::webkit
{
	// Fields
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage_MessageLevel::DEBUG()
	{
		return getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"DEBUG",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage_MessageLevel::ERROR()
	{
		return getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"ERROR",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage_MessageLevel::LOG()
	{
		return getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"LOG",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage_MessageLevel::TIP()
	{
		return getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"TIP",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage_MessageLevel::WARNING()
	{
		return getStaticObjectField(
			"android.webkit.ConsoleMessage$MessageLevel",
			"WARNING",
			"Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
	
	// QAndroidJniObject forward
	ConsoleMessage_MessageLevel::ConsoleMessage_MessageLevel(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage_MessageLevel::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/ConsoleMessage$MessageLevel;",
			arg0
		);
	}
	jarray ConsoleMessage_MessageLevel::values()
	{
		return callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"values",
			"()[Landroid/webkit/ConsoleMessage$MessageLevel;"
		).object<jarray>();
	}
} // namespace android::webkit

