#include "./WebSettings_PluginState.hpp"

namespace android::webkit
{
	// Fields
	QAndroidJniObject WebSettings_PluginState::OFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"OFF",
			"Landroid/webkit/WebSettings$PluginState;"
		);
	}
	QAndroidJniObject WebSettings_PluginState::ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"ON",
			"Landroid/webkit/WebSettings$PluginState;"
		);
	}
	QAndroidJniObject WebSettings_PluginState::ON_DEMAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"ON_DEMAND",
			"Landroid/webkit/WebSettings$PluginState;"
		);
	}
	
	WebSettings_PluginState::WebSettings_PluginState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WebSettings_PluginState::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$PluginState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$PluginState;",
			arg0
		);
	}
	jarray WebSettings_PluginState::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$PluginState",
			"values",
			"()[Landroid/webkit/WebSettings$PluginState;"
		).object<jarray>();
	}
} // namespace android::webkit

