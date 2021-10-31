#include "./CacheRequest.hpp"
#include "./CacheResponse.hpp"
#include "./URI.hpp"
#include "./URLConnection.hpp"
#include "./ResponseCache.hpp"

namespace java::net
{
	// Fields
	
	ResponseCache::ResponseCache(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResponseCache::ResponseCache()
	{
		__thiz = QAndroidJniObject(
			"java.net.ResponseCache",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ResponseCache::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.ResponseCache",
			"getDefault",
			"()Ljava/net/ResponseCache;"
		);
	}
	void ResponseCache::setDefault(java::net::ResponseCache arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.ResponseCache",
			"setDefault",
			"(Ljava/net/ResponseCache;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ResponseCache::get(java::net::URI arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResponseCache::put(java::net::URI arg0, java::net::URLConnection arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::net

