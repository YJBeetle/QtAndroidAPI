#include "./ClosedByInterruptException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	ClosedByInterruptException::ClosedByInterruptException()
		: java::nio::channels::AsynchronousCloseException(
			"java.nio.channels.ClosedByInterruptException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

