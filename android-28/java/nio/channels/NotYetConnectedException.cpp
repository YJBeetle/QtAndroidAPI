#include "./NotYetConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	NotYetConnectedException::NotYetConnectedException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NotYetConnectedException::NotYetConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

