#include "../../JString.hpp"
#include "./CacheRequest.hpp"
#include "./CacheResponse.hpp"
#include "./URI.hpp"
#include "./URLConnection.hpp"
#include "./ResponseCache.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	ResponseCache::ResponseCache(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ResponseCache::ResponseCache()
		: JObject(
			"java.net.ResponseCache",
			"()V"
		) {}
	
	// Methods
	java::net::ResponseCache ResponseCache::getDefault()
	{
		return callStaticObjectMethod(
			"java.net.ResponseCache",
			"getDefault",
			"()Ljava/net/ResponseCache;"
		);
	}
	void ResponseCache::setDefault(java::net::ResponseCache arg0)
	{
		callStaticMethod<void>(
			"java.net.ResponseCache",
			"setDefault",
			"(Ljava/net/ResponseCache;)V",
			arg0.object()
		);
	}
	java::net::CacheResponse ResponseCache::get(java::net::URI arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	java::net::CacheRequest ResponseCache::put(java::net::URI arg0, java::net::URLConnection arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::net

