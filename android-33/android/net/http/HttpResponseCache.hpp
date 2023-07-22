#pragma once

#include "../../../java/io/File.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/CacheRequest.def.hpp"
#include "../../../java/net/CacheResponse.def.hpp"
#include "../../../java/net/URI.def.hpp"
#include "../../../java/net/URLConnection.def.hpp"
#include "./HttpResponseCache.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::http::HttpResponseCache HttpResponseCache::getInstalled()
	{
		return callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"getInstalled",
			"()Landroid/net/http/HttpResponseCache;"
		);
	}
	inline android::net::http::HttpResponseCache HttpResponseCache::install(java::io::File arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"install",
			"(Ljava/io/File;J)Landroid/net/http/HttpResponseCache;",
			arg0.object(),
			arg1
		);
	}
	inline void HttpResponseCache::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void HttpResponseCache::delete_() const
	{
		callMethod<void>(
			"delete",
			"()V"
		);
	}
	inline void HttpResponseCache::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::net::CacheResponse HttpResponseCache::get(java::net::URI arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jint HttpResponseCache::getHitCount() const
	{
		return callMethod<jint>(
			"getHitCount",
			"()I"
		);
	}
	inline jint HttpResponseCache::getNetworkCount() const
	{
		return callMethod<jint>(
			"getNetworkCount",
			"()I"
		);
	}
	inline jint HttpResponseCache::getRequestCount() const
	{
		return callMethod<jint>(
			"getRequestCount",
			"()I"
		);
	}
	inline jlong HttpResponseCache::maxSize() const
	{
		return callMethod<jlong>(
			"maxSize",
			"()J"
		);
	}
	inline java::net::CacheRequest HttpResponseCache::put(java::net::URI arg0, java::net::URLConnection arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jlong HttpResponseCache::size() const
	{
		return callMethod<jlong>(
			"size",
			"()J"
		);
	}
} // namespace android::net::http

// Base class headers
#include "../../../java/net/ResponseCache.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
