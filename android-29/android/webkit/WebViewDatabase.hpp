#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEWDATABASE
#define ANDROID_WEBKIT_WEBVIEWDATABASE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::webkit
{
	class WebViewDatabase : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::android::content::Context arg0);
		void setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void setHttpAuthUsernamePassword(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		jarray getHttpAuthUsernamePassword(jstring arg0, jstring arg1);
		jarray getHttpAuthUsernamePassword(const QString &arg0, const QString &arg1);
		void clearFormData();
		jboolean hasUsernamePassword();
		void clearUsernamePassword();
		jboolean hasHttpAuthUsernamePassword();
		void clearHttpAuthUsernamePassword();
		jboolean hasFormData();
	};
} // namespace __jni_impl::android::webkit

#include "../content/Context.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebViewDatabase::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewDatabase",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WebViewDatabase::getInstance(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebViewDatabase",
			"getInstance",
			"(Landroid/content/Context;)Landroid/webkit/WebViewDatabase;",
			arg0.__jniObject().object()
		);
	}
	void WebViewDatabase::setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void WebViewDatabase::setHttpAuthUsernamePassword(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	jarray WebViewDatabase::getHttpAuthUsernamePassword(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray WebViewDatabase::getHttpAuthUsernamePassword(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	void WebViewDatabase::clearFormData()
	{
		__thiz.callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	jboolean WebViewDatabase::hasUsernamePassword()
	{
		return __thiz.callMethod<jboolean>(
			"hasUsernamePassword",
			"()Z"
		);
	}
	void WebViewDatabase::clearUsernamePassword()
	{
		__thiz.callMethod<void>(
			"clearUsernamePassword",
			"()V"
		);
	}
	jboolean WebViewDatabase::hasHttpAuthUsernamePassword()
	{
		return __thiz.callMethod<jboolean>(
			"hasHttpAuthUsernamePassword",
			"()Z"
		);
	}
	void WebViewDatabase::clearHttpAuthUsernamePassword()
	{
		__thiz.callMethod<void>(
			"clearHttpAuthUsernamePassword",
			"()V"
		);
	}
	jboolean WebViewDatabase::hasFormData()
	{
		return __thiz.callMethod<jboolean>(
			"hasFormData",
			"()Z"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebViewDatabase : public __jni_impl::android::webkit::WebViewDatabase
	{
	public:
		WebViewDatabase(QAndroidJniObject obj) { __thiz = obj; }
		WebViewDatabase()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEWDATABASE

