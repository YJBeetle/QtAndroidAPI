#include "./ShutdownChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	ShutdownChannelGroupException::ShutdownChannelGroupException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ShutdownChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

