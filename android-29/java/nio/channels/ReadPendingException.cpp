#include "./ReadPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	ReadPendingException::ReadPendingException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ReadPendingException::ReadPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ReadPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

