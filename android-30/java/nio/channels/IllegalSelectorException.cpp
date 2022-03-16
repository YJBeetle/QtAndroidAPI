#include "./IllegalSelectorException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	IllegalSelectorException::IllegalSelectorException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.IllegalSelectorException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

