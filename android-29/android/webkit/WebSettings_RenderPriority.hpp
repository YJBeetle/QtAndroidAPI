#pragma once

#ifndef ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY
#define ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::webkit
{
	class WebSettings_RenderPriority : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject HIGH();
		static QAndroidJniObject LOW();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	QAndroidJniObject WebSettings_RenderPriority::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"NORMAL",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	QAndroidJniObject WebSettings_RenderPriority::HIGH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"HIGH",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	QAndroidJniObject WebSettings_RenderPriority::LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"LOW",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	
	// Constructors
	void WebSettings_RenderPriority::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings$RenderPriority",
			"(V)V");
	}
	
	// Methods
	jarray WebSettings_RenderPriority::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"values",
			"()[Landroid/webkit/WebSettings$RenderPriority;"
		).object<jarray>();
	}
	QAndroidJniObject WebSettings_RenderPriority::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$RenderPriority;",
			arg0
		);
	}
	QAndroidJniObject WebSettings_RenderPriority::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$RenderPriority;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebSettings_RenderPriority : public __jni_impl::android::webkit::WebSettings_RenderPriority
	{
	public:
		WebSettings_RenderPriority(QAndroidJniObject obj) { __thiz = obj; }
		WebSettings_RenderPriority()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY

