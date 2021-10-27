#include "./ConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	ConnectionPendingException::ConnectionPendingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConnectionPendingException::ConnectionPendingException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ConnectionPendingException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

