#include "./ClosedByInterruptException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	ClosedByInterruptException::ClosedByInterruptException(QJniObject obj) : java::nio::channels::AsynchronousCloseException(obj) {}
	
	// Constructors
	ClosedByInterruptException::ClosedByInterruptException()
		: java::nio::channels::AsynchronousCloseException(
			"java.nio.channels.ClosedByInterruptException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

