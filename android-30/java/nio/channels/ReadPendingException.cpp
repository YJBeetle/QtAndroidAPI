#include "./ReadPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	ReadPendingException::ReadPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ReadPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

