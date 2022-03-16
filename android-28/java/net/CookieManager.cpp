#include "../../JString.hpp"
#include "./HttpCookie.hpp"
#include "./URI.hpp"
#include "./CookieManager.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	CookieManager::CookieManager()
		: java::net::CookieHandler(
			"java.net.CookieManager",
			"()V"
		) {}
	CookieManager::CookieManager(JObject arg0, JObject arg1)
		: java::net::CookieHandler(
			"java.net.CookieManager",
			"(Ljava/net/CookieStore;Ljava/net/CookiePolicy;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject CookieManager::get(java::net::URI arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject CookieManager::getCookieStore() const
	{
		return callObjectMethod(
			"getCookieStore",
			"()Ljava/net/CookieStore;"
		);
	}
	void CookieManager::put(java::net::URI arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CookieManager::setCookiePolicy(JObject arg0) const
	{
		callMethod<void>(
			"setCookiePolicy",
			"(Ljava/net/CookiePolicy;)V",
			arg0.object()
		);
	}
} // namespace java::net

