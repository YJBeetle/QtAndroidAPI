#include "./IllegalBlockingModeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	IllegalBlockingModeException::IllegalBlockingModeException()
		: java::lang::IllegalStateException(
			"java.nio.channels.IllegalBlockingModeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

