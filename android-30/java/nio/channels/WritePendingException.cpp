#include "./WritePendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	WritePendingException::WritePendingException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	WritePendingException::WritePendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.WritePendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

