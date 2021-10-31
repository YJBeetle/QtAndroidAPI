#include "./AsynchronousCloseException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	AsynchronousCloseException::AsynchronousCloseException(QJniObject obj) : java::nio::channels::ClosedChannelException(obj) {}
	
	// Constructors
	AsynchronousCloseException::AsynchronousCloseException()
		: java::nio::channels::ClosedChannelException(
			"java.nio.channels.AsynchronousCloseException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

