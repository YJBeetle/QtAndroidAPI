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
	
	// QAndroidJniObject forward
	WebSettings_TextSize::WebSettings_TextSize(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::WebSettings_TextSize WebSettings_TextSize::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$TextSize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$TextSize;",
			arg0
		);
	}
	jarray WebSettings_TextSize::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$TextSize",
			"values",
			"()[Landroid/webkit/WebSettings$TextSize;"
		).object<jarray>();
	}
} // namespace android::webkit

