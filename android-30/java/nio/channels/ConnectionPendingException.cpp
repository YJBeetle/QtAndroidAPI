#include "./ConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	ConnectionPendingException::ConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

