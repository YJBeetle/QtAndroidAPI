#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/net/ResponseCache.hpp"

namespace java::io
{
	class File;
}
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
		
		HttpResponseCache(QAndroidJniObject obj);
		// Constructors
		HttpResponseCache() = default;
		
		// Methods
		static QAndroidJniObject getInstalled();
		static QAndroidJniObject install(java::io::File arg0, jlong arg1);
		void close();
		void _delete();
		void flush();
		QAndroidJniObject get(java::net::URI arg0, jstring arg1, __JniBaseClass arg2);
		jint getHitCount();
		jint getNetworkCount();
		jint getRequestCount();
		jlong maxSize();
		QAndroidJniObject put(java::net::URI arg0, java::net::URLConnection arg1);
		jlong size();
	};
} // namespace android::net::http

