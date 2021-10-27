#include "./AsynchronousCloseException.hpp"

namespace java::nio::channels
{
	// Fields
	
	AsynchronousCloseException::AsynchronousCloseException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AsynchronousCloseException::AsynchronousCloseException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AsynchronousCloseException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

