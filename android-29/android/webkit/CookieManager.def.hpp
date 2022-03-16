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
		
		// QJniObject forward
		template<typename ...Ts> explicit CookieManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CookieManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CookieManager();
		
		// Methods
		static jboolean allowFileSchemeCookies();
		static android::webkit::CookieManager getInstance();
		static void setAcceptFileSchemeCookies(jboolean arg0);
		jboolean acceptCookie() const;
		jboolean acceptThirdPartyCookies(android::webkit::WebView arg0) const;
		void flush() const;
		JString getCookie(JString arg0) const;
		jboolean hasCookies() const;
		void removeAllCookie() const;
		void removeAllCookies(JObject arg0) const;
		void removeExpiredCookie() const;
		void removeSessionCookie() const;
		void removeSessionCookies(JObject arg0) const;
		void setAcceptCookie(jboolean arg0) const;
		void setAcceptThirdPartyCookies(android::webkit::WebView arg0, jboolean arg1) const;
		void setCookie(JString arg0, JString arg1) const;
		void setCookie(JString arg0, JString arg1, JObject arg2) const;
	};
} // namespace android::webkit

