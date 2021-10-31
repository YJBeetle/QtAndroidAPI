#include "./AlreadyBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	AlreadyBoundException::AlreadyBoundException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	AlreadyBoundException::AlreadyBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

