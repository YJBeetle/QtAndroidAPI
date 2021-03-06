#pragma once

#ifndef ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE
#define ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::webkit
{
	class WebSettings_TextSize : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject SMALLEST();
		static QAndroidJniObject SMALLER();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject LARGER();
		static QAndroidJniObject LARGEST();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	QAndroidJniObject WebSettings_TextSize::SMALLEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"SMALLEST",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	QAndroidJniObject WebSettings_TextSize::SMALLER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"SMALLER",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	QAndroidJniObject WebSettings_TextSize::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"NORMAL",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	QAndroidJniObject WebSettings_TextSize::LARGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"LARGER",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	QAndroidJniObject WebSettings_TextSize::LARGEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$TextSize",
			"LARGEST",
			"Landroid/webkit/WebSettings$TextSize;"
		);
	}
	
	// Constructors
	void WebSettings_TextSize::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings$TextSize",
			"(V)V");
	}
	
	// Methods
	jarray WebSettings_TextSize::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$TextSize",
			"values",
			"()[Landroid/webkit/WebSettings$TextSize;"
		).object<jarray>();
	}
	QAndroidJniObject WebSettings_TextSize::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$TextSize",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$TextSize;",
			arg0
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebSettings_TextSize : public __jni_impl::android::webkit::WebSettings_TextSize
	{
	public:
		WebSettings_TextSize(QAndroidJniObject obj) { __thiz = obj; }
		WebSettings_TextSize()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE

