#include "./NotYetBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	NotYetBoundException::NotYetBoundException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NotYetBoundException::NotYetBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

