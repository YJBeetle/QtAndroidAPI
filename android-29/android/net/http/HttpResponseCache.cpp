#include "../../../java/io/File.hpp"
#include "../../../java/net/CacheRequest.hpp"
#include "../../../java/net/CacheResponse.hpp"
#include "../../../java/net/URI.hpp"
#include "../../../java/net/URLConnection.hpp"
#include "./HttpResponseCache.hpp"

namespace android::net::http
{
	// Fields
	
	HttpResponseCache::HttpResponseCache(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject HttpResponseCache::getInstalled()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"getInstalled",
			"()Landroid/net/http/HttpResponseCache;"
		);
	}
	QAndroidJniObject HttpResponseCache::install(java::io::File arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"install",
			"(Ljava/io/File;J)Landroid/net/http/HttpResponseCache;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void HttpResponseCache::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void HttpResponseCache::_delete()
	{
		__thiz.callMethod<void>(
			"delete",
			"()V"
		);
	}
	void HttpResponseCache::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject HttpResponseCache::get(java::net::URI arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint HttpResponseCache::getHitCount()
	{
		return __thiz.callMethod<jint>(
			"getHitCount",
			"()I"
		);
	}
	jint HttpResponseCache::getNetworkCount()
	{
		return __thiz.callMethod<jint>(
			"getNetworkCount",
			"()I"
		);
	}
	jint HttpResponseCache::getRequestCount()
	{
		return __thiz.callMethod<jint>(
			"getRequestCount",
			"()I"
		);
	}
	jlong HttpResponseCache::maxSize()
	{
		return __thiz.callMethod<jlong>(
			"maxSize",
			"()J"
		);
	}
	QAndroidJniObject HttpResponseCache::put(java::net::URI arg0, java::net::URLConnection arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong HttpResponseCache::size()
	{
		return __thiz.callMethod<jlong>(
			"size",
			"()J"
		);
	}
} // namespace android::net::http

