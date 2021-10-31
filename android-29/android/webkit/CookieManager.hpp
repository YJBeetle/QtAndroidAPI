#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class WebView;
}

namespace android::webkit
{
	class CookieManager : public __JniBaseClass
	{
	public:
		// Fields
		
		CookieManager(QAndroidJniObject obj);
		// Constructors
		CookieManager();
		
		// Methods
		static jboolean allowFileSchemeCookies();
		static QAndroidJniObject getInstance();
		static void setAcceptFileSchemeCookies(jboolean arg0);
		jboolean acceptCookie();
		jboolean acceptThirdPartyCookies(android::webkit::WebView arg0);
		void flush();
		jstring getCookie(jstring arg0);
		jboolean hasCookies();
		void removeAllCookie();
		void removeAllCookies(__JniBaseClass arg0);
		void removeExpiredCookie();
		void removeSessionCookie();
		void removeSessionCookies(__JniBaseClass arg0);
		void setAcceptCookie(jboolean arg0);
		void setAcceptThirdPartyCookies(android::webkit::WebView arg0, jboolean arg1);
		void setCookie(jstring arg0, jstring arg1);
		void setCookie(jstring arg0, jstring arg1, __JniBaseClass arg2);
	};
} // namespace android::webkit

