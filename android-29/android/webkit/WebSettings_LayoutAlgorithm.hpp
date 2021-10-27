#pragma once

#ifndef ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM
#define ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::webkit
{
	class WebSettings_LayoutAlgorithm : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NARROW_COLUMNS();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject SINGLE_COLUMN();
		static QAndroidJniObject TEXT_AUTOSIZING();
		
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
	QAndroidJniObject WebSettings_LayoutAlgorithm::NARROW_COLUMNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NARROW_COLUMNS",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NORMAL",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::SINGLE_COLUMN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"SINGLE_COLUMN",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::TEXT_AUTOSIZING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"TEXT_AUTOSIZING",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	
	// Constructors
	void WebSettings_LayoutAlgorithm::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WebSettings_LayoutAlgorithm::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$LayoutAlgorithm;",
			arg0
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$LayoutAlgorithm;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray WebSettings_LayoutAlgorithm::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"values",
			"()[Landroid/webkit/WebSettings$LayoutAlgorithm;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebSettings_LayoutAlgorithm : public __jni_impl::android::webkit::WebSettings_LayoutAlgorithm
	{
	public:
		WebSettings_LayoutAlgorithm(QAndroidJniObject obj) { __thiz = obj; }
		WebSettings_LayoutAlgorithm()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM

