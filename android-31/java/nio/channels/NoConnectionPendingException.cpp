#include "./NoConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	NoConnectionPendingException::NoConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NoConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

