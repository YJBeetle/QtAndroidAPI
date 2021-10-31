#include "./HttpCookie.hpp"
#include "./URI.hpp"
#include "./CookieManager.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	CookieManager::CookieManager(QAndroidJniObject obj) : java::net::CookieHandler(obj) {}
	
	// Constructors
	CookieManager::CookieManager()
		: java::net::CookieHandler(
			"java.net.CookieManager",
			"()V"
		) {}
	CookieManager::CookieManager(__JniBaseClass arg0, __JniBaseClass arg1)
		: java::net::CookieHandler(
			"java.net.CookieManager",
			"(Ljava/net/CookieStore;Ljava/net/CookiePolicy;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject CookieManager::get(java::net::URI arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CookieManager::getCookieStore()
	{
		return callObjectMethod(
			"getCookieStore",
			"()Ljava/net/CookieStore;"
		);
	}
	void CookieManager::put(java::net::URI arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CookieManager::setCookiePolicy(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setCookiePolicy",
			"(Ljava/net/CookiePolicy;)V",
			arg0.object()
		);
	}
} // namespace java::net

