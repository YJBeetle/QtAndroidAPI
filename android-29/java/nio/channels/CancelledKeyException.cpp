#include "./CancelledKeyException.hpp"

namespace java::nio::channels
{
	// Fields
	
	CancelledKeyException::CancelledKeyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CancelledKeyException::CancelledKeyException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.CancelledKeyException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

