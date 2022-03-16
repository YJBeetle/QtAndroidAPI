#include "./WritePendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	WritePendingException::WritePendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.WritePendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

