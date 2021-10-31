#include "./ClosedByInterruptException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	ClosedByInterruptException::ClosedByInterruptException(QAndroidJniObject obj) : java::nio::channels::AsynchronousCloseException(obj) {}
	
	// Constructors
	ClosedByInterruptException::ClosedByInterruptException()
		: java::nio::channels::AsynchronousCloseException(
			"java.nio.channels.ClosedByInterruptException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

