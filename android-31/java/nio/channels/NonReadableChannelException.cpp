#include "./NonReadableChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	NonReadableChannelException::NonReadableChannelException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NonReadableChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

