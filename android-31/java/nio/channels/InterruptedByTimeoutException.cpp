#include "./InterruptedByTimeoutException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	InterruptedByTimeoutException::InterruptedByTimeoutException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	InterruptedByTimeoutException::InterruptedByTimeoutException()
		: java::io::IOException(
			"java.nio.channels.InterruptedByTimeoutException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

