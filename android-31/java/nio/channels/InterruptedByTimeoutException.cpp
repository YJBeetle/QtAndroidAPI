#include "./InterruptedByTimeoutException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	InterruptedByTimeoutException::InterruptedByTimeoutException()
		: java::io::IOException(
			"java.nio.channels.InterruptedByTimeoutException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

