#include "./WritePendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	WritePendingException::WritePendingException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	WritePendingException::WritePendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.WritePendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

