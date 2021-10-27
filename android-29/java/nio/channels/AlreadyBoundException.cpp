#include "./AlreadyBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	AlreadyBoundException::AlreadyBoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlreadyBoundException::AlreadyBoundException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AlreadyBoundException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

