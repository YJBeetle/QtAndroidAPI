#pragma once

#ifndef ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE
#define ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::webkit
{
	class WebSettings_PluginState : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ON();
		static QAndroidJniObject ON_DEMAND();
		static QAndroidJniObject OFF();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	QAndroidJniObject WebSettings_PluginState::ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"ON",
			"Landroid/webkit/WebSettings$PluginState;");
	}
	QAndroidJniObject WebSettings_PluginState::ON_DEMAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"ON_DEMAND",
			"Landroid/webkit/WebSettings$PluginState;");
	}
	QAndroidJniObject WebSettings_PluginState::OFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$PluginState",
			"OFF",
			"Landroid/webkit/WebSettings$PluginState;");
	}
	
	// Constructors
	void WebSettings_PluginState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings$PluginState",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WebSettings_PluginState::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$PluginState",
			"values",
			"()[Landroid/webkit/WebSettings$PluginState;");
	}
	QAndroidJniObject WebSettings_PluginState::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$PluginState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$PluginState;",
			arg0);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebSettings_PluginState : public __jni_impl::android::webkit::WebSettings_PluginState
	{
	public:
		WebSettings_PluginState(QAndroidJniObject obj) { __thiz = obj; }
		WebSettings_PluginState()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE

