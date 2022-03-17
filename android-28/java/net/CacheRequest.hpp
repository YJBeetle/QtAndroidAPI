#pragma once

#include "../io/OutputStream.def.hpp"
#include "./CacheRequest.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline CacheRequest::CacheRequest()
		: JObject(
			"java.net.CacheRequest",
			"()V"
		) {}
	
	// Methods
	inline void CacheRequest::abort() const
	{
		callMethod<void>(
			"abort",
			"()V"
		);
	}
	inline java::io::OutputStream CacheRequest::getBody() const
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
