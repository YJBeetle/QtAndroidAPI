#pragma once

#include "../../JString.hpp"
#include "./HttpCookie.def.hpp"
#include "./URI.def.hpp"
#include "./CookieManager.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline CookieManager::CookieManager()
		: java::net::CookieHandler(
			"java.net.CookieManager",
			"()V"
		) {}
	inline CookieManager::CookieManager(JObject arg0, JObject arg1)
		: java::net::CookieHandler(
			"java.net.CookieManager",
			"(Ljava/net/CookieStore;Ljava/net/CookiePolicy;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject CookieManager::get(java::net::URI arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject CookieManager::getCookieStore() const
	{
		return callObjectMethod(
			"getCookieStore",
			"()Ljava/net/CookieStore;"
		);
	}
	inline void CookieManager::put(java::net::URI arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CookieManager::setCookiePolicy(JObject arg0) const
	{
		callMethod<void>(
			"setCookiePolicy",
			"(Ljava/net/CookiePolicy;)V",
			arg0.object()
		);
	}
} // namespace java::net

// Base class headers
#include "./CookieHandler.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
