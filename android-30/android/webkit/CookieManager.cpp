#include "./WebView.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CookieManager.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	CookieManager::CookieManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CookieManager::CookieManager()
		: JObject(
			"android.webkit.CookieManager",
			"()V"
		) {}
	
	// Methods
	jboolean CookieManager::allowFileSchemeCookies()
	{
		return callStaticMethod<jboolean>(
			"android.webkit.CookieManager",
			"allowFileSchemeCookies",
			"()Z"
		);
	}
	android::webkit::CookieManager CookieManager::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.CookieManager",
			"getInstance",
			"()Landroid/webkit/CookieManager;"
		);
	}
	void CookieManager::setAcceptFileSchemeCookies(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.webkit.CookieManager",
			"setAcceptFileSchemeCookies",
			"(Z)V",
			arg0
		);
	}
	jboolean CookieManager::acceptCookie()
	{
		return callMethod<jboolean>(
			"acceptCookie",
			"()Z"
		);
	}
	jboolean CookieManager::acceptThirdPartyCookies(android::webkit::WebView arg0)
	{
		return callMethod<jboolean>(
			"acceptThirdPartyCookies",
			"(Landroid/webkit/WebView;)Z",
			arg0.object()
		);
	}
	void CookieManager::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	JString CookieManager::getCookie(JString arg0)
	{
		return callObjectMethod(
			"getCookie",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jboolean CookieManager::hasCookies()
	{
		return callMethod<jboolean>(
			"hasCookies",
			"()Z"
		);
	}
	void CookieManager::removeAllCookie()
	{
		callMethod<void>(
			"removeAllCookie",
			"()V"
		);
	}
	void CookieManager::removeAllCookies(JObject arg0)
	{
		callMethod<void>(
			"removeAllCookies",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	void CookieManager::removeExpiredCookie()
	{
		callMethod<void>(
			"removeExpiredCookie",
			"()V"
		);
	}
	void CookieManager::removeSessionCookie()
	{
		callMethod<void>(
			"removeSessionCookie",
			"()V"
		);
	}
	void CookieManager::removeSessionCookies(JObject arg0)
	{
		callMethod<void>(
			"removeSessionCookies",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	void CookieManager::setAcceptCookie(jboolean arg0)
	{
		callMethod<void>(
			"setAcceptCookie",
			"(Z)V",
			arg0
		);
	}
	void CookieManager::setAcceptThirdPartyCookies(android::webkit::WebView arg0, jboolean arg1)
	{
		callMethod<void>(
			"setAcceptThirdPartyCookies",
			"(Landroid/webkit/WebView;Z)V",
			arg0.object(),
			arg1
		);
	}
	void CookieManager::setCookie(JString arg0, JString arg1)
	{
		callMethod<void>(
			"setCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void CookieManager::setCookie(JString arg0, JString arg1, JObject arg2)
	{
		callMethod<void>(
			"setCookie",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::webkit

