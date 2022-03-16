#include "./NotYetBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	NotYetBoundException::NotYetBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

