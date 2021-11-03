#pragma once

#include "../../JObject.hpp"
#include "./CookieHandler.hpp"

namespace java::net
{
	class HttpCookie;
}
namespace java::net
{
	class URI;
}

namespace java::net
{
	class CookieManager : public java::net::CookieHandler
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CookieManager(const char *className, const char *sig, Ts...agv) : java::net::CookieHandler(className, sig, std::forward<Ts>(agv)...) {}
		CookieManager(QAndroidJniObject obj);
		
		// Constructors
		CookieManager();
		CookieManager(JObject arg0, JObject arg1);
		
		// Methods
		JObject get(java::net::URI arg0, JObject arg1);
		JObject getCookieStore();
		void put(java::net::URI arg0, JObject arg1);
		void setCookiePolicy(JObject arg0);
	};
} // namespace java::net

