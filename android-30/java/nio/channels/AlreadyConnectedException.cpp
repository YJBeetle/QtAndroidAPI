#include "./AlreadyConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	AlreadyConnectedException::AlreadyConnectedException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	AlreadyConnectedException::AlreadyConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

