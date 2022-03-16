#include "./NonWritableChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	NonWritableChannelException::NonWritableChannelException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NonWritableChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

