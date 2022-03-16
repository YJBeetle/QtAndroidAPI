#include "../io/InputStream.hpp"
#include "./CacheResponse.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	CacheResponse::CacheResponse()
		: JObject(
			"java.net.CacheResponse",
			"()V"
		) {}
	
	// Methods
	java::io::InputStream CacheResponse::getBody() const
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/InputStream;"
		);
	}
	JObject CacheResponse::getHeaders() const
	{
		return callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::net

