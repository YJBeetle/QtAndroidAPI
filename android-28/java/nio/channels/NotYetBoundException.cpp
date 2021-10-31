#include "./NotYetBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	NotYetBoundException::NotYetBoundException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NotYetBoundException::NotYetBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

