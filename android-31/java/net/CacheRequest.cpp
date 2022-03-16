#include "../io/OutputStream.hpp"
#include "./CacheRequest.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	CacheRequest::CacheRequest()
		: JObject(
			"java.net.CacheRequest",
			"()V"
		) {}
	
	// Methods
	void CacheRequest::abort() const
	{
		callMethod<void>(
			"abort",
			"()V"
		);
	}
	java::io::OutputStream CacheRequest::getBody() const
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace java::net

