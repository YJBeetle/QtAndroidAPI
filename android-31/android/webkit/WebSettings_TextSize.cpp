#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./WebSettings_TextSize.hpp"

namespace android::webkit
{
	// Fields
	android::webkit::WebSettings_TextSize WebSettings_TextSize::LARGER()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"LARGER",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	android::webkit::WebSettings_TextSize WebSettings_TextSize::LARGEST()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"LARGEST",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	android::webkit::WebSettings_TextSize WebSettings_TextSize::NORMAL()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"NORMAL",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	android::webkit::WebSettings_TextSize WebSettings_TextSize::SMALLER()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"SMALLER",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	android::webkit::WebSettings_TextSize WebSettings_TextSize::SMALLEST()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"SMALLEST",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	
	// Constructors
	
	// Methods
	android::webkit::WebSettings_TextSize WebSettings_TextSize::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$TextSize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$TextSize;",
			arg0.object<jstring>()
		);
	}
	JArray WebSettings_TextSize::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$TextSize",
			"values",
			"()[Landroid/webkit/WebSettings$TextSize;"
		);
	}
} // namespace android::webkit

