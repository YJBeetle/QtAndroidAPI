#include "./AsynchronousCloseException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	AsynchronousCloseException::AsynchronousCloseException()
		: java::nio::channels::ClosedChannelException(
			"java.nio.channels.AsynchronousCloseException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

