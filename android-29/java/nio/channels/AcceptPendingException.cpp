#include "./AcceptPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	AcceptPendingException::AcceptPendingException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	AcceptPendingException::AcceptPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AcceptPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

