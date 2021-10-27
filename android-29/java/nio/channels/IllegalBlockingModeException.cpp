#include "./IllegalBlockingModeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	IllegalBlockingModeException::IllegalBlockingModeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalBlockingModeException::IllegalBlockingModeException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.IllegalBlockingModeException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

