#pragma once

#include "./WebView.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CookieManager.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline CookieManager::CookieManager()
		: JObject(
			"android.webkit.CookieManager",
			"()V"
		) {}
	
	// Methods
	inline jboolean CookieManager::allowFileSchemeCookies()
	{
		return callStaticMethod<jboolean>(
			"android.webkit.CookieManager",
			"allowFileSchemeCookies",
			"()Z"
		);
	}
	inline android::webkit::CookieManager CookieManager::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.CookieManager",
			"getInstance",
			"()Landroid/webkit/CookieManager;"
		);
	}
	inline void CookieManager::setAcceptFileSchemeCookies(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.webkit.CookieManager",
			"setAcceptFileSchemeCookies",
			"(Z)V",
			arg0
		);
	}
	inline jboolean CookieManager::acceptCookie() const
	{
		return callMethod<jboolean>(
			"acceptCookie",
			"()Z"
		);
	}
	inline jboolean CookieManager::acceptThirdPartyCookies(android::webkit::WebView arg0) const
	{
		return callMethod<jboolean>(
			"acceptThirdPartyCookies",
			"(Landroid/webkit/WebView;)Z",
			arg0.object()
		);
	}
	inline void CookieManager::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline JString CookieManager::getCookie(JString arg0) const
	{
		return callObjectMethod(
			"getCookie",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean CookieManager::hasCookies() const
	{
		return callMethod<jboolean>(
			"hasCookies",
			"()Z"
		);
	}
	inline void CookieManager::removeAllCookie() const
	{
		callMethod<void>(
			"removeAllCookie",
			"()V"
		);
	}
	inline void CookieManager::removeAllCookies(JObject arg0) const
	{
		callMethod<void>(
			"removeAllCookies",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	inline void CookieManager::removeExpiredCookie() const
	{
		callMethod<void>(
			"removeExpiredCookie",
			"()V"
		);
	}
	inline void CookieManager::removeSessionCookie() const
	{
		callMethod<void>(
			"removeSessionCookie",
			"()V"
		);
	}
	inline void CookieManager::removeSessionCookies(JObject arg0) const
	{
		callMethod<void>(
			"removeSessionCookies",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	inline void CookieManager::setAcceptCookie(jboolean arg0) const
	{
		callMethod<void>(
			"setAcceptCookie",
			"(Z)V",
			arg0
		);
	}
	inline void CookieManager::setAcceptThirdPartyCookies(android::webkit::WebView arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setAcceptThirdPartyCookies",
			"(Landroid/webkit/WebView;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void CookieManager::setCookie(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void CookieManager::setCookie(JString arg0, JString arg1, JObject arg2) const
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

// Base class headers

