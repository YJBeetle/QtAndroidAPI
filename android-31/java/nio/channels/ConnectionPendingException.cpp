#include "./ConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	ConnectionPendingException::ConnectionPendingException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ConnectionPendingException::ConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

