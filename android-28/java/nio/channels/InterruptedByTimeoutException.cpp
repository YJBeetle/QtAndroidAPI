#include "./InterruptedByTimeoutException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	InterruptedByTimeoutException::InterruptedByTimeoutException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	InterruptedByTimeoutException::InterruptedByTimeoutException()
		: java::io::IOException(
			"java.nio.channels.InterruptedByTimeoutException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

