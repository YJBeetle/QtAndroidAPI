#include "./IllegalBlockingModeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	IllegalBlockingModeException::IllegalBlockingModeException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	IllegalBlockingModeException::IllegalBlockingModeException()
		: java::lang::IllegalStateException(
			"java.nio.channels.IllegalBlockingModeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

