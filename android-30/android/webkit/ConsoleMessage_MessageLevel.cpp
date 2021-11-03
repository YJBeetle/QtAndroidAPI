#include "../../JArray.hpp"
#include "../../JString.hpp"
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
	
	// QJniObject forward
	ConsoleMessage_MessageLevel::ConsoleMessage_MessageLevel(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::ConsoleMessage_MessageLevel ConsoleMessage_MessageLevel::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/ConsoleMessage$MessageLevel;",
			arg0.object<jstring>()
		);
	}
	JArray ConsoleMessage_MessageLevel::values()
	{
		return callStaticObjectMethod(
			"android.webkit.ConsoleMessage$MessageLevel",
			"values",
			"()[Landroid/webkit/ConsoleMessage$MessageLevel;"
		);
	}
} // namespace android::webkit

