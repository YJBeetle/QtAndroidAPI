#pragma once

#ifndef ANDROID_NET_HTTP_HTTPRESPONSECACHE
#define ANDROID_NET_HTTP_HTTPRESPONSECACHE

#include "../../../java/net/ResponseCache.hpp"

namespace __jni_impl::java::net
{
	class CacheResponse;
}
namespace __jni_impl::java::net
{
	class URI;
}
namespace __jni_impl::java::net
{
	class CacheRequest;
}
namespace __jni_impl::java::net
{
	class URLConnection;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::net::http
{
	class HttpResponseCache : public __jni_impl::java::net::ResponseCache
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(__jni_impl::java::net::URI arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject put(__jni_impl::java::net::URI arg0, __jni_impl::java::net::URLConnection arg1);
		jlong size();
		void _delete();
		void flush();
		void close();
		jlong maxSize();
		static QAndroidJniObject getInstalled();
		static QAndroidJniObject install(__jni_impl::java::io::File arg0, jlong arg1);
		jint getNetworkCount();
		jint getHitCount();
		jint getRequestCount();
	};
} // namespace __jni_impl::android::net::http

#include "../../../java/net/CacheResponse.hpp"
#include "../../../java/net/URI.hpp"
#include "../../../java/net/CacheRequest.hpp"
#include "../../../java/net/URLConnection.hpp"
#include "../../../java/io/File.hpp"

namespace __jni_impl::android::net::http
{
	// Fields
	
	// Constructors
	void HttpResponseCache::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.http.HttpResponseCache",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject HttpResponseCache::get(__jni_impl::java::net::URI arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject HttpResponseCache::put(__jni_impl::java::net::URI arg0, __jni_impl::java::net::URLConnection arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jlong HttpResponseCache::size()
	{
		return __thiz.callMethod<jlong>(
			"size",
			"()J");
	}
	void HttpResponseCache::_delete()
	{
		__thiz.callMethod<void>(
			"delete",
			"()V");
	}
	void HttpResponseCache::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void HttpResponseCache::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jlong HttpResponseCache::maxSize()
	{
		return __thiz.callMethod<jlong>(
			"maxSize",
			"()J");
	}
	QAndroidJniObject HttpResponseCache::getInstalled()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"getInstalled",
			"()Landroid/net/http/HttpResponseCache;");
	}
	QAndroidJniObject HttpResponseCache::install(__jni_impl::java::io::File arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.HttpResponseCache",
			"install",
			"(Ljava/io/File;J)Landroid/net/http/HttpResponseCache;",
			arg0.__jniObject().object(),
			arg1);
	}
	jint HttpResponseCache::getNetworkCount()
	{
		return __thiz.callMethod<jint>(
			"getNetworkCount",
			"()I");
	}
	jint HttpResponseCache::getHitCount()
	{
		return __thiz.callMethod<jint>(
			"getHitCount",
			"()I");
	}
	jint HttpResponseCache::getRequestCount()
	{
		return __thiz.callMethod<jint>(
			"getRequestCount",
			"()I");
	}
} // namespace __jni_impl::android::net::http

namespace android::net::http
{
	class HttpResponseCache : public __jni_impl::android::net::http::HttpResponseCache
	{
	public:
		HttpResponseCache(QAndroidJniObject obj) { __thiz = obj; }
		HttpResponseCache()
		{
			__constructor();
		}
	};
} // namespace android::net::http

#endif // ANDROID_NET_HTTP_HTTPRESPONSECACHE

