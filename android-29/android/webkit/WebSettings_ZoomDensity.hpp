#pragma once

#ifndef ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY
#define ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::webkit
{
	class WebSettings_ZoomDensity : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLOSE();
		static QAndroidJniObject FAR();
		static QAndroidJniObject MEDIUM();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
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
	
	// Constructors
	void WebSettings_ZoomDensity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings$ZoomDensity",
			"(V)V");
	}
	
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
	QAndroidJniObject WebSettings_ZoomDensity::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$ZoomDensity",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$ZoomDensity;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

