#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebView;
}

namespace android::webkit
{
	class CookieManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CookieManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CookieManager(QJniObject obj);
		
		// Constructors
		CookieManager();
		
		// Methods
		static jboolean allowFileSchemeCookies();
		static android::webkit::CookieManager getInstance();
		static void setAcceptFileSchemeCookies(jboolean arg0);
		jboolean acceptCookie();
		jboolean acceptThirdPartyCookies(android::webkit::WebView arg0);
		void flush();
		jstring getCookie(jstring arg0);
		jboolean hasCookies();
		void removeAllCookie();
		void removeAllCookies(JObject arg0);
		void removeExpiredCookie();
		void removeSessionCookie();
		void removeSessionCookies(JObject arg0);
		void setAcceptCookie(jboolean arg0);
		void setAcceptThirdPartyCookies(android::webkit::WebView arg0, jboolean arg1);
		void setCookie(jstring arg0, jstring arg1);
		void setCookie(jstring arg0, jstring arg1, JObject arg2);
	};
} // namespace android::webkit

