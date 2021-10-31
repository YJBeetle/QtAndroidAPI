#include "../../../java/io/File.hpp"
#include "../../../java/net/CacheRequest.hpp"
#include "../../../java/net/CacheResponse.hpp"
#include "../../../java/net/URI.hpp"
#include "../../../java/net/URLConnection.hpp"
#include "./HttpResponseCache.hpp"

namespace android::net::http
{
	// Fields
	
	// QJniObject forward
	HttpResponseCache::HttpResponseCache(QJniObject obj) : java::net::ResponseCache(obj) {}
	
	// Constructors
	
	// Methods
	android::net::http::HttpResponseCache HttpResponseCache::getInstalled()
	{
		return callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"getInstalled",
			"()Landroid/net/http/HttpResponseCache;"
		);
	}
	android::net::http::HttpResponseCache HttpResponseCache::install(java::io::File arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"install",
			"(Ljava/io/File;J)Landroid/net/http/HttpResponseCache;",
			arg0.object(),
			arg1
		);
	}
	void HttpResponseCache::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void HttpResponseCache::_delete()
	{
		callMethod<void>(
			"delete",
			"()V"
		);
	}
	void HttpResponseCache::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::net::CacheResponse HttpResponseCache::get(java::net::URI arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jint HttpResponseCache::getHitCount()
	{
		return callMethod<jint>(
			"getHitCount",
			"()I"
		);
	}
	jint HttpResponseCache::getNetworkCount()
	{
		return callMethod<jint>(
			"getNetworkCount",
			"()I"
		);
	}
	jint HttpResponseCache::getRequestCount()
	{
		return callMethod<jint>(
			"getRequestCount",
			"()I"
		);
	}
	jlong HttpResponseCache::maxSize()
	{
		return callMethod<jlong>(
			"maxSize",
			"()J"
		);
	}
	java::net::CacheRequest HttpResponseCache::put(java::net::URI arg0, java::net::URLConnection arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.object(),
			arg1.object()
		);
	}
	jlong HttpResponseCache::size()
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
} // namespace android::net::http

