#include "./ConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	ConnectionPendingException::ConnectionPendingException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ConnectionPendingException::ConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

