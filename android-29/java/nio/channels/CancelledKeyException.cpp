#include "./CancelledKeyException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	CancelledKeyException::CancelledKeyException()
		: java::lang::IllegalStateException(
			"java.nio.channels.CancelledKeyException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

