#include "../io/OutputStream.hpp"
#include "./CacheRequest.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	CacheRequest::CacheRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CacheRequest::CacheRequest()
		: JObject(
			"java.net.CacheRequest",
			"()V"
		) {}
	
	// Methods
	void CacheRequest::abort()
	{
		callMethod<void>(
			"abort",
			"()V"
		);
	}
	java::io::OutputStream CacheRequest::getBody()
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace java::net

