#include "./NotYetConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	NotYetConnectedException::NotYetConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

