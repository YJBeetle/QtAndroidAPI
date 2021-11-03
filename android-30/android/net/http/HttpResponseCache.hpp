#pragma once

#include "../../../java/net/ResponseCache.hpp"

namespace java::io
{
	class File;
}
class JString;
namespace java::net
{
	class CacheRequest;
}
namespace java::net
{
	class CacheResponse;
}
namespace java::net
{
	class URI;
}
namespace java::net
{
	class URLConnection;
}

namespace android::net::http
{
	class HttpResponseCache : public java::net::ResponseCache
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HttpResponseCache(const char *className, const char *sig, Ts...agv) : java::net::ResponseCache(className, sig, std::forward<Ts>(agv)...) {}
		HttpResponseCache(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::http::HttpResponseCache getInstalled();
		static android::net::http::HttpResponseCache install(java::io::File arg0, jlong arg1);
		void close();
		void _delete();
		void flush();
		java::net::CacheResponse get(java::net::URI arg0, JString arg1, JObject arg2);
		jint getHitCount();
		jint getNetworkCount();
		jint getRequestCount();
		jlong maxSize();
		java::net::CacheRequest put(java::net::URI arg0, java::net::URLConnection arg1);
		jlong size();
	};
} // namespace android::net::http

