#include "./NotYetConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	NotYetConnectedException::NotYetConnectedException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NotYetConnectedException::NotYetConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

