#include "./IllegalChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	IllegalChannelGroupException::IllegalChannelGroupException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.IllegalChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

