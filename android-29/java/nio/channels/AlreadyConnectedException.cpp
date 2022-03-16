#include "./AlreadyConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	AlreadyConnectedException::AlreadyConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

