#include "./AcceptPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	AcceptPendingException::AcceptPendingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AcceptPendingException::AcceptPendingException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AcceptPendingException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

