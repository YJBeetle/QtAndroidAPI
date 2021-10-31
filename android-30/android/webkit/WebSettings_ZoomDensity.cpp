#include "./WebSettings_ZoomDensity.hpp"

namespace android::webkit
{
	// Fields
	android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::CLOSE()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"CLOSE",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::FAR()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"FAR",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::MEDIUM()
	{
		return getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"MEDIUM",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	
	// QJniObject forward
	WebSettings_ZoomDensity::WebSettings_ZoomDensity(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::WebSettings_ZoomDensity WebSettings_ZoomDensity::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$ZoomDensity;",
			arg0
		);
	}
	jarray WebSettings_ZoomDensity::values()
	{
		return callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"values",
			"()[Landroid/webkit/WebSettings$ZoomDensity;"
		).object<jarray>();
	}
} // namespace android::webkit

