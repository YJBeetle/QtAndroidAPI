#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebView;
}
class JObject;
class JString;

namespace android::webkit
{
	class CookieManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CookieManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CookieManager(QAndroidJniObject obj);
		
		// Constructors
		CookieManager();
		
		// Methods
		static jboolean allowFileSchemeCookies();
		static android::webkit::CookieManager getInstance();
		static void setAcceptFileSchemeCookies(jboolean arg0);
		jboolean acceptCookie();
		jboolean acceptThirdPartyCookies(android::webkit::WebView arg0);
		void flush();
		JString getCookie(JString arg0);
		jboolean hasCookies();
		void removeAllCookie();
		void removeAllCookies(JObject arg0);
		void removeExpiredCookie();
		void removeSessionCookie();
		void removeSessionCookies(JObject arg0);
		void setAcceptCookie(jboolean arg0);
		void setAcceptThirdPartyCookies(android::webkit::WebView arg0, jboolean arg1);
		void setCookie(JString arg0, JString arg1);
		void setCookie(JString arg0, JString arg1, JObject arg2);
	};
} // namespace android::webkit

