#include "./ClosedSelectorException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	ClosedSelectorException::ClosedSelectorException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ClosedSelectorException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

