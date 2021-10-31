#include "./WebSettings_RenderPriority.hpp"

namespace android::webkit
{
	// Fields
	android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::HIGH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"HIGH",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"LOW",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"NORMAL",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	
	// QAndroidJniObject forward
	WebSettings_RenderPriority::WebSettings_RenderPriority(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::WebSettings_RenderPriority WebSettings_RenderPriority::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$RenderPriority;",
			arg0
		);
	}
	jarray WebSettings_RenderPriority::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"values",
			"()[Landroid/webkit/WebSettings$RenderPriority;"
		).object<jarray>();
	}
} // namespace android::webkit

