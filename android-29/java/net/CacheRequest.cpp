#include "../io/OutputStream.hpp"
#include "./CacheRequest.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	CacheRequest::CacheRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CacheRequest::CacheRequest()
		: __JniBaseClass(
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
	QAndroidJniObject CacheRequest::getBody()
	{
		return callObjectMethod(
			"getBody",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace java::net

