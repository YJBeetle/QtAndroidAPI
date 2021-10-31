#include "./IllegalBlockingModeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalBlockingModeException::IllegalBlockingModeException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	IllegalBlockingModeException::IllegalBlockingModeException()
		: java::lang::IllegalStateException(
			"java.nio.channels.IllegalBlockingModeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

