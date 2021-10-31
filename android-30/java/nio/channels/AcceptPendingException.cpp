#include "./AcceptPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	AcceptPendingException::AcceptPendingException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	AcceptPendingException::AcceptPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AcceptPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

