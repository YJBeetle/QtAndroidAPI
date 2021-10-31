#include "../io/InputStream.hpp"
#include "./CacheResponse.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	CacheResponse::CacheResponse(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CacheResponse::CacheResponse()
		: __JniBaseClass(
			"java.net.CacheResponse",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject CacheResponse::getBody()
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject CacheResponse::getHeaders()
	{
		return callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::net

