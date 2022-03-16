#include "./AcceptPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	AcceptPendingException::AcceptPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AcceptPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

