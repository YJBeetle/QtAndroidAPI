#include "./NotYetBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	NotYetBoundException::NotYetBoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotYetBoundException::NotYetBoundException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NotYetBoundException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

