#pragma once

#ifndef ANDROID_WEBKIT_COOKIEMANAGER
#define ANDROID_WEBKIT_COOKIEMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebView;
}

namespace __jni_impl::android::webkit
{
	class CookieManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void flush();
		jboolean acceptThirdPartyCookies(__jni_impl::android::webkit::WebView arg0);
		void setCookie(jstring arg0, jstring arg1);
		void setCookie(const QString &arg0, const QString &arg1);
		void setCookie(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		void setCookie(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		void setAcceptCookie(jboolean arg0);
		jboolean acceptCookie();
		void setAcceptThirdPartyCookies(__jni_impl::android::webkit::WebView arg0, jboolean arg1);
		void removeSessionCookie();
		void removeSessionCookies(__jni_impl::__JniBaseClass arg0);
		void removeAllCookie();
		void removeAllCookies(__jni_impl::__JniBaseClass arg0);
		jboolean hasCookies();
		void removeExpiredCookie();
		static jboolean allowFileSchemeCookies();
		static void setAcceptFileSchemeCookies(jboolean arg0);
		jstring getCookie(jstring arg0);
		jstring getCookie(const QString &arg0);
	};
} // namespace __jni_impl::android::webkit

#include "WebView.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void CookieManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.CookieManager",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CookieManager::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.CookieManager",
			"getInstance",
			"()Landroid/webkit/CookieManager;"
		);
	}
	void CookieManager::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jboolean CookieManager::acceptThirdPartyCookies(__jni_impl::android::webkit::WebView arg0)
	{
		return __thiz.callMethod<jboolean>(
			"acceptThirdPartyCookies",
			"(Landroid/webkit/WebView;)Z",
			arg0.__jniObject().object()
		);
	}
	void CookieManager::setCookie(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void CookieManager::setCookie(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void CookieManager::setCookie(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setCookie",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void CookieManager::setCookie(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setCookie",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void CookieManager::setAcceptCookie(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAcceptCookie",
			"(Z)V",
			arg0
		);
	}
	jboolean CookieManager::acceptCookie()
	{
		return __thiz.callMethod<jboolean>(
			"acceptCookie",
			"()Z"
		);
	}
	void CookieManager::setAcceptThirdPartyCookies(__jni_impl::android::webkit::WebView arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setAcceptThirdPartyCookies",
			"(Landroid/webkit/WebView;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void CookieManager::removeSessionCookie()
	{
		__thiz.callMethod<void>(
			"removeSessionCookie",
			"()V"
		);
	}
	void CookieManager::removeSessionCookies(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeSessionCookies",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void CookieManager::removeAllCookie()
	{
		__thiz.callMethod<void>(
			"removeAllCookie",
			"()V"
		);
	}
	void CookieManager::removeAllCookies(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeAllCookies",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean CookieManager::hasCookies()
	{
		return __thiz.callMethod<jboolean>(
			"hasCookies",
			"()Z"
		);
	}
	void CookieManager::removeExpiredCookie()
	{
		__thiz.callMethod<void>(
			"removeExpiredCookie",
			"()V"
		);
	}
	jboolean CookieManager::allowFileSchemeCookies()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.webkit.CookieManager",
			"allowFileSchemeCookies",
			"()Z"
		);
	}
	void CookieManager::setAcceptFileSchemeCookies(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.webkit.CookieManager",
			"setAcceptFileSchemeCookies",
			"(Z)V",
			arg0
		);
	}
	jstring CookieManager::getCookie(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCookie",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring CookieManager::getCookie(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCookie",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class CookieManager : public __jni_impl::android::webkit::CookieManager
	{
	public:
		CookieManager(QAndroidJniObject obj) { __thiz = obj; }
		CookieManager()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_COOKIEMANAGER

