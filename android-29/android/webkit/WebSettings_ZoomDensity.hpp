#pragma once

#ifndef ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY
#define ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY

#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::webkit
{
	class WebSettings_ZoomDensity : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FAR();
		static QAndroidJniObject MEDIUM();
		static QAndroidJniObject CLOSE();
		
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
	QAndroidJniObject WebSettings_ZoomDensity::FAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"FAR",
			"Landroid/webkit/WebSettings$ZoomDensity;");
	}
	QAndroidJniObject WebSettings_ZoomDensity::MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"MEDIUM",
			"Landroid/webkit/WebSettings$ZoomDensity;");
	}
	QAndroidJniObject WebSettings_ZoomDensity::CLOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$ZoomDensity",
			"CLOSE",
			"Landroid/webkit/WebSettings$ZoomDensity;");
	}
	
	// Constructors
	void WebSettings_ZoomDensity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings$ZoomDensity",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WebSettings_ZoomDensity::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"values",
			"()[Landroid/webkit/WebSettings$ZoomDensity;");
	}
	QAndroidJniObject WebSettings_ZoomDensity::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$ZoomDensity;",
			arg0);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebSettings_ZoomDensity : public __jni_impl::android::webkit::WebSettings_ZoomDensity
	{
	public:
		WebSettings_ZoomDensity(QAndroidJniObject obj) { __thiz = obj; }
		WebSettings_ZoomDensity()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY

