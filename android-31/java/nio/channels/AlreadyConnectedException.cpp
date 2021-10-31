#include "./AlreadyConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	AlreadyConnectedException::AlreadyConnectedException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	AlreadyConnectedException::AlreadyConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

