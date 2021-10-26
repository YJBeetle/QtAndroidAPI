#pragma once

#ifndef ANDROID_WEBKIT_WEBICONDATABASE
#define ANDROID_WEBKIT_WEBICONDATABASE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebIconDatabase : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void close();
		void open(jstring arg0);
		void open(const QString &arg0);
		void removeAllIcons();
		void requestIconForPageUrl(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void requestIconForPageUrl(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void retainIconForPageUrl(jstring arg0);
		void retainIconForPageUrl(const QString &arg0);
		void releaseIconForPageUrl(jstring arg0);
		void releaseIconForPageUrl(const QString &arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebIconDatabase::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebIconDatabase",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WebIconDatabase::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebIconDatabase",
			"getInstance",
			"()Landroid/webkit/WebIconDatabase;"
		);
	}
	void WebIconDatabase::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void WebIconDatabase::open(jstring arg0)
	{
		__thiz.callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebIconDatabase::open(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebIconDatabase::removeAllIcons()
	{
		__thiz.callMethod<void>(
			"removeAllIcons",
			"()V"
		);
	}
	void WebIconDatabase::requestIconForPageUrl(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestIconForPageUrl",
			"(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void WebIconDatabase::requestIconForPageUrl(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"requestIconForPageUrl",
			"(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void WebIconDatabase::retainIconForPageUrl(jstring arg0)
	{
		__thiz.callMethod<void>(
			"retainIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebIconDatabase::retainIconForPageUrl(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"retainIconForPageUrl",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebIconDatabase::releaseIconForPageUrl(jstring arg0)
	{
		__thiz.callMethod<void>(
			"releaseIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebIconDatabase::releaseIconForPageUrl(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"releaseIconForPageUrl",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebIconDatabase : public __jni_impl::android::webkit::WebIconDatabase
	{
	public:
		WebIconDatabase(QAndroidJniObject obj) { __thiz = obj; }
		WebIconDatabase()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBICONDATABASE

