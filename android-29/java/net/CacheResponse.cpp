#include "../io/InputStream.hpp"
#include "./CacheResponse.hpp"

namespace java::net
{
	// Fields
	
	CacheResponse::CacheResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CacheResponse::CacheResponse()
	{
		__thiz = QAndroidJniObject(
			"java.net.CacheResponse",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CacheResponse::getBody()
	{
		return __thiz.callObjectMethod(
			"getBody",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject CacheResponse::getHeaders()
	{
		return __thiz.callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::net

