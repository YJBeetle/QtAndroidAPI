#pragma once

#include "../../JString.hpp"
#include "./CacheRequest.def.hpp"
#include "./CacheResponse.def.hpp"
#include "./URI.def.hpp"
#include "./URLConnection.def.hpp"
#include "./ResponseCache.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline ResponseCache::ResponseCache()
		: JObject(
			"java.net.ResponseCache",
			"()V"
		) {}
	
	// Methods
	inline java::net::ResponseCache ResponseCache::getDefault()
	{
		return callStaticObjectMethod(
			"java.net.ResponseCache",
			"getDefault",
			"()Ljava/net/ResponseCache;"
		);
	}
	inline void ResponseCache::setDefault(java::net::ResponseCache arg0)
	{
		callStaticMethod<void>(
			"java.net.ResponseCache",
			"setDefault",
			"(Ljava/net/ResponseCache;)V",
			arg0.object()
		);
	}
	inline java::net::CacheResponse ResponseCache::get(java::net::URI arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline java::net::CacheRequest ResponseCache::put(java::net::URI arg0, java::net::URLConnection arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
