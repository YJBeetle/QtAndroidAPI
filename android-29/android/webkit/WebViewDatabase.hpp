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
		jboolean hasUsernamePassword();
		void clearUsernamePassword();
		jboolean hasHttpAuthUsernamePassword();
		void clearHttpAuthUsernamePassword();
		jboolean hasFormData();
		void setHttpAuthUsernamePassword(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		jarray getHttpAuthUsernamePassword(jstring arg0, jstring arg1);
		void clearFormData();
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
			"()V");
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
	jarray WebViewDatabase::getHttpAuthUsernamePassword(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	void WebViewDatabase::clearFormData()
	{
		__thiz.callMethod<void>(
			"clearFormData",
			"()V"
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

