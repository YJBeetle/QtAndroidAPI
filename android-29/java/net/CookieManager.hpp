#pragma once

#include "../../__JniBaseClass.hpp"
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
		CookieManager(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		__JniBaseClass get(java::net::URI arg0, __JniBaseClass arg1);
		__JniBaseClass getCookieStore();
		void put(java::net::URI arg0, __JniBaseClass arg1);
		void setCookiePolicy(__JniBaseClass arg0);
	};
} // namespace java::net

