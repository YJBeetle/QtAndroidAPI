#pragma once

#ifndef JAVA_NET_RESPONSECACHE
#define JAVA_NET_RESPONSECACHE

#include "../../__JniBaseClass.hpp"

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

namespace __jni_impl::java::net
{
	class ResponseCache : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(__jni_impl::java::net::URI arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject get(__jni_impl::java::net::URI arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject put(__jni_impl::java::net::URI arg0, __jni_impl::java::net::URLConnection arg1);
		static QAndroidJniObject getDefault();
		static void setDefault(__jni_impl::java::net::ResponseCache arg0);
	};
} // namespace __jni_impl::java::net

#include "CacheResponse.hpp"
#include "URI.hpp"
#include "CacheRequest.hpp"
#include "URLConnection.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void ResponseCache::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ResponseCache",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ResponseCache::get(__jni_impl::java::net::URI arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResponseCache::get(__jni_impl::java::net::URI arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResponseCache::put(__jni_impl::java::net::URI arg0, __jni_impl::java::net::URLConnection arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResponseCache::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.ResponseCache",
			"getDefault",
			"()Ljava/net/ResponseCache;"
		);
	}
	void ResponseCache::setDefault(__jni_impl::java::net::ResponseCache arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.ResponseCache",
			"setDefault",
			"(Ljava/net/ResponseCache;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class ResponseCache : public __jni_impl::java::net::ResponseCache
	{
	public:
		ResponseCache(QAndroidJniObject obj) { __thiz = obj; }
		ResponseCache()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_RESPONSECACHE

