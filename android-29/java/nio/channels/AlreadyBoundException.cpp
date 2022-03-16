#include "./AlreadyBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	AlreadyBoundException::AlreadyBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

