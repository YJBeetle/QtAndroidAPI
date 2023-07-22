#pragma once

#include "../io/InputStream.def.hpp"
#include "./CacheResponse.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline CacheResponse::CacheResponse()
		: JObject(
			"java.net.CacheResponse",
			"()V"
		) {}
	
	// Methods
	inline java::io::InputStream CacheResponse::getBody() const
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/InputStream;"
		);
	}
	inline JObject CacheResponse::getHeaders() const
	{
		return callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
