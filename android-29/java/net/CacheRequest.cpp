#include "../io/OutputStream.hpp"
#include "./CacheRequest.hpp"

namespace java::net
{
	// Fields
	
	CacheRequest::CacheRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CacheRequest::CacheRequest()
	{
		__thiz = QAndroidJniObject(
			"java.net.CacheRequest",
			"()V"
		);
	}
	
	// Methods
	void CacheRequest::abort()
	{
		__thiz.callMethod<void>(
			"abort",
			"()V"
		);
	}
	QAndroidJniObject CacheRequest::getBody()
	{
		return __thiz.callObjectMethod(
			"getBody",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace java::net

