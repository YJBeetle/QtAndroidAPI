#include "./ReadPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	ReadPendingException::ReadPendingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReadPendingException::ReadPendingException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ReadPendingException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

