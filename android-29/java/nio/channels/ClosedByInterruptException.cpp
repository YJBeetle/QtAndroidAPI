#include "./ClosedByInterruptException.hpp"

namespace java::nio::channels
{
	// Fields
	
	ClosedByInterruptException::ClosedByInterruptException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClosedByInterruptException::ClosedByInterruptException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ClosedByInterruptException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

