#include "./WebSettings_ZoomDensity.hpp"

namespace android::webkit
{
	// Fields
	QAndroidJniObject WebSettings_ZoomDensity::CLOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"CLOSE",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	QAndroidJniObject WebSettings_ZoomDensity::FAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"FAR",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	QAndroidJniObject WebSettings_ZoomDensity::MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"MEDIUM",
			"Landroid/webkit/WebSettings$ZoomDensity;"
		);
	}
	
	// QAndroidJniObject forward
	WebSettings_ZoomDensity::WebSettings_ZoomDensity(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject WebSettings_ZoomDensity::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$ZoomDensity;",
			arg0
		);
	}
	jarray WebSettings_ZoomDensity::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"values",
			"()[Landroid/webkit/WebSettings$ZoomDensity;"
		).object<jarray>();
	}
} // namespace android::webkit

