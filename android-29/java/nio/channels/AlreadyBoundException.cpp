#include "./AlreadyBoundException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	AlreadyBoundException::AlreadyBoundException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	AlreadyBoundException::AlreadyBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

