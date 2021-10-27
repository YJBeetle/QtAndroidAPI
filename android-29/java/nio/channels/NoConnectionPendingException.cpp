#include "./NoConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	NoConnectionPendingException::NoConnectionPendingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoConnectionPendingException::NoConnectionPendingException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NoConnectionPendingException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

