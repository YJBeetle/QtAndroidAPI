#include "./ClosedChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	ClosedChannelException::ClosedChannelException()
		: java::io::IOException(
			"java.nio.channels.ClosedChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

