#include "../io/OutputStream.hpp"
#include "./CacheRequest.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	CacheRequest::CacheRequest(QAndroidJniObject obj) : JObject(obj) {}
	
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

