#include "./NoConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	NoConnectionPendingException::NoConnectionPendingException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NoConnectionPendingException::NoConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NoConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

